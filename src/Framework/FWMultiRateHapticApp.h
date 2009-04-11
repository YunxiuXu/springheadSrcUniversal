#ifndef FWMULTIRATE_HAPTIC_APP_H
#define FWMULTIRATE_HAPTIC_APP_H

#include <Framework/FWHapticAppBase.h>
#include <Framework/FWHapticBase.h>

namespace Spr{;
class FWMultiRateHapticApp : public FWHapticAppBase{
protected:
	FWHapticBase hapticProcess;
	volatile int hapticcount;
	bool bSync;
	bool bCalcPhys;
public:
	FWMultiRateHapticApp();
	virtual void InitCameraView();
	virtual void Idle();
	virtual void SyncHapticProcess();

	FWHapticBase* GetHapticProcess();
};

}
#endif