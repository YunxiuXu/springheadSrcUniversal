# Springhead For Mac

I can only finish on Mac, and IK cannot work now because I cannot compile it. 

## 1.

 cd .../springheadSrcMac/core/src/SprCSharp/

## 2.

 delete build folder(if have)

## 3.

 cmake -B build -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release

## 4. Get the output.

After a long time compile, you will get "libSprExport.dylib" under "build/SprExport" folder. This is what you want, you can bring it to Unity, ...Assets/SprUnity/Plugins/, then it can run in Mac, Enjoy!



215 warnings generated.

[ 98%] **Linking CXX shared library libSprExport.dylib**

[ 98%] Built target SprExport

[ 99%] Building CXX object CMakeFiles/SprCSharpMain.dir/dummy/_cmake_dummy.cpp.o

[100%] **Linking CXX static library libSprCSharpMain.a**

warning: /Library/Developer/CommandLineTools/usr/bin/ranlib: archive library: libSprCSharpMain.a the table of contents is empty (no object file members in the library define global symbols)

[100%] Built target SprCSharpMain**

XU Yunxiu, 2023 7 10
