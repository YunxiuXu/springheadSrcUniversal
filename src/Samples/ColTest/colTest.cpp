
#include <Springhead.h>		//	Springhead�̃C���^�t�F�[�X
#include <Physics/PHConstraintEngine.h>
#include <ctime>
#include <GL/glut.h>
#include <Springhead.h>
#include <fstream>

#ifdef USE_HDRSTOP
#pragma hdrstop
#endif

using namespace Spr;
int main(){
	std::ifstream file;
#if 0
	file.open("ContFindCommonPointSaveParam.txt");
	PHSdkIf* sdk = PHSdkIf::CreateSdk();
	ContFindCommonPointCall(file, sdk);
#else
	file.open("DetectContinuouslySaveParam.txt");
	PHSdkIf* sdk = PHSdkIf::CreateSdk();
	CallDetectContinuously(file, sdk);
#endif
	return 0;
}