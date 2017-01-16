#!/usr/bin/env python
# -*- coding: utf-8 -*-
# ======================================================================
#  FILE:
#	NameManager.py
#
#  SYNOPSIS:
#	NameManager [-d topdir] [-i inifile] [-o outfile]
#	    topdir:	System base directory name (str).
#	    inifile:	Environment variable definition file name (str).
#	    outfile:	Batch file name to be generated (str).
#
#  DESCRIPTION:
#	Manager for common names used throughout the SprCSharp system.
#	Names are read from definition file (e.g. NameManager.ini) and
#	wrritten to Windows batch file (e.g. NameManager.bat).
#	To define these names as environment variables, call created
#	file like:
#	    call NameManager.bat
#	from batch script using these names.
#
# ----------------------------------------------------------------------
#  VERSION:
#	Ver 1.0  2017/01/16 F.Kanehori	First release version.
# ======================================================================
import sys
import os
from optparse import OptionParser

sys.path.append('../../../bin/test')
from KvFile import *
from Util import *
from Error import *

# ----------------------------------------------------------------------
#  Constants and error wrapper
#
version = '1.0'
prog = sys.argv[0].split('\\')[-1].split('.')[0]

# ----------------------------------------------------------------------
#  Global variables
#
E = Error(prog)

# ----------------------------------------------------------------------
#  Options
#
usage = 'Usage: %prog [options]'
parser = OptionParser(usage = usage)
parser.add_option('-d', '--topdir',
			dest='topdir', default='Springhead2',
			metavar='DIR',
			help='Spr base directory [default: %default]')
parser.add_option('-i', '--inifile',
			dest='inifile', default='NameManager.ini',
			metavar='FILE',
			help='name definiton file name [default: %default]')
parser.add_option('-o', '--outfile',
			dest='outfile', default='NameManager.bat',
			metavar='FILE',
			help='output batch file name [default: %default]')
parser.add_option('-t', '--test',
			dest='test_only', action='store_true', default=False,
			help='do not make batch file (for debug)')
parser.add_option('-v', '--verbose',
			dest='verbose', action='count', default=0,
			help='set verbose mode')
parser.add_option('-V', '--version',
			dest='version', action='store_true', default=False,
			help='show version')

# ----------------------------------------------------------------------
#  Process for command line
#
(options, args) = parser.parse_args()
if options.version:
	print('%s: Version %s' % (prog, version))
	sys.exit(0)
if len(args) != 0:
	Util.exec('python %s.py -h' % prog)
	parser.error("incorrect number of arguments")
	sys.exit(0)

# get options
topdir	= options.topdir
inifile	= options.inifile
outfile	= options.outfile
test_only = options.test_only
verbose	= options.verbose

if verbose:
	print('argument used:')
	print('  topdir:    %s' % topdir)
	print('  inifile:   %s' % inifile)
	print('  outfile:   %s' % outfile)
	print('  test_only: %s' % test_only)
	print()

# ----------------------------------------------------------------------
#  Find base directory's absolute path.
#
dirlist = os.getcwd().split('\\')
found = False
for n in range(len(dirlist)):
	if dirlist[n] == topdir:
		found = True
		break
if not found:
	E.print('no such directory "%s"' % topdir)
topdir = '\\'.join(dirlist[0:n+1]) if found else None

# ----------------------------------------------------------------------
#  Read name definitions.
#
kvf = KvFile(inifile, sep='=')
count = kvf.read({'TOPDIR': topdir})
if count < 0:
	E.print(kvf.error())
keys = sorted(kvf.keys())

if verbose:
	def fixed(name, width):
		name += ':'
		if len(name) < width-1:
			name += ' ' * (width-len(name))
		return name

	print('names defined (%d):' % count)
	for key in keys:
		value = Util.unixpath(kvf.get(key))
		if os.path.isfile(value):	kind = 'file'
		elif os.path.isdir(value):	kind = 'dir'
		else:				kind = 'name'
		print('  %s%s (%s)' % (fixed(key, 24), value, kind))

# ----------------------------------------------------------------------
#  Make Windows batch file to export names.
#	This is unnecessary if names can be exported directly!!
#
if test_only:
	sys.exit(0)

headers	 = [ '@echo off', ':: FILE: %s' % outfile, '' ]
trailers = [ '', '::end: %s' % outfile ]

f = TextFio(outfile, 'w', encoding='sjis')
if f.open() < 0:
	E.print(f.error())
#
f.writelines(headers)
for key in keys:
	f.writeline('set %s=%s' % (key, Util.dospath(kvf.get(key))))
f.writelines(trailers)
f.close()

sys.exit(0)
# end: NameManager.py
