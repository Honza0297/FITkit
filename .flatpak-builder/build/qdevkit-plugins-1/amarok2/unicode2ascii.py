'''
/***************************************************************************
 *   Copyright (C) 2008 Brno University of Technology,                     *
 *   Faculty of Information Technology                                     *
 *   Author(s): Marek Vavrusa    <xvavru00 AT stud.fit.vutbr.cz>           *
 *              Zdenek Vasicek   <vasicek  AT fit.vutbr.cz>                *
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

#!/usr/bin/python
# -*- coding: utf-8 -*-

# This source code is distributed under GNU GPL v2 license
# written by Victor Stinner <victor.stinner AT haypocalc.com>
#                            http://www.haypocalc.com/
# creatied: 2006-08-14 -- last change: 2007-08-17

# Convert any unicode string to ASCII string:
#  - Remove diacriticals
#  - Replace special letter with similar ASCII character (similar glyph)
#
# Support greek, cyrillic, some latin letters and some signs.

from unicodedata import normalize

UNICODE_TO_ASCII = {
    # Latin letters
    u"Æ": u"AE",   # U+00C6 (latin capital ligature ae)
    u"Ø": u"O",    # U+00D8 (latin capital letter o with stroke)
    u"ß": u"ss",   # U+00DF (latin small letter sharp s)
    u"æ": u"ae",   # U+00E6 (latin small ligature ae)
    u"ø": u"o",    # U+00F8 (latin small letter o with stroke)
    u"?": u"l",    # U+0142 (latin small letter l with stroke)
    u"Œ": u"OE",   # U+0152 (latin capital ligature oe)
    u"œ": u"oe",   # U+0153 (latin small ligature oe)

    # Various signs
    u"¡": u"!",    # U+00A1 (inverted exclamation mark)
    u"©": u"(c)",  # U+00A9 (copyright sign)
    u"«": u'"',    # U+00AB (left-pointing double angle quotation mark)
    u"®": u"(r)",  # U+00AE (registred sign)
    u"²": u"2",    # U+00B2 (superscript two)
    u"»": u'"',    # U+00BB (right-pointing double angle quotation mark)
    u"?": u"/",    # U+2044 (fraction slash)

    # Greek
    u"?": u"A",    # U+0391 (capital alpha)
    u"?": u"B",    # U+0392 (capital beta)
    u"?": u"E",    # U+0395 (capital epsilon)
    u"?": u"Z",    # U+0396 (capital zeta)
    u"?": u"H",    # U+0397 (capital eta)
    u"?": u"O",    # U+0398 (captial theta)
    u"?": u"I",    # U+0399 (capital iota)
    u"?": u"K",    # U+039A (capital kappa)
    u"?": u"M",    # U+039C (capital mu)
    u"?": u"N",    # U+039D (capital nu)
    u"?": u"O",    # U+039F (capital omicron)
    u"?": u"P",    # U+03A1 (capital rho)
    u"?": u"T",    # U+03A4 (capital tau)
    u"?": u"Y",    # U+03A5 (capital upsilon)
    u"?": u"X",    # U+03A7 (capital chi)
    u"?": u"a",    # U+03B1 (small alpha)
    u"?": u"b",    # U+03B2 (small beta)
    u"?": u"y",    # U+03B2 (small gamma)
    u"?": u"e",    # U+03B5 (small espilon)
    u"?": u"n",    # U+03B7 (small eta)
    u"?": u"o",    # U+03BF (small omicron)
    u"?": u"p",    # U+03C1 (small rho)
    u"?": u"v",    # U+03C1 (small upsilon)

    # Cyrillic
    u"?": u"I",    # U+0406 (capital byelorussian-ukrainian i)
    u"?": u"J",    # U+0408 (capital je)
    u"?": u"B",    # U+0412 (capital ve)
    u"?": u"E",    # U+0415 (capital ie)
    u"?": u"N",    # U+0418 (capital i)
    u"?": u"3",    # U+0417 (capital ze)
    u"?": u"K",    # U+041A (capital ka)
    u"?": u"M",    # U+041C (capital em)
    u"?": u"H",    # U+041D (capital en)
    u"?": u"O",    # U+041E (capital o)
    u"?": u"P",    # U+0420 (capital er)
    u"?": u"C",    # U+0421 (capital es)
    u"?": u"T",    # U+0422 (capital te)
    u"?": u"Y",    # U+0423 (capital u)
    u"?": u"X",    # U+0425 (capital ha)
    u"?": u"R",    # U+042F (capital ya)
    u"?": u"a",    # U+0430 (small a)
    u"?": u"b",    # U+0432 (small ve)
    u"?": u"e",    # U+0435 (small ie)
    u"?": u"3",    # U+0437 (small ze)
    u"?": u"k",    # U+043A (small ka)
    u"?": u"m",    # U+043C (small em)
    u"?": u"h",    # U+043D (small en)
    u"?": u"o",    # U+043E (small o)
    u"?": u"p",    # U+0440 (small er)
    u"?": u"c",    # U+0441 (small es)
    u"?": u"T",    # U+0442 (small te)
    u"?": u"y",    # U+0443 (small u)
    u"?": u"x",    # U+0445 (small ha)
    u"?": u"R",    # U+044F (small ya)
    u"?": u"i",    # U+0456 (small byelorussian-ukrainian i)
    u"?": u"j",    # U+0458 (small je)
}

def unicode2ascii(text, replace=False):
    """
    Convert an unicode string (type 'unicode') to ascii string (type 'str').
    Try to keep same visual result.

    You can specify an ASCII character to replace non-ASCII character
    in 'replace' argument (eg. replace='?').

    >>> unicode2ascii(unicode("¡ Hé hø « español » ! Pythøn", "UTF-8"))
    '! He ho " espanol " ! Python'
    >>> unicode2ascii(unicode("L'œuf de læticia", "UTF-8"))
    "L'oeuf de laeticia"
    >>> unicode2ascii(unicode("????????????????????????????", "UTF-8"), u'?')
    'IEOAB??EZHOIK?NM?OYanay?e?n?'
    >>> unicode2ascii(unicode("??????????????????????????????????????????", "UTF-8"), u'?')
    'EE??IIJKN?BE3NKMHOPCTYXabe3mho?pcTyxeeiijk'
    """
    assert isinstance(text, unicode)
    if replace:
        if isinstance(replace, str):
            replace = unicode(replace, "latin-1")
        if not isinstance(replace, unicode) \
        or len(replace) != 1 \
        or not (32 <= ord(replace) <= 127):
            raise ValueError(
                "invalid replace character (%r): "
                "need one ascii printable character" % replace)

    ascii = []
    for char in text:
        # Remove diacriticals
        char = normalize("NFKD", char)[0]

        # Known values
        if char in UNICODE_TO_ASCII:
            ascii.append(UNICODE_TO_ASCII[char])
            continue

        if ord(char) <= 127:
            # Add valid ASCII
            ascii.append(char)
        elif replace:
            # non-ASCII character
            ascii.append(replace)
        # else: ignore it

    text = ''.join(ascii)
    return text.encode("ascii", "strict")

if __name__ == "__main__":
    from doctest import testmod
    from sys import exit
    failure, total = testmod()
    if failure:
        print "%s failure on %s tests" % (failure, total)
        exit(1)
    else:
        print "All tests are OK (count=%s)" % total
