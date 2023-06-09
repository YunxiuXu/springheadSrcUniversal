﻿#!/usr/local/bin/python
# -*- coding: utf-8 -*-
# ======================================================================
#  CLASS:	
#	CMake
#	    Adapter class for CMake.
#
#  INITIALIZER:
#	obj = CMake(ctl, ccver, platform, config, logfile, verbose)
#	arguments:
#	    ctl:	Instance of ControlParams class (obj).
#	    ccver:	C-compiler version (str).
#			    Windows: Visual Studio version (str).
#			    unix:    gcc version (dummy).
#	    platform:	Test platform ('x64' or 'x86').
#	    config:	Test configure ('Debug', 'Release' or 'Treace').
#			*** We do not use this argument! ***
#	    logfile:	Log file name (str).
#	    verbose:	Verbose level (0: silent) (int).
#
#  METHODS:
#	preparation()
#	    Prepare CMake environment.
#
#	config_and_generate()
#	    Configure and generate solution file.
#	    arguments:	    none.
#	    returns:	    Generated solution file name (str).
#			    None if generation failed.
#
# ----------------------------------------------------------------------
#  VERSION:
#     Ver 1.0	 2019/09/19 F.Kanehori	First version.
#     Ver 1.1	 2020/08/24 F.Kanehori	Add LIB_TYPE control.
#     Ver 1.2	 2020/10/12 F.Kanehori	Add CMAKE_OPTIONS control.
#     Ver 1.2.1  2021/05/17 F.Kanehori	Add -D SPRTOP option.
#     Ver 1.2.2	 2021/07/15 F.Kanehori	libdir 取得方式変更.
# ======================================================================
import sys
import os
import glob

from ControlParams import *

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
from SetupFile import *
from Proc import *
from FileOp import *
from Error import *
from Util import *

class CMake:
	#  Class constant.section
	#
	GENERATOR = {
		'unix':	'"Unix Makefiles"',
		2015:	'"Visual Studio 14 2015" -A x64',
		2017:	'"Visual Studio 15 2017" -A x64',
		2019:	'"Visual Studio 16 2019" -A x64'
	}

	#  Class initializer
	#
	def __init__(self, ctl, ccver, platform, config, logfile, verbose):
		self.clsname = self.__class__.__name__
		self.version = '1.2.2'
		#
		self.ctl = ctl
		self.ccver = ccver
		self.platform = platform
		self.config = config
		self.logfile = logfile
		self.verbose = verbose
		#
		# このファイルは ".../core/test/bin" に置くこと
		script_dir = os.path.abspath(__file__).split(os.sep)[:-1]
		script_dir = os.sep.join(script_dir)
		setup_file = script_dir+'../../../src/setup.conf'
		setup_file = os.path.abspath(setup_file)
		self.setup_file_exists = False
		if os.path.exists(setup_file):
			print('  setup file exists')
			self.setup_file_exists = True
			self.sf = SetupFile(setup_file)
			self.sf.setenv()
		#
		self.generator = self.__find_generator(ccver)
		self.error = Error(self.clsname)

	#  Prepare CMake environment.
	#
	def preparation(self):
		# ======================================================
		#  If "CMakeLists.txt.dist" exists here, we must be
		#  in a Springhead Library creating step.
		# ======================================================
		if self.verbose:
			print('cmake: preparation')
		cwd = os.getcwd()
		srcfile = '%s/CMakeLists.txt.dist' % cwd
		dstfile = '%s/CMakeLists.txt' % cwd
		status = 0
		if os.path.exists(srcfile):
			#  Need to copy dist file to CMakeLists.txt.
			status = FileOp(verbose=0).cp(srcfile, dstfile)
		elif not os.path.exists(dstfile):
			status = -1
			srcfile = dstfile
		if status != 0:
			self.error.error('"%s" not found' % srcfile)
		return status

	#  Configure and generate solution file.
	#  
	def config_and_generate(self):
		if self.verbose:
			print('cmake: generation start')
		#  Create work directory if not exists.
		#
		blddir = self.ctl.get(CFK.CMAKE_BLDDIR)
		if self.verbose and not os.path.exists(blddir):
			cwd = Util.pathconv(os.getcwd(), to='unix')
			if self.verbose:
				print('  create directory %s/%s' % (cwd, blddir))
		os.makedirs(blddir, exist_ok=True)

		#  Execuete cmake.
		#
		libtype = self.ctl.get(CFK.LIB_TYPE)
		topdir = self.ctl.get(CFK.CMAKE_TOPDIR)
		blddir = self.ctl.get(CFK.CMAKE_BLDDIR)
		conf = self.ctl.get(CFK.CMAKE_CONF_FILE)
		opts = self.ctl.get(CFK.CMAKE_OPTS_FILE)
		cmake_options = self.ctl.get(CFK.CMAKE_OPTIONS)
		#
		cmnd = 'cmake'
		if self.setup_file_exists:
			cmnd = self.sf.getenv('cmake')
		if topdir:  cmnd += ' -D TOPDIR=%s' % topdir
		if conf:    cmnd += ' -D CONF=%s' % conf
		if opts:    cmnd += ' -D OPTS=%s' % opts
		if cmake_options:
			    cmnd += ' ' + cmake_options
		if not libtype:
			libtype = 'STATIC'
		cmnd += ' -B %s' % blddir
		cmnd += ' -G %s' % self.generator
		cmnd += ' -D LIBTYPE=%s' % libtype
		#
		logobj = self.__open(self.logfile)
		proc = Proc(verbose=0)	#self.verbose)
		status = proc.execute(cmnd, shell=True,
				stdout=logobj, stderr=proc.STDOUT).wait()
		logobj.close()
		if self.verbose:
			print('  configure/generate done with code %d' % status)
		if status != 0:
			return None
		#
		if (Util.is_unix()):
			return "Makefile"
		slnfile = self.__find_slnfile()
		if slnfile is None:
			self.error.error('found more than two solution files')
		if self.verbose:
			print('  solution file is %s'% slnfile)
			print('cmake: generation end')
		return slnfile

	# --------------------------------------------------------------
	#  For class private use
	# --------------------------------------------------------------

	##  Find generator string.
	#
	def __find_generator(self, ccver):
		if (Util.is_unix()):
			return self.GENERATOR['unix']
		generator = 2015	# default
		if ccver in ['14.0', '14', 'v140', '2015']:
			ccver = 2015
		elif ccver in ['15.0', '15', 'v141', '2017']:
			ccver = 2017
		elif ccver in ['16.0', '16', 'v142', '2019']:
			ccver = 2019
		return self.GENERATOR[ccver]

	##  Find solution file name.
	#
	def __find_slnfile(self):
		names = glob.glob('%s/*.sln' % self.ctl.get(CFK.CMAKE_BLDDIR))
		return names[0] if len(names) == 1 else None

	##  Open logfile (directory is created if necessary).
	#
	def __open(self, logpath):
		path = logpath.split('/')
		if (Util.is_unix()):
			path = path[1:]
		if len(path) > 1:
			os.makedirs(path[:-1][0], exist_ok=True)
		return open(logpath, 'a')

# end: CMake.py
