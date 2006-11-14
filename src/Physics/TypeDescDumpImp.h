//	Do not edit. MakeTypeDesc.bat will update this file.
	
	PHConstraintDesc* pPHConstraintDesc = NULL;
	desc = DBG_NEW UTTypeDesc("PHConstraintDesc");
	desc->size = sizeof(PHConstraintDesc);
	desc->ifInfo = PHConstraintIf::GetIfInfoStatic();
	((IfInfo*)PHConstraintIf::GetIfInfoStatic())->desc = desc;
	desc->access = DBG_NEW UTAccess<PHConstraintDesc>;
	field = desc->AddField("ConstraintType", "enum", "type",  "");
	field->AddEnumConst("CONTACT");
	field->AddEnumConst("HINGEJOINT");
	field->AddEnumConst("SLIDERJOINT");
	field->AddEnumConst("BALLJOINT");
	field->AddEnumConst("UNIVERSALJOINT");
	field->AddEnumConst("PATHJOINT");
	field->AddEnumConst("SPRING");
	field->AddEnumConst("SPRING");
	field->offset = int((char*)(&pPHConstraintDesc->type) - (char*)pPHConstraintDesc);
	field = desc->AddField("", "bool", "bEnabled", "");
	field->offset = (char*)&(pPHConstraintDesc->bEnabled) - (char*)pPHConstraintDesc;
	field = desc->AddField("", "Posed", "posePlug", "");
	field->offset = (char*)&(pPHConstraintDesc->posePlug) - (char*)pPHConstraintDesc;
	field = desc->AddField("", "Posed", "poseSocket", "");
	field->offset = (char*)&(pPHConstraintDesc->poseSocket) - (char*)pPHConstraintDesc;
	db->RegisterDesc(desc);
	
	PHJoint1DDesc* pPHJoint1DDesc = NULL;
	desc = DBG_NEW UTTypeDesc("PHJoint1DDesc");
	desc->size = sizeof(PHJoint1DDesc);
	desc->ifInfo = PHJoint1DIf::GetIfInfoStatic();
	((IfInfo*)PHJoint1DIf::GetIfInfoStatic())->desc = desc;
	desc->access = DBG_NEW UTAccess<PHJoint1DDesc>;
	field = desc->AddBase("PHJointDesc");
	field->offset = (char*)(PHJointDesc*)pPHJoint1DDesc - (char*)pPHJoint1DDesc;
	field = desc->AddField("", "double", "lower", "");
	field->offset = (char*)&(pPHJoint1DDesc->lower) - (char*)pPHJoint1DDesc;
	field = desc->AddField("", "double", "upper", "");
	field->offset = (char*)&(pPHJoint1DDesc->upper) - (char*)pPHJoint1DDesc;
	field = desc->AddField("", "double", "spring", "");
	field->offset = (char*)&(pPHJoint1DDesc->spring) - (char*)pPHJoint1DDesc;
	field = desc->AddField("", "double", "origin", "");
	field->offset = (char*)&(pPHJoint1DDesc->origin) - (char*)pPHJoint1DDesc;
	field = desc->AddField("", "double", "damper", "");
	field->offset = (char*)&(pPHJoint1DDesc->damper) - (char*)pPHJoint1DDesc;
	field = desc->AddField("", "double", "torque", "");
	field->offset = (char*)&(pPHJoint1DDesc->torque) - (char*)pPHJoint1DDesc;
	db->RegisterDesc(desc);
	
	PHHingeJointDesc* pPHHingeJointDesc = NULL;
	desc = DBG_NEW UTTypeDesc("PHHingeJointDesc");
	desc->size = sizeof(PHHingeJointDesc);
	desc->ifInfo = PHHingeJointIf::GetIfInfoStatic();
	((IfInfo*)PHHingeJointIf::GetIfInfoStatic())->desc = desc;
	desc->access = DBG_NEW UTAccess<PHHingeJointDesc>;
	field = desc->AddBase("PHJoint1DDesc");
	field->offset = (char*)(PHJoint1DDesc*)pPHHingeJointDesc - (char*)pPHHingeJointDesc;
	db->RegisterDesc(desc);
	
	PHSliderJointDesc* pPHSliderJointDesc = NULL;
	desc = DBG_NEW UTTypeDesc("PHSliderJointDesc");
	desc->size = sizeof(PHSliderJointDesc);
	desc->ifInfo = PHSliderJointIf::GetIfInfoStatic();
	((IfInfo*)PHSliderJointIf::GetIfInfoStatic())->desc = desc;
	desc->access = DBG_NEW UTAccess<PHSliderJointDesc>;
	field = desc->AddBase("PHJoint1DDesc");
	field->offset = (char*)(PHJoint1DDesc*)pPHSliderJointDesc - (char*)pPHSliderJointDesc;
	db->RegisterDesc(desc);
	
	PHPathPoint* pPHPathPoint = NULL;
	desc = DBG_NEW UTTypeDesc("PHPathPoint");
	desc->size = sizeof(PHPathPoint);
	desc->access = DBG_NEW UTAccess<PHPathPoint>;
	field = desc->AddField("", "double", "s", "");
	field->offset = (char*)&(pPHPathPoint->s) - (char*)pPHPathPoint;
	field = desc->AddField("", "Posed", "pose", "");
	field->offset = (char*)&(pPHPathPoint->pose) - (char*)pPHPathPoint;
	db->RegisterDesc(desc);
	
	PHPathDesc* pPHPathDesc = NULL;
	desc = DBG_NEW UTTypeDesc("PHPathDesc");
	desc->size = sizeof(PHPathDesc);
	desc->ifInfo = PHPathIf::GetIfInfoStatic();
	((IfInfo*)PHPathIf::GetIfInfoStatic())->desc = desc;
	desc->access = DBG_NEW UTAccess<PHPathDesc>;
	field = desc->AddField("vector", "PHPathPoint", "points", "");
	field->offset = (char*)&(pPHPathDesc->points) - (char*)pPHPathDesc;
	field = desc->AddField("", "bool", "bLoop", "");
	field->offset = (char*)&(pPHPathDesc->bLoop) - (char*)pPHPathDesc;
	db->RegisterDesc(desc);
	
	PHPathJointDesc* pPHPathJointDesc = NULL;
	desc = DBG_NEW UTTypeDesc("PHPathJointDesc");
	desc->size = sizeof(PHPathJointDesc);
	desc->ifInfo = PHPathJointIf::GetIfInfoStatic();
	((IfInfo*)PHPathJointIf::GetIfInfoStatic())->desc = desc;
	desc->access = DBG_NEW UTAccess<PHPathJointDesc>;
	field = desc->AddBase("PHJoint1DDesc");
	field->offset = (char*)(PHJoint1DDesc*)pPHPathJointDesc - (char*)pPHPathJointDesc;
	db->RegisterDesc(desc);
	
	PHBallJointDesc* pPHBallJointDesc = NULL;
	desc = DBG_NEW UTTypeDesc("PHBallJointDesc");
	desc->size = sizeof(PHBallJointDesc);
	desc->ifInfo = PHBallJointIf::GetIfInfoStatic();
	((IfInfo*)PHBallJointIf::GetIfInfoStatic())->desc = desc;
	desc->access = DBG_NEW UTAccess<PHBallJointDesc>;
	field = desc->AddBase("PHJointDesc");
	field->offset = (char*)(PHJointDesc*)pPHBallJointDesc - (char*)pPHBallJointDesc;
	field = desc->AddField("", "double", "max_angle", "");
	field->offset = (char*)&(pPHBallJointDesc->max_angle) - (char*)pPHBallJointDesc;
	field = desc->AddField("", "Vec3d", "torque", "");
	field->offset = (char*)&(pPHBallJointDesc->torque) - (char*)pPHBallJointDesc;
	db->RegisterDesc(desc);
	
	PHUniversalJointDesc* pPHUniversalJointDesc = NULL;
	desc = DBG_NEW UTTypeDesc("PHUniversalJointDesc");
	desc->size = sizeof(PHUniversalJointDesc);
	desc->ifInfo = PHUniversalJointIf::GetIfInfoStatic();
	((IfInfo*)PHUniversalJointIf::GetIfInfoStatic())->desc = desc;
	desc->access = DBG_NEW UTAccess<PHUniversalJointDesc>;
	field = desc->AddBase("PHJointDesc");
	field->offset = (char*)(PHJointDesc*)pPHUniversalJointDesc - (char*)pPHUniversalJointDesc;
	field = desc->AddField("", "Vec2d", "torque", "");
	field->offset = (char*)&(pPHUniversalJointDesc->torque) - (char*)pPHUniversalJointDesc;
	db->RegisterDesc(desc);
	
	PHSpringDesc* pPHSpringDesc = NULL;
	desc = DBG_NEW UTTypeDesc("PHSpringDesc");
	desc->size = sizeof(PHSpringDesc);
	desc->ifInfo = PHSpringIf::GetIfInfoStatic();
	((IfInfo*)PHSpringIf::GetIfInfoStatic())->desc = desc;
	desc->access = DBG_NEW UTAccess<PHSpringDesc>;
	field = desc->AddBase("PHConstraintDesc");
	field->offset = (char*)(PHConstraintDesc*)pPHSpringDesc - (char*)pPHSpringDesc;
	field = desc->AddField("", "Vec3d", "spring", "");
	field->offset = (char*)&(pPHSpringDesc->spring) - (char*)pPHSpringDesc;
	field = desc->AddField("", "Vec3d", "damper", "");
	field->offset = (char*)&(pPHSpringDesc->damper) - (char*)pPHSpringDesc;
	db->RegisterDesc(desc);
	
	PHInactiveSolids* pPHInactiveSolids = NULL;
	desc = DBG_NEW UTTypeDesc("PHInactiveSolids");
	desc->size = sizeof(PHInactiveSolids);
	desc->access = DBG_NEW UTAccess<PHInactiveSolids>;
	field = desc->AddField("vector", "string", "solids", "");
	field->offset = (char*)&(pPHInactiveSolids->solids) - (char*)pPHInactiveSolids;
	db->RegisterDesc(desc);
	
	PHSceneState* pPHSceneState = NULL;
	desc = DBG_NEW UTTypeDesc("PHSceneState");
	desc->size = sizeof(PHSceneState);
	desc->access = DBG_NEW UTAccess<PHSceneState>;
	field = desc->AddField("", "double", "timeStep", "");
	field->offset = (char*)&(pPHSceneState->timeStep) - (char*)pPHSceneState;
	field = desc->AddField("", "unsigned", "count", "");
	field->offset = (char*)&(pPHSceneState->count) - (char*)pPHSceneState;
	db->RegisterDesc(desc);
	
	PHSceneDesc* pPHSceneDesc = NULL;
	desc = DBG_NEW UTTypeDesc("PHSceneDesc");
	desc->size = sizeof(PHSceneDesc);
	desc->ifInfo = PHSceneIf::GetIfInfoStatic();
	((IfInfo*)PHSceneIf::GetIfInfoStatic())->desc = desc;
	desc->access = DBG_NEW UTAccess<PHSceneDesc>;
	field = desc->AddBase("PHSceneState");
	field->offset = (char*)(PHSceneState*)pPHSceneDesc - (char*)pPHSceneDesc;
	field = desc->AddField("", "Vec3f", "gravity", "");
	field->offset = (char*)&(pPHSceneDesc->gravity) - (char*)pPHSceneDesc;
	field = desc->AddField("", "int", "numIteration", "");
	field->offset = (char*)&(pPHSceneDesc->numIteration) - (char*)pPHSceneDesc;
	db->RegisterDesc(desc);
	
	PHSdkDesc* pPHSdkDesc = NULL;
	desc = DBG_NEW UTTypeDesc("PHSdkDesc");
	desc->size = sizeof(PHSdkDesc);
	desc->ifInfo = PHSdkIf::GetIfInfoStatic();
	((IfInfo*)PHSdkIf::GetIfInfoStatic())->desc = desc;
	desc->access = DBG_NEW UTAccess<PHSdkDesc>;
	db->RegisterDesc(desc);
	
	PHSolidState* pPHSolidState = NULL;
	desc = DBG_NEW UTTypeDesc("PHSolidState");
	desc->size = sizeof(PHSolidState);
	desc->access = DBG_NEW UTAccess<PHSolidState>;
	field = desc->AddField("", "Vec3d", "velocity", "");
	field->offset = (char*)&(pPHSolidState->velocity) - (char*)pPHSolidState;
<<<<<<< .mine
	field = desc->AddField("", "Vec3d", "oldVel", "");
	field->offset = (char*)&(pPHSolidState->oldVel) - (char*)pPHSolidState;
=======
>>>>>>> .r2206
	field = desc->AddField("", "Vec3d", "angVelocity", "");
	field->offset = (char*)&(pPHSolidState->angVelocity) - (char*)pPHSolidState;
<<<<<<< .mine
	field = desc->AddField("", "Vec3d", "oldAngVel", "");
	field->offset = (char*)&(pPHSolidState->oldAngVel) - (char*)pPHSolidState;
=======
>>>>>>> .r2206
	field = desc->AddField("", "Posed", "pose", "");
	field->offset = (char*)&(pPHSolidState->pose) - (char*)pPHSolidState;
	field = desc->AddField("", "Vec3d", "force", "");
	field->offset = (char*)&(pPHSolidState->force) - (char*)pPHSolidState;
	field = desc->AddField("", "Vec3d", "torque", "");
	field->offset = (char*)&(pPHSolidState->torque) - (char*)pPHSolidState;
	field = desc->AddField("", "Vec3d", "nextForce", "");
	field->offset = (char*)&(pPHSolidState->nextForce) - (char*)pPHSolidState;
	field = desc->AddField("", "Vec3d", "nextTorque", "");
	field->offset = (char*)&(pPHSolidState->nextTorque) - (char*)pPHSolidState;
	db->RegisterDesc(desc);
	
	PHSolidDesc* pPHSolidDesc = NULL;
	desc = DBG_NEW UTTypeDesc("PHSolidDesc");
	desc->size = sizeof(PHSolidDesc);
	desc->ifInfo = PHSolidIf::GetIfInfoStatic();
	((IfInfo*)PHSolidIf::GetIfInfoStatic())->desc = desc;
	desc->access = DBG_NEW UTAccess<PHSolidDesc>;
	field = desc->AddBase("PHSolidState");
	field->offset = (char*)(PHSolidState*)pPHSolidDesc - (char*)pPHSolidDesc;
	field = desc->AddField("", "double", "mass", "");
	field->offset = (char*)&(pPHSolidDesc->mass) - (char*)pPHSolidDesc;
	field = desc->AddField("", "Matrix3d", "inertia", "");
	field->offset = (char*)&(pPHSolidDesc->inertia) - (char*)pPHSolidDesc;
	field = desc->AddField("", "Vec3d", "center", "");
	field->offset = (char*)&(pPHSolidDesc->center) - (char*)pPHSolidDesc;
	field = desc->AddField("", "bool", "gravity", "");
	field->offset = (char*)&(pPHSolidDesc->gravity) - (char*)pPHSolidDesc;
	field = desc->AddField("", "bool", "dynamical", "");
	field->offset = (char*)&(pPHSolidDesc->dynamical) - (char*)pPHSolidDesc;
	db->RegisterDesc(desc);
