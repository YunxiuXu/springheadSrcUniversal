/*
 *  Copyright (c) 2003-2012, Shoichi Hasegawa and Springhead development team 
 *  All rights reserved.
 *  This software is free software. You can freely use, distribute and modify this 
 *  software. Please deal with this software under one of the following licenses: 
 *  This license itself, Boost Software License, The MIT License, The BSD License.   
 */
#include <Physics/PHFemVibration.h>

namespace Spr{;

PHFemVibration::PHFemVibration(const PHFemVibrationDesc& desc){
	SetDesc(&desc);
	Init();
} 

void PHFemVibration::Init(){
}

void PHFemVibration::Step(){
}


}