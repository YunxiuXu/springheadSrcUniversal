@echo off
setlocal enabledelayedexpansion
:: ============================================================================
::  SYNOPSIS
::	setup [-f (--force) ]
::	  -f (--force)	セットアップファイルを無条件に再作成する。
::	  -c (--check)	セットアップファイルの整合性を検査する。
::
::  DESCRIPTION
::	ここでは実行できる python を見つけ、setup.py を実行する。
::	python を見つける順番は、
::	  (1) buildtool があれば、その中の python
::	  (2) さもなければデフォルトで動く python
::	
::	python が見つからないときはメッセージを表示して処理を中止する。
:: ----------------------------------------------------------------------------
::  VERSION
::     Ver 1.0    2020/11/10 F.Kanehori	初版
::     Ver 1.00.1 2021/01/07 F.Kanehori	微修正
:: ============================================================================
set PROG=%~n0
set CWD=%CD%
set DEBUG=0
call :leafname %0
set PROG=%$result%

:: -------------------------------------------------------------
::  このスクリプトは "<SprTop>/core/src" に置く
::
cd /d %~dp0
set ScriptDir=%CD%
cd %ScriptDir%

:: -------------------------------------------------------------
::  準備
::
call :backquote where where
set $where=%$result%

:: -------------------------------------------------------------
::  Python を見つける
::
rem set $path=..\..\buildtool\win32
call :to_abspath ..\..\buildtool\win32
set $path=%$abspath%
if exist "%$path%\python.exe" (
	set $python=%$path%\python.exe
	echo -- found python: !$python!
) else (
	rem  %HOME%\AppData\Local\Microsoft\WindowsApps が見つかる場合
	rem	この python は使えない!
	rem
	set FAKE_PYTHON=%HOME%\AppData\Local\Microsoft\WindowsApps\python.exe
	call :backquote where python
	if "!$result!" equ "!FAKE_PYTHON!" (
		echo Found "!$result!", but you can't use it.
		goto :message
	)
	rem  実行できる python が見つかった
	rem
	set $python=!$result!
	echo -- found python: !$result!
)
if "%$python%" == "" (
	echo Can't find 'python'.
:message
	echo We need 'python' to build Springhead Library.
	echo "https://github.com/sprphys/buildtool" provides required environment for Windows.
	exit /b 1
)

rem -------- ここから --------------------------------
rem ここから 旧pythonテスト用のコード
rem
if "%1" == "-o" (
	set $python=F:\OLD-Python\Python27\python.exe
)
rem -------- ここまで --------------------------------

if not %DEBUG% equ 0 (echo %PROG%: %$python% setup.py %* %$python%)
%$python% setup.py %* %$python%

endlocal
exit /b

:: ----------------------------------------------------------------------------
::  ローカル関数
::
:which
	setlocal enabledelayedexpansion
	call :backquote python --version
	if not "%$result%" == "" (
		call :backquote %$where% python
	)
	(endlocal && set $result=%$result%)
	exit /b

:backquote
	setlocal enabledelayedexpansion
	set result=
	for /f "usebackq tokens=*" %%a in (`%* 2^> NUL`) do (
		if "!result!" == "" (set result=%%a)
	)
	(endlocal && set $result=%result%)
 	exit /b

:leafname
	setlocal enabledelayedexpansion
	set result=%~n1%~x1
	(endlocal && set $result=%result%)
 	exit /b

:to_abspath
	set $abspath=%~f1

::end: setup.bat
