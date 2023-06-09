﻿#!/usr/local/bin/python
# -*- coding: utf-8 -*-
# ======================================================================
#  CLASS:
#	ClosedSrcControl
#	    Closed source control file management class.
#
#  INITIALIZER:
#	obj = ClosedSrcControl(path, use_path, unuse_path,
#					dry_run=False, verbose=0)
#	arguments:
#	    path:	Actual closed-src-control file path (str).
#	    use_path:	File path for use closed-src-control (str).
#	    unuse_path:	File path for unuse-closed-src control (str).
#	    dry_run:	Show commands but not execute (bool).
#	    verbose:	Verbose level (0: silent) (int).
#
#  METHODS:
#	set_usage(usage)
#	    Set new closed source usage.  If new usage is not match
#	    for current closed-src-control file, the file will be
#	    replaced by suitable one.
#	    arguments:
#		usage:	    One of CSU.AUTO, CSU.USE or CSU.UNUSE.
#
#	revive()
#	    Revive closed-src-control file to original content.
#	    arguments:	    None
# ----------------------------------------------------------------------
#  VERSION:
#     Ver 1.0	 2018/02/08 F.Kanehori	First version.
#     Ver 1.0.1	 2018/02/14 F.Kanehori	Dealt with new Error class.
#     Ver 1.0.2	 2021/07/15 F.Kanehori	libdir 取得方式変更.
# ======================================================================
import sys
import os
import re

from ConstDefs import *

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
from FileOp import *
from TextFio import *
from Error import *

class ClosedSrcControl:
	#  Class initializer
	#
	def __init__(self, path, use_path, unuse_path, dry_run=False, verbose=0):
		self.clsname = self.__class__.__name__
		self.version = '1.0.2'
		#
		self.org_path = self.__normalize_path(path)
		self.template = { CSU.USE:   self.__normalize_path(use_path),
				  CSU.UNUSE: self.__normalize_path(unuse_path) }
		self.dry_run=dry_run
		self.verbose = verbose
		#
		self.fop = FileOp(dry_run=dry_run, verbose=verbose)
		#
		self.saved_path = '%s.org' % Util.upath(path)
		self.org_usage = self.__read_usage(path)
		self.curr_usage = self.org_usage
		self.file_changed = False
		self.fop.cp(path, self.saved_path)
		#
		if verbose:
			self.__print('file saved to "%s"' % self.saved_path)
			self.__print('original usage: %s' % self.org_usage)

	#  Set new closed source usage.
	#
	def set_usage(self, usage):
		if usage not in [CSU.USE, CSU.UNUSE]:
			msg = 'set_usage: bad usage (%s)' % usage
			Error(self.clsname).abort(msg)
		#
		if usage == self.curr_usage:
			if self.verbose > 1:
				self.__print('file unchanged')
			return
		#
		path = self.template[usage]
		self.fop.cp(path, self.org_path)
		self.curr_usage = usage
		self.file_changed = True
		if self.verbose:
			fm_path = Util.upath(os.path.relpath(path))
			to_path = Util.upath(os.path.relpath(self.org_path))
			self.__print('"%s" <- "%s"' % (to_path, fm_path))

	#  Revive closed-src-control file to original content.
	#
	def revive(self):
		if not self.file_changed:
			self.fop.rm(self.saved_path)
			if self.verbose:
				self.__print('no need to revive')
			return
		#self.set_usage(self.org_usage)
		self.fop.mv(self.saved_path, self.org_path)
		self.curr_usage = self.org_usage
		self.file_changed = False
		if self.verbose:
			fm_path = Util.upath(os.path.relpath(self.saved_path))
			to_path = Util.upath(os.path.relpath(self.org_path))
			self.__print('"%s" <- "%s"' % (to_path, fm_path))


	# --------------------------------------------------------------
	#  For class private use
	# --------------------------------------------------------------

	def __normalize_path(self, path):
		return Util.upath(os.path.abspath(path))

	def __read_usage(self, path):
		if not os.path.exists(path):
			msg = 'no such file: "%s"' % path
			Error(self.clsname).abort(msg)

		# read the file
		f = TextFio(path)
		if f.open() < 0:
			Error(self.clsname).abort(f.error())
		lines = f.read()
		f.close()

		# find pattern
		usage = None
		patt = '#(define|undef)\s+USE_CLOSED_SRC'
		for line in lines:
			m = re.match(patt, line)
			if m:
				matched = m.group(1)
				if matched == 'define':
					usage = CSU.USE
				if matched == 'undef':
					usage = CSU.UNUSE
				break
		if usage is None:
			msg = 'bad closed-src-header'
			Error(self.clsname).abort(msg)
		return usage

	def __print(self, msg):
		print('%s: %s' % (self.clsname, msg))


# ----------------------------------------------------------------------
#  Test main
# ----------------------------------------------------------------------
if __name__ == '__main__':

	prog = 'ClosedSrcControlTest'
	dry_run = False
	verbose = 1

	incdir = os.path.abspath('%s/core/include' % TopDir)
	hfile = '%s/SprUseClosedSrcOrNot.h' % incdir
	use_path = 'UseClosedSrc.h.template'
	unuse_path = 'UnuseClosedSrc.h.template'
	patt = 'USE_CLOSED_SRC'

	def grep(path, patt):
		f = TextFio(path)
		if f.open() < 0:
			Error(prog).abort(f.error())
		lines = f.read()
		f.close()
		#
		count = 0
		for line in lines:
			count += 1
			m = re.search(patt, line)
			if m:
				print('%d: %s' % (count, line))

	def test(usage):
		csu.set_usage(usage)
		grep(hfile, patt)
		#input('pause: ')
		print()

	def revive():
		csu.revive()
		grep(hfile, patt)
		#input('pause: ')
		print()

	csu = ClosedSrcControl(hfile, use_path, unuse_path, dry_run, verbose)
	grep(hfile, patt)
	print()

	print('---- to UNUSE ----')
	test(CSU.UNUSE)
	print('---- revive ----')
	revive()

	csu = ClosedSrcControl(hfile, use_path, unuse_path, dry_run, verbose)
	grep(hfile, patt)
	print()

	print('---- to USE ----')
	test(CSU.USE)
	print('---- to UNUSE ----')
	test(CSU.UNUSE)
	print('---- to USE ----')
	test(CSU.USE)
	print('---- revive ----')
	revive()

	sys.exit(0)

# end: ClosedSrcControl.py
