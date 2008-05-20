#ifndef VR_HAPTIC_HDSPIDARMOTOR_H
#define VR_HAPTIC_HDSPIDARMOTOR_H

#include "Base/Affine.h"
#include "DVDaBase.h"
#include "DVAdBase.h"
#include "DVCounterBase.h"

namespace Spr {

class SPR_DLL HISpidarMotor:public HIBase, public HISpidarMotorDesc{
	SPR_OBJECTDEF(HISpidarMotor);
public:
	//@{	�f�o�C�X�A�N�Z�X
	///	�g�p����D/A.
	DVDaBaseIf* da;
	///	�g�p����G���R�[�_�̃J�E���^.
	DVCounterBaseIf* counter;
	///	�g�p����A/D.
	DVAdBaseIf* ad;
	//@}
	///	�o�͂�����
	float force;

	//@{	���[�^�萔(������R�E�t�N�d�́E�R�C���萔)�̃L�����u���[�V����
	float voltageInt;	///<	���[�^�[�q�ԓd���̐ϕ�
	float currentInt;	///<	���[�^�d���̐ϕ�
	float timeInt;		///<	�ϕ���Ԃ̎���
	float currentLast;	///<	�v���J�n���̃��[�^�d��
	float lengthLast;	///<	�v���J�n���̎��̒���
	float vdd;			///<	�d���d��
	PTM::VMatrixCol<float> calibMat;
						///<	�L�����u���[�V�����p�f�[�^
	PTM::VVector<float> calibVec;
						///<	�L�����u���[�V�����p�f�[�^
	Vec4f calibResult;	///<	�L�����u���[�V�������� (R, L, E)
	//@}
public:
	///	
	HISpidarMotor();
	///	
	virtual ~HISpidarMotor(){}
	///	�o�͂̐ݒ�
	void SetForce(float f){
		if(f < minForce) f = minForce;
		if(f > maxForce) f = maxForce;
		if(da) da->Voltage(f * voltPerNewton);
		force = f;
	}
	///	���ۂɏo�͂����͂̎擾
	float GetForce(){
		return force;
	}
	///	�d���l�̎擾
	float GetCurrent(){
		return force * voltPerNewton * currentPerVolt;
	}
	///	���݂̎��̒����̐ݒ�
	void SetLength(float l){ if(counter) counter->Count(long(l / lengthPerPulse)); }
	///	���݂̎��̒���
	float GetLength(){
		if(counter) return counter->Count() * lengthPerPulse;
		else return 0;
	}
	///	���x�̌v��
	float GetVelocity();
	///	���[�^�萔�̃L�����u���[�V�����̂��߂̌v�� (100�񂭂炢������Ă�ł���)
	void GetCalibrationData(float dt);
	///	���[�^�萔�̃L�����u���[�V���� (���������Ă�ŃL�����u���[�V����)
	void Calibrate(bool bUpdate);
	///	�d���d���̌v��
	void GetVdd();
};

}	//	namespace Spr
#endif