# Springhead For Android

I can only finish on Mac

## 1. download https://developer.android.com/ndk/downloads

Download Android NDK(mine is r25c)

## 2. Get NDK files

Open the download file, in mac, open the .dmg file then display package content, find NDK folder.

## 3. build

cd .../springheadSrcUniversalForAndroid/core/src/SprCSharp/

If have, delete "build" folder under SprCSharp. Also, please organize the format, avoid enter in the commands.

cmake
-DCMAKE_TOOLCHAIN_FILE=..................../NDK/build/cmake/android.toolchain.cmake
-DANDROID_ABI="arm64-v8a" -DANDROID_NDK=$ANDROID_NDK
-DANDROID_PLATFORM=android-27 -DCMAKE_BUILD_TYPE=Release -B build

cd build

make

## 4. Get the output.

After a long time compile, you will get "libSprExport.so" under "build/SprExport" folder. This is what you want, you can bring it to Unity and it can run in Android. Enjoy!

215 warnings generated.

[ 98%] **Linking CXX shared library libSprExport.so**

[ 98%] Built target SprExport

[ 99%] Building CXX object CMakeFiles/SprCSharpMain.dir/dummy/_cmake_dummy.cpp.o

[100%] **Linking CXX static library libSprCSharpMain.a**





-------------

old memo:

go to SprCharp folder

Android:

cmake -DCMAKE_TOOLCHAIN_FILE=/Users/yunxiuxu/Documents/Android/NDK/build/cmake/android.toolchain.cmake -DANDROID_ABI="arm64-v8a" -DANDROID_NDK=$ANDROID_NDK -DANDROID_PLATFORM=android-27 -DCMAKE_BUILD_TYPE=Release -B build

Mac: 

cmake -B build -G "Unix Makefiles"





XU Yunxiu, 2023 7 10
