#include "FWVrmlFileLoader.h"
#include <iostream>
#include <sstream>


#define ESC 27

FWVrmlfileLoader::FWVrmlfileLoader(){
	fileName = "./VrmlFiles/sceneSample.wrl";
	bDebug		= false;
}

void FWVrmlfileLoader::Init(int argc, char* argv[]){
	/// �V�~�����[�V�����̏�����
	CreateSdk();
	GetSdk()->Clear();						// SDK�̏�����
	GetSdk()->LoadScene(fileName);			// �t�@�C���̃��[�h

	/// �`�惂�[�h�̐ݒ�
	SetGRAdaptee(TypeGLUT);					// GLUT�ŕ`��
	GRInit(argc, argv);		// ������

	/// �E�B���h�E�̍쐬
	FWWinDesc windowDesc;					// GL�̃E�B���h�E�f�B�X�N���v�^
	windowDesc.title = "FWVrmlFileLoader";	// �E�B���h�E�̃^�C�g��
	CreateWin(windowDesc);					// �E�B���h�E�̍쐬
	GetCurrentWin()->SetScene(GetSdk()->GetScene());

	/// �J�����r���[�̏�����
	InitCameraView();	
	CreateTimer();
}

void FWVrmlfileLoader::InitCameraView(){
	///�@�J�����r���[�̏�����
	std::istringstream issView(
		"((0.999816 -0.0126615 0.0144361 -0.499499)"
		"(6.50256e-010 0.751806 0.659384 13.2441)"
		"(-0.019202 -0.659263 0.751667 10.0918)"
		"(     0      0      0      1))"
		);
	issView >> cameraInfo.view;
}

void FWVrmlfileLoader::Reset(){
	GetSdk()->Clear();		
	GetSdk()->LoadScene("./xFiles/sceneSample.x");
	GetCurrentWin()->SetScene(GetSdk()->GetScene());
}

void FWVrmlfileLoader::TimerFunc(int id){
	Step();
}

void FWVrmlfileLoader::IdleFunc(){
}
void FWVrmlfileLoader::Step(){
	GetSdk()->Step();
	PostRedisplay();
}

void FWVrmlfileLoader::Display(){
	/// �`�惂�[�h�̐ݒ�
	GetSdk()->SetDebugMode(bDebug);
	GRDebugRenderIf* render = GetCurrentWin()->render->Cast();
	render->SetRenderMode(true, false);
//	render->EnableRenderAxis(bDebug);
	render->EnableRenderForce(bDebug);
	render->EnableRenderContact(bDebug);

	/// �J�������W�̎w��
	FWWin* win = GetCurrentWin();
	if (win->scene){
		GRCameraIf* cam = win->scene->GetGRScene()->GetCamera();
		if (cam && cam->GetFrame()){
			cam->GetFrame()->SetTransform(cameraInfo.view);
		}else{
			GetCurrentWin()->render->SetViewMatrix(cameraInfo.view.inv());
		}
	}

	/// �`��̎��s
	if(!GetCurrentWin()) return;
	GetSdk()->SwitchScene(GetCurrentWin()->GetScene());
	GetSdk()->SwitchRender(GetCurrentWin()->GetRender());
	GetSdk()->Draw();
	glutSwapBuffers();
}


void FWVrmlfileLoader::Keyboard(int key, int x, int y){
	switch (key) {
		case ESC:
		case 'q':
			exit(0);
			break;
		case 'r':
			Reset();			// �t�@�C���̍ēǂݍ���
			break;
		case 'w':				// �J����������
			InitCameraView();	
			break;
		case 'd':				// �f�o�b�N�\��
			bDebug = !bDebug;
			break;
		default:
			break;
	}
}