# Do not edit. RunSwigFramework will update this file.
all:	..\..\..\..\Framework\FWOldSpringheadStub.cpp
..\..\..\..\Framework\FWOldSpringheadStub.cpp:	..\..\..\..\Framework\FWOldSpringheadNodeHandler.h
	..\..\..\..\..\bin\swig\swig -I..\..\..\..\..\bin\swig\Lib -spr -w312,325,401,402 -DSWIG_OLDNODEHANDLER -c++ FWOldSpringhead.i
	copy SprFWOldSpringheadDecl.hpp ..\..\..\..\..\include\FWOldSpringhead >NUL 2>&1
	copy FWOldSpringheadStub.cpp ..\..\..\..\Framework >NUL 2>&1
	copy FWOldSpringheadDecl.hpp ..\..\..\..\Framework >NUL 2>&1

clean:	
	-del -f ..\..\..\..\..\include\FWOldSpringhead >NUL 2>&1
	-del -f ..\..\..\..\Framework\FWOldSpringheadStub.cpp >NUL 2>&1
	-del -f ..\..\..\..\Framework\FWOldSpringheadDecl.hpp >NUL 2>&1
