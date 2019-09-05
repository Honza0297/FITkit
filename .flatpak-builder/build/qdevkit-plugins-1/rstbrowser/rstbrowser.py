#!/usr/bin/python
# -*- coding: utf-8 -*-
# vim: set ts=4 et enc=utf-8:
# reST browser
'''
/***************************************************************************
 *   Copyright (C) 2009 Brno University of Technology,                     *
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

import os
from docutils import nodes
from docutils.writers import html4css1
from docutils.parsers import rst

class Translator(html4css1.HTMLTranslator):

    def visit_image(self, node):
#        print "xxx:",self.document.settings.doc_path

#        fn = os.path.join(self.document.settings.doc_path,"img")
#        fn = os.path.join(fn, node['uri'])
#        if (os.path.isfile(fn)):
##            node['uri'] = "file://"+os.path.abspath(fn)
#            node['uri'] = os.path.abspath(fn).replace("\\","/")
##            node['uri'] = ':' + os.path.abspath(fn).replace("\\","/")
##            print "IMG:", node['uri']
#        else:
#            print "! IMG:", node['uri'].encode('utf-8')

        node['uri'] = 'rst:'+node['uri']    
#	print node['uri']
        html4css1.HTMLTranslator.visit_image(self, node)

    def visit_reference(self, node):
        if hasattr(node,'refuri'):
            refname = node['refuri']
            if refname.startswith("DOC") or refname.startswith("CAT") or refname.startswith("SVN_APP_DIR"):
                node['refuri'] = '#'
                #print "RR:", node['refuri']
        html4css1.HTMLTranslator.visit_reference(self, node)

    def visit_figure(self, node):
        self.body.append(self.starttag(node, 'center'))
        html4css1.HTMLTranslator.visit_figure(self, node)

    def depart_figure(self, node):
        html4css1.HTMLTranslator.depart_figure(self, node)
        self.body.append('</center>\n') 

# Based on MoinMoin's MoinWriter.
class Writer(html4css1.Writer):
    config_section = 'My writer'
    config_section_dependencies = ('writers',)
    nodes = []
   
    def __init__(self):
        html4css1.Writer.__init__(self)
        self.unknown_reference_resolvers = [self.ref_resolver]
        self.translator_class = Translator

    def ref_resolver(self, node):
        """Make links like WikiPageName_ resolve rather than throwing an error."""

        if hasattr(node, 'indirect_reference_name'):
            refname = node.indirect_reference_name
        elif (len(node['ids']) != 0):
            # If the node has an id, it's probably an internal link. Let docutils generate an error.
            return False
        elif node.hasattr('name'):
            refname = node['name']
        else:
            refname = node['refname']

        if refname.startswith("DOC") or refname.startswith("CAT") or refname.startswith("SVN_APP_DIR"):
            node.clear()
            node += nodes.Text(u'Dostupné pouze online')

            node['refuri'] = "#"
            del node['refname']
            node.resolved = 1
            self.nodes.append(node)
            return True
        elif refname.endswith(".png") or  refname.endswith(".jpg"):
            node.clear()
            node += nodes.Text(u'číslo obrázku')

            node['refuri'] = "#"
            del node['refname']
            node.resolved = 1
            self.nodes.append(node)
            return True
            
#        else:
#            fn = os.path.join(self.settings.doc_path,"img\\"+refname)
#            if (os.path.isfile(fn)):
#                print "RR IM"

#        print "REF:", wiki_page_name

#        node['refuri'] = u"XXX_%s" % wiki_page_name  # assume a flat wiki namespace: root all pages at the same level
#        del node['refname']
#        node.resolved = 1
#        self.nodes.append(node)
#        return True
        return False

    ref_resolver.priority = 001

try:
    a = rst.Directive
except:
    class EmptyClass:
	pass
    rst.Directive = EmptyClass
    pass    

class Article(rst.Directive):

    required_arguments = 1
    optional_arguments = 0
    final_argument_whitespace = True
    option_spec = {}#'author':directives.unchanged,'revision':directives.unchanged}
    has_content = True

    def run(self):
       #print dir(self)
       #print self.content
   
       node = nodes.raw()
   #Body()
   #Element()
       node.tagname = "article"
       node['docid'] = ''
       node['author'] = ''
       node['revision'] = ''
       node['abstract'] = ''
       node['title'] = ''
       node['updated'] = ''
   
       args = (''.join(self.arguments)).splitlines()
   
       node['docid'] = args[0].strip()
       for l in args[1:]:
           l = l.strip()
           if l.startswith(":author:"):
              node['author'] = l[8:]
           elif l.startswith(":revision:"):
              node['revision'] = l[9:]
           elif l.startswith(":updated:"):
              node['updated'] = l[8:]
           else:
              node['abstract'] += l
   
       for l in self.content:
           node['abstract'] += l
   
       return [node]

def showDocument(doc_path, app_name):
    global win

    from docutils.parsers.rst import directives
    directives.register_directive("article", Article)

    from docutils.core import publish_parts, publish_doctree

    sett = {
     'xml_declaration': False,
     'embed_stylesheet': False,
     'input_encoding': 'cp1250',
     'language_code':'cs',
    
     'output_encoding': 'utf-8',
     'doc_path': os.path.dirname(doc_path)
    }
    
    #tree = publish_doctree(open(doc_path).read(), settings_overrides=sett)
    #article_elms = [n for n in tree if n.tagname == 'article']
    #article = None
    #if (len(article_elms)): article = article_elms[0]
    #title_elms = [n for n in tree if n.tagname == 'title']
    #title = None
    #if (len(title_elms)): title = title_elms[0].astext()
   
    str = publish_parts(open(doc_path).read(), writer=Writer(), settings_overrides=sett)['html_body']

    str = "<html><style>body { color: #444; margin: 10px} \
    .contents { border: solid 1px red} \
    blockquote { margin-left:0px;} \
    .note .first {background-color:#888; color:#fff} \
    .note .last {background-color:#efe} \
    pre, .pre {background-color:#eee} \
    h1, h2, h3 { color:#224476;} \
    a {color: #224476;text-decoration:none}</style><body>" + str + "</body></html>";

    win = QWidget()
    win.windowTitle = u"Dokumentace (%s)" % app_name

    win.windowIcon = QIcon(":/icons/48x48/plugin.png")
    win.minimumWidth = 700
    win.minimumHeight = 600

    box = QVBoxLayout(win)
    box.margin = 0

    m = QTextBrowser()
    m.setHtml(str)
    box.addWidget(m)

    win.show()

