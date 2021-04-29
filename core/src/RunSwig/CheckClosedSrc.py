#!/usr/local/bin/python
# -*- coding: utf-8 -*-
# ==============================================================================
#  SYNOPSIS:
#	python CheckClosedSrc.py
#
#  DESCRIPTION:
#	Makefile.{win|unix} の ClosedSrcCtl ターゲットから呼び出される.
#	"SprDefs.h"からインクルードされるファイル"SprUseClosedSrcOrNot.h"を
#	次の条件で作成する.
#
#	"core/include"に既に"SprUseClosedSrcOrNot.h"が存在しないときに限り
#	次の内容を"core/include/SprUseClosedSrcOrNot.h"として書き出す.
#
#	  "Springhead/closed"が存在するならば → "#define USE_CLOSED_SRC"
#	  "Springhead/closed"が存在しないならば → "#undef USE_CLOSED_SRC"
#
#	補足	Makefile.win は, Springhead.sln の RunSwig プロジェクトを
#		ビルドすると実行される.
#
# ==============================================================================
#  Version:
#     Ver 1.0	 2019/01/08 F.Kanehori	初版
#     Ver 1.1	 2019/04/01 F.Kanehori	Python library path 検索方法変更.
#     Ver 2.0	 2020/04/09 F.Kanehori	方針の全面変更 (DESCRIPTION参照).
#     Ver 2.1	 2020/05/12 F.Kanehori	再度方針の全面変更 (DESCRIPTION参照).
#     Ver 2.2    2021/02/17 F.Kanehori	Python 2.7 対応.
#     Ver 2.3    2021/03/25 F.Kanehori	全面見直し.
# ==============================================================================
from __future__ import print_function
version = '2.3'

import sys
import os
import shutil
from optparse import OptionParser

# ----------------------------------------------------------------------
#  このスクリプトは ".../core/src/RunSwig" に置く	
#
ScriptFileDir = os.sep.join(os.path.abspath(__file__).split(os.sep)[:-1])
prog = sys.argv[0].replace('/', os.sep).split(os.sep)[-1].split('.')[0]
from Trace import *
trace = Trace().flag(prog)
if trace:
	print('ENTER: %s: %s' % (prog, sys.argv[1:]))
	sys.stdout.flush()

SrcDir = '/'.join(ScriptFileDir.split(os.sep)[:-1])

# ----------------------------------------------------------------------
#  Springhead python library の導入
#
libdir = '%s/RunSwig/pythonlib' % SrcDir
sys.path.append(libdir)
from TextFio import *
from Proc import *
from Error import *

# ----------------------------------------------------------------------
#  ディレクトリパスには絶対パスを使用する (cmake 使用時の混乱を避けるため)
#
sprtop = os.path.abspath('%s/../..' % SrcDir)
incdir = '%s/core/include' % sprtop
closed = '%s/closed' % sprtop

# ----------------------------------------------------------------------
#  使用するファイル名
#
header_file = 'SprUseClosedSrcOrNot.h'
tmp_file = header_file + '.tmp'

# ----------------------------------------------------------------------
#  オプションの定義
#
usage = 'Usage: %prog [options]'
parser = OptionParser(usage = usage)
parser.add_option('-v', '--verbose', dest='verbose',
			action='count', default=0,
                        help='set verbose count')
parser.add_option('-V', '--version', dest='version',
			action='store_true', default=False,
                        help='show version')

# ----------------------------------------------------------------------
#  コマンドラインの解析
#
(options, args) = parser.parse_args()
if options.version:
        print('%s: Version %s' % (prog, version))
        sys.exit(0)
if len(args) != 0:
	Error(prog).error('incorrect number of arguments')
	Proc().execute('python %s.py -h' % prog).wait()
	sys.exit(0)

verbose = options.verbose

# ----------------------------------------------------------------------
#  処理開始
#	
cwd = os.getcwd()
os.chdir(incdir)
if verbose:
	print('%s: cwd: %s' % (prog, os.getcwd().replace(os.sep, '/')))

# ----------------------------------------------------------------------
#  ファイル "SprUseClosedSrcOrNot.h" が存在したら何もしない
#
if os.path.exists(header_file):
	if verbose:
		print('%s: file exists. bothing to do.' % prog)
	#  処理終了
	os.chdir(cwd)
	if trace:
		print('LEAVE: %s' % prog)
		sys.stdout.flush()
	sys.exit(0)

# ----------------------------------------------------------------------
#  ヘッダファイルの内容を決める
#
macro = r'#undef USE_CLOSED_SRC'
if os.path.exists(closed):
	if os.path.isdir(closed):
		macro = r'#define USE_CLOSED_SRC'
	else:
		print('%s: Warning: "%s" exists but not a directory' % (prog, closed))
lines = []
lines.append(r'// This file is generated by Springhead system.')
lines.append(r'')
lines.append(r'// Use Springhead/closed source or not.')
lines.append(macro)

# ----------------------------------------------------------------------
#  ファイルに書き出す
#
fio = TextFio(header_file, 'w')
if fio.open() != 0:
	Error(prog).error('can not open file "%s"' % header_file)
if fio.writelines(lines) != 0:
	Error(prog).error('write failed on file "%s"' % header_file)
fio.close()
print('%s: "%s" written with "%s"' % (prog, header_file, macro))

# ----------------------------------------------------------------------
#  処理終了
#	
os.chdir(cwd)
if trace:
	print('LEAVE: %s' % prog)
	sys.stdout.flush()
sys.exit(0)

# end: CheckClosedSrc.py
