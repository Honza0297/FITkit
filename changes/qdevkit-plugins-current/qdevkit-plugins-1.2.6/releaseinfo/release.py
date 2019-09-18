# -*- coding: utf-8 -*-
# vim: set ts=4 et enc=utf8:
# Plugin informs whether a) a new QDK release is available b) or SVN update is a available
'''
/***************************************************************************
 *   Copyright (C) 2010 Brno University of Technology,                     *
 *   Faculty of Information Technology                                     *
 *   Author(s): Zdenek Vasicek   <vasicek  AT fit.vutbr.cz>                *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU Library General Public License as       *
 *   published by the Free Software Foundation; either version 2 of the    *
 *   License, or (at your option) any later version.                       *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU Library General Public     *
 *   License along with this program; if not, write to the                 *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.         *
 ***************************************************************************/
'''
from PythonQt.QtGui import *
import sys, os

def getText(rootNode):
    text = ""
    for c in rootNode.childNodes:
        if (c.nodeType == 3) and (c.nodeValue): #text node
            text += c.nodeValue
        if (c.nodeType == 1) and (c.hasChildNodes()): #element node
           text += getText(c)
    return text

def getSvnVersion(rev):
    svnexec = app.absolutePath(app.settingsValue("General/SvnExec","svn"),0)
    svndir = app.absolutePath(app.settingsValue("KitApps/TreeLocation","svn"),1)
    svnuser = app.settingsValue("KitApps/SvnUser","")
    svnpass = app.settingsValue("KitApps/SvnPass","")

    par = []
    if (svnuser):
        par.append("--username")
        par.append(svnuser)
    if (svnpass):
        par.append("--password")
        par.append(svnpass)
    if (rev):
        par.append("--revision")
        par.append(rev)
    par.append("info")

    if (os.path.isfile(svnexec)) and (os.path.isdir(svndir)):
        plugin.runProcess(svnexec, par, "SVN_%s" % rev, svndir)

def getLMInfo():
    xml = {'data' : None}
    def downloadFinished(id, status, data):
        
        if (status == 0) and (data) and (data.strip().startswith("<?xml")):
            xml['data'] = data
        
    mainWindow.showStatus(u"Zjišťuji seznam portů pro licence", 5000)

    plugin.connect('downloadFinished(QVariant,int,QString)', downloadFinished)
    plugin.download("http://merlin.fit.vutbr.cz/FITkit/lminfo.php?res=xml&version=%s&qtversion=%s&platform=%s" % (mainWindow.applicationVersion(),mainWindow.qtVersion(),sys.platform), 5000)
    plugin.disconnect('downloadFinished(QVariant,int,QString)', downloadFinished)

    if (xml['data'] == None):
        mainWindow.showStatus(u"Nepodařilo se získat informace o seznamu portů pro licenci. Pravděpodobně nejste připojeni k internetu.", 5000)
        return None

    try:
        from xml.dom.minidom import parseString
        dom = parseString(xml['data'])
        rootNode = dom.documentElement

        releases = {}
        ports = []
        for node in rootNode.getElementsByTagName("portitm"):
            port = int(node.getAttribute("port").strip())
            host = node.getAttribute("host").strip().lower()

            if (host == 'semik'):
                ports.append(port)

        return ports

    except Exception as msg:
        mainWindow.showError(u"Release info",u"Nepodařilo se získat informace o seznamu portů pro licenci. Nastala chyba při zpracování informací.\n")

        return None


def getReleaseInfo(version):

    xml = {'data' : None}
    def downloadFinished(id, status, data):
        
        if (status == 0) and (data) and (data.strip().startswith("<?xml")):
            xml['data'] = data
        
    mainWindow.showStatus(u"Zjišťuji informace o dostupnosti nové verze QDevkitu", 5000)

    plugin.connect('downloadFinished(QVariant,int,QString)', downloadFinished)
    plugin.download("http://merlin.fit.vutbr.cz/FITkit/download/release.xml?version=%s&qtversion=%s&platform=%s" % (mainWindow.applicationVersion(),mainWindow.qtVersion(),sys.platform), 5000)
    plugin.disconnect('downloadFinished(QVariant,int,QString)', downloadFinished)

    if (xml['data'] == None):
        mainWindow.showStatus(u"Nepodařilo se získat informace o novější verzi. Pravděpodobně nejste připojeni k internetu.", 5000)
        return {}

    try:
        from xml.dom.minidom import parseString
        dom = parseString(xml['data'])
        rootNode = dom.documentElement

        releases = {}
        for node in rootNode.getElementsByTagName("release"):
            if (node.getAttribute("state") != "released"): 
                continue

            date = node.getAttribute("date").strip()
            v0,v1,v2 = [int(i) for i in node.getAttribute("version").strip().split('.')]

            flist = [getText(fnode) for fnode in node.getElementsByTagName("feature")]
            blist = [getText(fnode) for fnode in node.getElementsByTagName("bugfix")]

            if (not v0 in releases):
                releases[v0] = {}
            if (not v1 in releases[v0]):
                releases[v0][v1] = {}
            if (not v2 in releases[v0][v1]):
                releases[v0][v1][v2] = (date,flist,blist)

        return releases
    except Exception as msg:
        mainWindow.showError(u"Release info",u"Nepodařilo se získat informace o novější verzi. Nastala chyba při zpracování informací.\n")
        return {}

def checkSVN():
    revisions = {}

    def processFinished(id,exitcode,exitstatus,stdout,stderr):
        if (exitstatus == 0) and (id == "SVN_HEAD") or (id == "SVN_BASE"):
            revision = None
            for l in stdout.splitlines():
                l = l.strip()
                if l.startswith('Revision:'):
                    try:
                        revision = int(l.split(":",2)[1])
                    except:
                        revision = None

            if (revision):
                revisions[id] = revision
        #print "PPF", id, exitcode, exitstatus, stdout


    plugin.connect('processFinished(QVariant,int,int,QString,QString)', processFinished)
    try:
        mainWindow.showStatus(u"Zjišťuji informace o aktuálnosti SVN stromu (BASE)", 5000)
        getSvnVersion("BASE")
        mainWindow.showStatus(u"Zjišťuji informace o aktuálnosti SVN stromu (HEAD).", 5000)
        getSvnVersion("HEAD")
    except:
        pass
    plugin.disconnect('processFinished(QVariant,int,int,QString,QString)', processFinished)

    if ('SVN_HEAD' in revisions) and ('SVN_BASE' in revisions) and (revisions['SVN_HEAD'] > revisions['SVN_BASE']):
        res = mainWindow.showInfoQuestion(u"Release info",u"Byla nalezena novější verze SVN stromu, přejete si provést update?<br><br>Revize lokální kopie: %d, aktuální revize: %d" % (revisions['SVN_BASE'], revisions['SVN_HEAD']))
        if (res == 0x00004000): #YES
           mainWindow.updateSVN() 

    mainWindow.showStatus("")

def checkApp():

    version = [int(i) for i in mainWindow.applicationVersion().split('.')]
    
    r = getReleaseInfo(version)
    #r = None: Pravdepodobne neni pripojeni k internetu, nema tedy smysl dale cokoliv testovat
    if not r:
        return

    existsnew = False
    info = u""
    for v0 in [k for k in r if k >= version[0]]:
        for v1 in [k for k in r[v0] if (v0 > version[0]) or (k >= version[1])]:
            for v2 in [k for k in r[v0][v1] if (v0 > version[0]) or (v1 > version[1]) or (k > version[2])]:
                #print "Nalezena novejsi verze:",v0,v1,v2
                info += u"<b>Verze %d.%d.%d</b><ul>" % (v0,v1,v2)
                date,flist,blist = r[v0][v1][v2]
                for l in flist:
                    info += "<li>"+l+"</li>"
                for l in blist:
                    info += "<li>"+l+"</li>"
                info += "</ul>"
                existsnew = True

    if (existsnew):
        msg = u"<b>Byla vydána novější verze aplikace</b><br><br>"
        if (sys.platform == "win32"):
            #windows 32bit / 64bit (sys.version)
            msg += u"Aktuální verzi je možné stáhnout z adresy <a href=\"http://merlin.fit.vutbr.cz/FITkit/private\">http://merlin.fit.vutbr.cz/FITkit/private</a><br><br> "
        else:
            msg += u"Aktualizujte si prosím aplikaci.<br><br>"            
        msg += u"Verze současně nainstalované aplikace: "+(mainWindow.applicationVersion())+ "<br><br>" + info
        mainWindow.showInformation(u"Release info",msg)

    mainWindow.showStatus("")

def checkPorts():
    actuals = [int(p) for p in tunnels.tunnelPorts().split(',') if p.isnumeric()]

    requested = getLMInfo()
    newcnt = 0
    for p in requested:
        if not p in actuals:
           newcnt += 1
    newlist = ','.join([str(p) for p in requested])

    if (newcnt):
        res = mainWindow.showInfoQuestion(u"Release info",u"Byla nalezeny porty, které nemáte v seznamu tunelovaných portů, přejete si seznam zaktualizovat?<br><br>Aktuální seznam: %s, Nový seznam: %s" % (tunnels.tunnelPorts(), newlist))
        if (res == 0x00004000): 
            tunnels.setTunnelPorts(newlist)

    mainWindow.showStatus("")

#Plugin interface
def init():
    return True

def load():
    try:
        if int(app.settingsValue("General/NewReleaseCheck",1)) == 1:
            checkApp()
    except:
        pass

    try:
        if int(app.settingsValue("General/SvnVersionCheck",1)) == 1:
            checkSVN()
    except:
        pass
 
    try:
        if int(app.settingsValue("General/PortListCheck",1)) == 1:
            checkPorts()
    except:
        pass

    return True
   
def unload():
    return True

def configure():
    dialog = QDialog()
    dialog.modal = True
    dialog.windowTitle = u"Konfigurace pluginu"

    l = QVBoxLayout()

    cb1 = QCheckBox(u"Upozorňovat na novou verzi aplikace",dialog)
    cb1.setChecked(int(app.settingsValue("General/NewReleaseCheck",1)) == 1)
    l.addWidget(cb1)

    cb2 = QCheckBox(u"Upozorňovat na update SVN repozitáře (FITkit aplikací)",dialog)
    cb2.setChecked(int(app.settingsValue("General/SvnVersionCheck",1)) == 1)
    l.addWidget(cb2)


    cb3 = QCheckBox(u"Kontrolovat aktuálnost seznamu portů pro licence",dialog)
    cb3.setChecked(int(app.settingsValue("General/PortListCheck",1)) == 1)
    l.addWidget(cb3)
    l.addStretch(1)

    accept = QPushButton(QIcon(":/icons/22x22/bt-ok.png"), u"Uložit")
    close = QPushButton(QIcon(":/icons/22x22/bt-cancel.png"), u"Zavřít")
    accept.connect("clicked()", dialog.accept)
    close.connect("clicked()", dialog.reject)

    h = QHBoxLayout()
    h.addStretch(1)
    h.addWidget(accept)
    h.addWidget(close)

    l.addLayout(h)

    dialog.setLayout(l)

    if dialog.exec_() == 1: #ulozit nastaveni
        val = 0
        if cb1.isChecked(): val = 1
        app.setSettingsValue("General/NewReleaseCheck", val)
        val = 0
        if cb2.isChecked(): val = 1
        app.setSettingsValue("General/SvnVersionCheck", val)
        val = 0
        if cb3.isChecked(): val = 1
        app.setSettingsValue("General/PortListCheck", val)
        mainWindow.showStatus(u"Nastavení bylo uloženo", 2000)

    return True
