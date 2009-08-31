#ifndef IK_H
#define IK_H

#include <vector>

#include <Springhead.h>
#include <Framework/SprFWApp.h>
#include <Physics/PHIK.h>

using namespace Spr;
using namespace PTM;
using namespace std;

class IK : public FWApp{
public:
	FWWin* window;

	Vec3d gravity;

	PHIKPosCtlIf *ikPosCtl1, *ikPosCtl2;
	PHSolidIf *soPosCtl1, *soPosCtl2;

	//�f�o�b�N�\���Ɏg���ϐ�
	bool bGravity;
	bool bDebug;
	bool bStep;
	bool bOneStep;
	bool bIK;

	IK();

	static void _cdecl TimerFunc(int id);
	void CallStep();

	virtual void Init(int argc, char* argv[]);
	virtual void Timer();

	void Reset(int sceneNum=0);
	void InitCameraView();
	void BuildScene(int sceneNum=0);
	void Step();
	void Display();		
	void Keyboard(int key, int x, int y);

	void OneStep();
}; 

extern IK app;

#endif