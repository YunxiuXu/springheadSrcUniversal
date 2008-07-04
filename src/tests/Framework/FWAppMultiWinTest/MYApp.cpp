/*
 *  Copyright (c) 2003-2008, Shoichi Hasegawa and Springhead development team 
 *  All rights reserved.
 *  This software is free software. You can freely use, distribute and modify this 
 *  software. Please deal with this software under one of the following licenses: 
 *  This license itself, Boost Software License, The MIT License, The BSD License.   
 */
#include "MYApp.h"
#include <windows.h>
#include <Framework/SprFWAppGLUT.h>
#include <GL/glew.h>
#include <GL/glut.h>
#include <iostream>
#include <sstream>

#define ESC 27
using namespace std;

//=======================================================================================================
// �R���X�g���N�^�E�f�X�g���N�^
MYApp::MYApp(){
	instance	= this;
	dt			= 0.05;
	nIter		= 20;
	numWindow	= 3;
	for(int i = 0; i < numWindow; i++){
		stringstream sout1;
		sout1 << "Window " << i+1 << endl;
		winNames.push_back(sout1.str());
		stringstream sout2;
		sout2 << "sceneWindow" << i+1 << ".x" << endl;
		fileNames.push_back(sout2.str());
		camAngles.push_back(0.0f);
		camZooms.push_back(2.0f);
		views.push_back(Affinef());
	}
}

//=======================================================================================================
// �N���X���̊֐���`
void MYApp::NumOfClassMembers(std::ostream& out){
	out << "Show the sizes of te MYApp's vector members" << std::endl;
	out << "numWindow		: " << numWindow		<< std::endl;
	out << "windows.size    : " << windows.size()	<< std::endl;
	out << "fwScenes		: " << fwScenes.size()	<< std::endl;
	out << "winNames		: " << winNames.size()  << std::endl;
	out << "camAngles		: " << camAngles.size()	<< std::endl;
	out << "camZooms		: " << camZooms.size()	<< std::endl;
	out << "views			: " << views.size()		<< std::endl;
}

//=======================================================================================================
// ��ʊK�w�Ő錾���ꂽ�֐��̃I�[�o�[���[�h

void MYApp::Init(int argc, char* argv[]){
	
	FWAppGLUT::Init(argc, argv);
	GetSdk()->Clear();
	GetSdk()->SetDebugMode(true);

	for(int i = 0; i < numWindow ; i++){
		DSTR << fileNames[i] << std::endl;
		if(GetSdk()->LoadScene(fileNames[i].c_str())){
			fwScenes.push_back(GetSdk()->FindObject("fwScene")->Cast());
			Sleep(1000);
			DSTR << "FWScene was loaded." << std::endl;
		}
		else{
			DSTR << "NO scenes wa have." << std::endl;
			exit(0xff);
		}

		FWAppGLUTDesc winDesc;
		{
			winDesc.width			= 480;
			winDesc.height			= 320;
			winDesc.left			= 10 + 500*(i/2);
			winDesc.top				= 30 + 360*(i%2);
			winDesc.parentWindow	= 0;
			winDesc.fullscreen		= false;
			if(winNames[i].size()){
				winDesc.title		= winNames[i];
			}else{
				winDesc.title		= "Window";
			}
		}
		windows.push_back(CreateWin(winDesc));
		windows[i]->scene = fwScenes[i];
		views.push_back(GetCameraInfo().view);
	}
	GetSdk()->SaveScene("sceneMultiWindow.x");
	NumOfClassMembers(DSTR);
	return;
}

void MYApp::Keyboard(int key, int x, int y){
	if(key == 'q'){
		exit(0);
	} else if(key == ESC){
		exit(0);
	} else{
	}
}

void MYApp::Display(){
	
		FWWin* wr = GetCurrentWin();

		GetSdk()->SetDebugMode(true);
		GRDebugRenderIf* r = wr->render->Cast();
		r->SetRenderMode(false, true);
		r->DrawWorldAxis(GetSdk()->GetScene()->GetPHScene());
//		r->EnableRenderAxis();
		r->EnableRenderForce();
		r->EnableRenderContact();
		
		GRCameraIf* cam = wr->scene->GetGRScene()->GetCamera();
		if (cam && cam->GetFrame()){
			//Affinef af = cam->GetFrame()->GetTransform();
			cam->GetFrame()->SetTransform(cameraInfo.view);
		}else{
			wr->render->SetViewMatrix(cameraInfo.view.inv());
		}
		FWAppGLUT::Display();
}