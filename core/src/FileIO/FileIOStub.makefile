#	Do not edit. RunSwig.py will update this file.
all:	FileIOStub.cpp

FileIOStub.cpp:	\
	..\..\include\Springhead.h\
	..\..\include\Base\Env.h\
	..\..\include\Base\BaseDebug.h\
	..\..\include\Foundation\SprObject.h\
	..\..\include\Foundation\SprScene.h\
	..\..\include\Foundation\SprUTCriticalSection.h\
	..\..\include\Foundation\SprUTOptimizer.h\
	..\..\include\Foundation\SprUTQPTimer.h\
	..\..\include\Foundation\SprUTTimer.h\
	..\..\include\FileIO\SprFIFile.h\
	..\..\include\FileIO\SprFIImport.h\
	..\..\include\FileIO\SprFIOpStateHandler.h\
	..\..\include\FileIO\SprFISdk.h\
	..\Foundation\ClapackLibsDef.h\
	..\Foundation\Foundation.h\
	..\Foundation\Object.h\
	..\Foundation\Scene.h\
	..\Foundation\UTBaseType.h\
	..\Foundation\UTClapack.h\
	..\Foundation\UTDllLoader.h\
	..\Foundation\UTDllLoaderImpl.h\
	..\Foundation\UTLoadContext.h\
	..\Foundation\UTLoadHandler.h\
	..\Foundation\UTOptimizer.h\
	..\Foundation\UTPath.h\
	..\Foundation\UTQPTimer.h\
	..\Foundation\UTSocket.h\
	..\Foundation\UTTimer.h\
	..\Foundation\UTTypeDesc.h\
	..\FileIO\FIFile.h\
	..\FileIO\FIFileBinary.h\
	..\FileIO\FIFileCOLLADA.h\
	..\FileIO\FIFileCOLLADAHandler.h\
	..\FileIO\FIFileSpr.h\
	..\FileIO\FIFileVrml.h\
	..\FileIO\FIFileX.h\
	..\FileIO\FIImport.h\
	..\FileIO\FileIO.h\
	..\FileIO\FILoadContext.h\
	..\FileIO\FIOpStateHandler.h\
	..\FileIO\FISaveContext.h\
	..\FileIO\FISdk.h\
	..\FileIO\FISpirit.h
	swig -I"D:\springheadSrcUniversal\core\bin\swig\Lib" -spr -w305,312,319,325,401,402 -DSWIG_FileIO -c++ FileIO.i
