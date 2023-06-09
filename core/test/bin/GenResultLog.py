﻿#!/usr/local/bin/python
# -*- coding: utf-8 -*-
# =============================================================================
#  SYNOPSIS:
#	GenResultLog [options] type res-file [platform config]
#	arguments:
#	    res-file:	Test result file path (relative to ".../core/test").
#	    platform:   Tested platforms (x86, x64).
#	    config:	Tested configuration (Debug, Release, Trace).
#	options:
#	    -o file:	    Output file name.
#	    -v:		    Set verbose level (0: silent).
#
#  DESCRIPTION:
#	Generate representation of test result.
#	Output types are:
#	    type 'r':	"Result.log" format.
#	    type 'd':	Simple dump format.
#
# -----------------------------------------------------------------------------
#  VERSION:
#     Ver 1.0	 2018/02/22 F.Kanehori	First version.
#     Ver 1.0.1	 2018/03/14 F.Kanehori	Dealt with new Error class.
#     Ver 1.0.2	 2021/07/15 F.Kanehori	libdir 取得方式変更.
# =============================================================================
version = '1.0.2'

import sys
import os
import pickle
from optparse import OptionParser

from ConstDefs import *
from TestResult import *

# ----------------------------------------------------------------------
#  このスクリプトは ".../core/test/bin" に置く	
#
ScriptFileDir = os.sep.join(os.path.abspath(__file__).split(os.sep)[:-1])
prog = sys.argv[0].replace('/', os.sep).split(os.sep)[-1].split('.')[0]
TopDir = '/'.join(ScriptFileDir.split(os.sep)[:-3])

# ----------------------------------------------------------------------
#  Springhead python library の導入
#
libdir = '%s/core/src/RunSwig/pythonlib' % TopDir
sys.path.append(libdir)
from Error import *
from TextFio import *

# ----------------------------------------------------------------------
#  Options
#
usage = 'Usage: %prog [options] type res-file [platform configuration]\n'\
	'\ttype:       d: dump, r: result.log\n'\
	'\tres-file:   result file (relative to .../core/test)'
parser = OptionParser(usage = usage)
parser.add_option('-o', '--outfile', dest='outfile',
			default=None, metavar='FILE',
			help='output file (relative to .../core/test)')
parser.add_option('-v', '--verbose', dest='verbose',
			action='count', default=0,
			help='set verbose mode')
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
if ((args[0] == 'd' and len(args) != 2) or \
    (args[0] == 'r' and len(args) != 4)):
	parser.error("incorrect number of arguments")


# get arguments
out_type = args[0]
res_file = args[1]
if out_type == 'r':
	platform = args[2]
	config = args[3]

# get options
outfile = options.outfile
verbose = options.verbose

if verbose:
	print('%s:' % prog)
	print('  report file:  %s' % res_file)
	print('  output file:  %s' % outfile)
	print('  out_type:     %s' % out_type)
	if out_type == 'r':
		print('  platform:     %s' % platform)
		print('  config:       %s' % config)

# ----------------------------------------------------------------------
#  Main process.
#
res = TestResult(res_file, scratch=False, verbose=0)
if out_type == 'r':
	lines = res.edit_result_log(platform, config)
	for line in lines:
		print(line)
	if outfile:
		fio = TextFio(outfile, 'w', encoding='cp932')
		if fio.open() < 0:
			Error(prog).abort('can\'t open "%s"' % outfile)
		fio.writelines(lines)
		fio.close()

if out_type == 'd':
	res.dump()

sys.exit(0)

# end: GenResultLog.py
