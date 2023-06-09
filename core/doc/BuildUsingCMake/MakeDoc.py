﻿#!/usr/local/bin/python
# -*- coding: utf-8 -*-
# =============================================================================
#  SYNOPSIS:
#	MakeDoc [options]
#	options:
#	    -v:		    Set verbose level (0: silent).
#	    -V:		    Show version.
#
#  DESCRIPTION:
#	Generate "BuildUsingCMake" manual.
#
# -----------------------------------------------------------------------------
#  VERSION:
#     Ver 1.0	 2019/08/05 F.Kanehori	First version.
#     Ver 1.1	 2021/05/19 F.Kanehori	CMake version.
#     Ver 1.2	 2021/05/20 F.Kanehori	Rename to BuildUsingCMake.
#     Ver 1.3	 2021/07/07 F.Kanehori	DailyBuildTestTools 導入.
# =============================================================================
version = '1.3'

import sys
import os
from optparse import OptionParser

# ----------------------------------------------------------------------
#  このスクリプトは ".../core/doc/BuildUsingCMake" に置く	
#
ScriptFileDir = os.sep.join(os.path.abspath(__file__).split(os.sep)[:-1])
prog = sys.argv[0].replace('/', os.sep).split(os.sep)[-1].split('.')[0]
TopDir = '/'.join(ScriptFileDir.split(os.sep)[:-3])
SrcDir = '%s/core/src' % TopDir

# ----------------------------------------------------------------------
#  Import Springhead python library.
#
libdir = '%s/RunSwig/pythonlib' % SrcDir
sys.path.append(libdir)
from Util import *
from Proc import *

# ----------------------------------------------------------------------
#  Programs
#
python = 'python'
make_html = 'buildhtml.py'
if Util.is_unix():
	make_pdf = 'make'
else:
	make_pdf = '../../../../DailyBuildTestTools/bin/nmake'

# ----------------------------------------------------------------------
#  Paths
#
texlive2018_path = 'C:/texlive/2018/bin/win32'
addpath = None

# ----------------------------------------------------------------------
#  Options
#
usage = 'Usage: %prog [options]'
parser = OptionParser(usage = usage)
parser.add_option('-v', '--verbose', dest='verbose',
			action='count', default=0,
			help='set verbose mode')
parser.add_option('-D', '--dry-run', dest='dry_run',
			action='store_true', default=False,
			help='set dry-run mode')
parser.add_option('-V', '--version', dest='version',
			action='store_true', default=False,
			help='show version')

# ----------------------------------------------------------------------
#  Process for command line
#
(options, args) = parser.parse_args()
if options.version:
	print('%s: Version %s' % (prog, str(version)))
	sys.exit(0)
if len(args) != 0:
	parser.error("incorrect number of arguments")

# get options
verbose = options.verbose
dry_run = options.dry_run

# ----------------------------------------------------------------------
#  Process start.
#
#  (1) create pdf version.
curr_date = Util.date(format='%Y-%m%d')
curr_time = Util.time(format='%H%M')
opts = 'DATE=%s TIME=%s' % (curr_date, curr_time)
cmnd = '%s %s' % (make_pdf, opts)

proc = Proc(dry_run=dry_run, verbose=verbose)
stat = proc.execute(cmnd, addpath=addpath).wait()
if stat == 0:
	print('%s:BuildUsingCMake.pdf generated.' % prog)

# (2) create html version.
#opts = '-v -E -K -R -c'
opts = '-E -H -K -R -c -v -v'
cmnd = '%s %s %s main_html.tex' % (python, make_html, opts)

proc = Proc(dry_run=dry_run, verbose=verbose)
stat = proc.execute(cmnd, addpath=addpath).wait()
if stat == 0:
	print('%s: BuildUsingCMake.html generated.' % prog)

# ----------------------------------------------------------------------
#  Clean up.
#
cmnd = '%s clean' % make_pdf
proc = Proc(dry_run=dry_run, verbose=verbose)
stat = proc.execute(cmnd, addpath=addpath).wait()

sys.exit(0)

# end: MakeDoc.py
