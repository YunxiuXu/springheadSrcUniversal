@echo off
del main.pdf
cmd /c make tex
del main_2021*.pdf
cmd /c main.pdf
exit /b
