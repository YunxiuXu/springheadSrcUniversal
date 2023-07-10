#include <Springhead.h>
#include <sstream>
#include <SprCollision.h>
#include <Physics/SprPHJointMotor.h>
#include <codecvt>
using namespace Spr;
using namespace std;
extern "C" {
    __attribute__((visibility("default"))) void*  Spr_new_PHMaterial() {
    void* _ptr = NULL;
	 { _ptr = new PHMaterial(); }
	//catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_PHMaterial(void * v) {
        if (v == NULL) return;
         { delete (PHMaterial*) v; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHMaterial_get_density(void * _this) {
        float _val = 0;
         { _val = (*((PHMaterial*)_this)).density; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_set_density(void * _this, float value) {
         { (*((PHMaterial*)_this)).density = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHMaterial_get_mu(void * _this) {
        float _val = 0;
         { _val = (*((PHMaterial*)_this)).mu; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_set_mu(void * _this, float value) {
         { (*((PHMaterial*)_this)).mu = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHMaterial_get_mu0(void * _this) {
        float _val = 0;
         { _val = (*((PHMaterial*)_this)).mu0; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_set_mu0(void * _this, float value) {
         { (*((PHMaterial*)_this)).mu0 = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHMaterial_get_e(void * _this) {
        float _val = 0;
         { _val = (*((PHMaterial*)_this)).e; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_set_e(void * _this, float value) {
         { (*((PHMaterial*)_this)).e = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHMaterial_get_rotationFriction(void * _this) {
        float _val = 0;
         { _val = (*((PHMaterial*)_this)).rotationFriction; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_set_rotationFriction(void * _this, float value) {
         { (*((PHMaterial*)_this)).rotationFriction = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHMaterial_get_spring(void * _this) {
        float _val = 0;
         { _val = (*((PHMaterial*)_this)).spring; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_set_spring(void * _this, float value) {
         { (*((PHMaterial*)_this)).spring = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHMaterial_get_damper(void * _this) {
        float _val = 0;
         { _val = (*((PHMaterial*)_this)).damper; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_set_damper(void * _this, float value) {
         { (*((PHMaterial*)_this)).damper = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHMaterial_get_reflexSpring(void * _this) {
        float _val = 0;
         { _val = (*((PHMaterial*)_this)).reflexSpring; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_set_reflexSpring(void * _this, float value) {
         { (*((PHMaterial*)_this)).reflexSpring = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHMaterial_get_reflexDamper(void * _this) {
        float _val = 0;
         { _val = (*((PHMaterial*)_this)).reflexDamper; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_set_reflexDamper(void * _this, float value) {
         { (*((PHMaterial*)_this)).reflexDamper = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHMaterial_get_frictionSpring(void * _this) {
        float _val = 0;
         { _val = (*((PHMaterial*)_this)).frictionSpring; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_set_frictionSpring(void * _this, float value) {
         { (*((PHMaterial*)_this)).frictionSpring = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHMaterial_get_frictionDamper(void * _this) {
        float _val = 0;
         { _val = (*((PHMaterial*)_this)).frictionDamper; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_set_frictionDamper(void * _this, float value) {
         { (*((PHMaterial*)_this)).frictionDamper = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHMaterial_get_vibA(void * _this) {
        float _val = 0;
         { _val = (*((PHMaterial*)_this)).vibA; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_set_vibA(void * _this, float value) {
         { (*((PHMaterial*)_this)).vibA = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHMaterial_get_vibB(void * _this) {
        float _val = 0;
         { _val = (*((PHMaterial*)_this)).vibB; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_set_vibB(void * _this, float value) {
         { (*((PHMaterial*)_this)).vibB = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHMaterial_get_vibW(void * _this) {
        float _val = 0;
         { _val = (*((PHMaterial*)_this)).vibW; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_set_vibW(void * _this, float value) {
         { (*((PHMaterial*)_this)).vibW = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHMaterial_get_vibT(void * _this) {
        float _val = 0;
         { _val = (*((PHMaterial*)_this)).vibT; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_set_vibT(void * _this, float value) {
         { (*((PHMaterial*)_this)).vibT = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHMaterial_get_vibContact(void * _this) {
        char _val = 0;
         { _val = (char) (*((PHMaterial*)_this)).vibContact; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_set_vibContact(void * _this, char value) {
         { (*((PHMaterial*)_this)).vibContact = (value == 0) ? false : true; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_PHMaterial_get_vibFric(void * _this) {
        char _val = 0;
         { _val = (char) (*((PHMaterial*)_this)).vibFric; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_set_vibFric(void * _this, char value) {
         { (*((PHMaterial*)_this)).vibFric = (value == 0) ? false : true; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHMaterial_get_timeVaryFrictionA(void * _this) {
        float _val = 0;
         { _val = (*((PHMaterial*)_this)).timeVaryFrictionA; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_set_timeVaryFrictionA(void * _this, float value) {
         { (*((PHMaterial*)_this)).timeVaryFrictionA = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHMaterial_get_timeVaryFrictionB(void * _this) {
        float _val = 0;
         { _val = (*((PHMaterial*)_this)).timeVaryFrictionB; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_set_timeVaryFrictionB(void * _this, float value) {
         { (*((PHMaterial*)_this)).timeVaryFrictionB = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHMaterial_get_timeVaryFrictionC(void * _this) {
        float _val = 0;
         { _val = (*((PHMaterial*)_this)).timeVaryFrictionC; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_set_timeVaryFrictionC(void * _this, float value) {
         { (*((PHMaterial*)_this)).timeVaryFrictionC = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHMaterial_get_frictionViscosity(void * _this) {
        float _val = 0;
         { _val = (*((PHMaterial*)_this)).frictionViscosity; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_set_frictionViscosity(void * _this, float value) {
         { (*((PHMaterial*)_this)).frictionViscosity = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHMaterial_get_stribeckVelocity(void * _this) {
        float _val = 0;
         { _val = (*((PHMaterial*)_this)).stribeckVelocity; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_set_stribeckVelocity(void * _this, float value) {
         { (*((PHMaterial*)_this)).stribeckVelocity = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_PHMaterial_get_stribeckmu(void * _this) {
        float _val = 0;
         { _val = (*((PHMaterial*)_this)).stribeckmu; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_set_stribeckmu(void * _this, float value) {
         { (*((PHMaterial*)_this)).stribeckmu = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_PHMaterial_vector_addr_mus(void * _this) {
        void * _ptr = NULL;
         { _ptr = &(*((PHMaterial*)_this)).mus; }
        //catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_vector_set_mus(void * _this, void * _ptr) {
         {
            if (&(*((PHMaterial*)_this)).mus != _ptr) {
                vector<float>* src = (vector<float>*) _ptr;
                vector<float>* dst = &(*((PHMaterial*)_this)).mus;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_PHMaterial_vector_addr_mu0s(void * _this) {
        void * _ptr = NULL;
         { _ptr = &(*((PHMaterial*)_this)).mu0s; }
        //catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_vector_set_mu0s(void * _this, void * _ptr) {
         {
            if (&(*((PHMaterial*)_this)).mu0s != _ptr) {
                vector<float>* src = (vector<float>*) _ptr;
                vector<float>* dst = &(*((PHMaterial*)_this)).mu0s;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_PHMaterial_vector_addr_timeVaryFrictionAs(void * _this) {
        void * _ptr = NULL;
         { _ptr = &(*((PHMaterial*)_this)).timeVaryFrictionAs; }
        //catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_vector_set_timeVaryFrictionAs(void * _this, void * _ptr) {
         {
            if (&(*((PHMaterial*)_this)).timeVaryFrictionAs != _ptr) {
                vector<float>* src = (vector<float>*) _ptr;
                vector<float>* dst = &(*((PHMaterial*)_this)).timeVaryFrictionAs;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_PHMaterial_vector_addr_timeVaryFrictionBs(void * _this) {
        void * _ptr = NULL;
         { _ptr = &(*((PHMaterial*)_this)).timeVaryFrictionBs; }
        //catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_vector_set_timeVaryFrictionBs(void * _this, void * _ptr) {
         {
            if (&(*((PHMaterial*)_this)).timeVaryFrictionBs != _ptr) {
                vector<float>* src = (vector<float>*) _ptr;
                vector<float>* dst = &(*((PHMaterial*)_this)).timeVaryFrictionBs;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_PHMaterial_vector_addr_timeVaryFrictionDs(void * _this) {
        void * _ptr = NULL;
         { _ptr = &(*((PHMaterial*)_this)).timeVaryFrictionDs; }
        //catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_vector_set_timeVaryFrictionDs(void * _this, void * _ptr) {
         {
            if (&(*((PHMaterial*)_this)).timeVaryFrictionDs != _ptr) {
                vector<float>* src = (vector<float>*) _ptr;
                vector<float>* dst = &(*((PHMaterial*)_this)).timeVaryFrictionDs;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_PHMaterial_vector_addr_timeVaryFrictionCs(void * _this) {
        void * _ptr = NULL;
         { _ptr = &(*((PHMaterial*)_this)).timeVaryFrictionCs; }
        //catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_vector_set_timeVaryFrictionCs(void * _this, void * _ptr) {
         {
            if (&(*((PHMaterial*)_this)).timeVaryFrictionCs != _ptr) {
                vector<float>* src = (vector<float>*) _ptr;
                vector<float>* dst = &(*((PHMaterial*)_this)).timeVaryFrictionCs;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_PHMaterial_vector_addr_stribeckVelocitys(void * _this) {
        void * _ptr = NULL;
         { _ptr = &(*((PHMaterial*)_this)).stribeckVelocitys; }
        //catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_vector_set_stribeckVelocitys(void * _this, void * _ptr) {
         {
            if (&(*((PHMaterial*)_this)).stribeckVelocitys != _ptr) {
                vector<float>* src = (vector<float>*) _ptr;
                vector<float>* dst = &(*((PHMaterial*)_this)).stribeckVelocitys;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_PHMaterial_vector_addr_stribeckmus(void * _this) {
        void * _ptr = NULL;
         { _ptr = &(*((PHMaterial*)_this)).stribeckmus; }
        //catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_vector_set_stribeckmus(void * _this, void * _ptr) {
         {
            if (&(*((PHMaterial*)_this)).stribeckmus != _ptr) {
                vector<float>* src = (vector<float>*) _ptr;
                vector<float>* dst = &(*((PHMaterial*)_this)).stribeckmus;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_PHMaterial_vector_addr_c(void * _this) {
        void * _ptr = NULL;
         { _ptr = &(*((PHMaterial*)_this)).c; }
        //catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_vector_set_c(void * _this, void * _ptr) {
         {
            if (&(*((PHMaterial*)_this)).c != _ptr) {
                vector<double>* src = (vector<double>*) _ptr;
                vector<double>* dst = &(*((PHMaterial*)_this)).c;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_PHMaterial_vector_addr_bristleK(void * _this) {
        void * _ptr = NULL;
         { _ptr = &(*((PHMaterial*)_this)).bristleK; }
        //catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_vector_set_bristleK(void * _this, void * _ptr) {
         {
            if (&(*((PHMaterial*)_this)).bristleK != _ptr) {
                vector<float>* src = (vector<float>*) _ptr;
                vector<float>* dst = &(*((PHMaterial*)_this)).bristleK;
                copy(src->begin(), src->end(), back_inserter(*dst));
            }
        }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_PHMaterial_get_velocityFieldMode(void * _this) {
        int _val = 0;
         { _val = (*((PHMaterial*)_this)).velocityFieldMode; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_set_velocityFieldMode(void * _this, int value) {
         { (*((PHMaterial*)_this)).velocityFieldMode = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_PHMaterial_addr_velocityFieldAxis(void * _this) {
        void * _ptr = NULL;
         { _ptr = &((PHMaterial*)_this)->velocityFieldAxis; }
        //catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_set_velocityFieldAxis(void * _this, void * _ptr) {
         {
            if (&(((PHMaterial*)_this)->velocityFieldAxis) != _ptr) {
                ((PHMaterial*)_this)->velocityFieldAxis = *((Vec3d*)_ptr);
            }
        }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_PHMaterial_get_velocityFieldMagnitude(void * _this) {
        double _val = 0;
         { _val = (*((PHMaterial*)_this)).velocityFieldMagnitude; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_PHMaterial_set_velocityFieldMagnitude(void * _this, double value) {
         { (*((PHMaterial*)_this)).velocityFieldMagnitude = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_PHMaterial_CalcVelocity(void * _this, void * pos, void * normal) {
	Vec3d* _ptr = (Vec3d*) NULL;
	 { _ptr = new Vec3d(); (*_ptr) = ((PHMaterial*) _this)->CalcVelocity((const Vec3d&) *((Vec3d*) pos), (const Vec3d&) *((Vec3d*) normal)); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_new_CDShapeDesc() {
	void * _ptr = (void *) NULL;
	 { _ptr = new CDShapeDesc(); }
	//catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_CDShapeDesc(void * v) {
        if (v == NULL) return;
         { delete (CDShapeDesc*) v; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDShapeDesc_addr_material(void * _this) {
        void * _ptr = NULL;
         { _ptr = &((CDShapeDesc*)_this)->material; }
        //catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_CDShapeDesc_set_material(void * _this, void * _ptr) {
         {
            if (&(((CDShapeDesc*)_this)->material) != _ptr) {
                ((CDShapeDesc*)_this)->material = *((PHMaterial*)_ptr);
            }
        }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_new_CDConvexMeshDesc() {
	void * _ptr = (void *) NULL;
	 { _ptr = new CDConvexMeshDesc(); }
	//catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_CDConvexMeshDesc(void * v) {
        if (v == NULL) return;
         { delete (CDConvexMeshDesc*) v; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDConvexMeshDesc_vector_get_vertices(void * _this) {
        void * _ptr = NULL;
         { _ptr = (vector<Vec3f>*) &((CDConvexMeshDesc*)_this)->vertices; }
        //catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_CDConvexMeshDesc_vector_set_vertices(void * _this, void * value) {
         { ((CDConvexMeshDesc*)_this)->vertices = *((std::vector<Vec3f>*) value); }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_new_CDConvexMeshInterpolateDesc() {
	void * _ptr = (void *) NULL;
	 { _ptr = new CDConvexMeshInterpolateDesc(); }
	//catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_CDConvexMeshInterpolateDesc(void * v) {
        if (v == NULL) return;
         { delete (CDConvexMeshInterpolateDesc*) v; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_new_CDSphereDesc() {
	void * _ptr = (void *) NULL;
	 { _ptr = new CDSphereDesc(); }
	//catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_CDSphereDesc(void * v) {
        if (v == NULL) return;
         { delete (CDSphereDesc*) v; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_CDSphereDesc_get_radius(void * _this) {
        float _val = 0;
         { _val = (*((CDSphereDesc*)_this)).radius; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_CDSphereDesc_set_radius(void * _this, float value) {
         { (*((CDSphereDesc*)_this)).radius = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_new_CDEllipsoidDesc() {
	void * _ptr = (void *) NULL;
	 { _ptr = new CDEllipsoidDesc(); }
	//catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_CDEllipsoidDesc(void * v) {
        if (v == NULL) return;
         { delete (CDEllipsoidDesc*) v; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDEllipsoidDesc_addr_radius(void * _this) {
        void * _ptr = NULL;
         { _ptr = &((CDEllipsoidDesc*)_this)->radius; }
        //catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_CDEllipsoidDesc_set_radius(void * _this, void * _ptr) {
         {
            if (&(((CDEllipsoidDesc*)_this)->radius) != _ptr) {
                ((CDEllipsoidDesc*)_this)->radius = *((Vec3d*)_ptr);
            }
        }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_new_CDCapsuleDesc() {
	void * _ptr = (void *) NULL;
	 { _ptr = new CDCapsuleDesc(); }
	//catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_CDCapsuleDesc(void * v) {
        if (v == NULL) return;
         { delete (CDCapsuleDesc*) v; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_CDCapsuleDesc_get_radius(void * _this) {
        float _val = 0;
         { _val = (*((CDCapsuleDesc*)_this)).radius; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_CDCapsuleDesc_set_radius(void * _this, float value) {
         { (*((CDCapsuleDesc*)_this)).radius = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_CDCapsuleDesc_get_length(void * _this) {
        float _val = 0;
         { _val = (*((CDCapsuleDesc*)_this)).length; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_CDCapsuleDesc_set_length(void * _this, float value) {
         { (*((CDCapsuleDesc*)_this)).length = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_new_CDRoundConeDesc() {
	void * _ptr = (void *) NULL;
	 { _ptr = new CDRoundConeDesc(); }
	//catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_CDRoundConeDesc(void * v) {
        if (v == NULL) return;
         { delete (CDRoundConeDesc*) v; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDRoundConeDesc_addr_radius(void * _this) {
        void * _ptr = NULL;
         { _ptr = &((CDRoundConeDesc*)_this)->radius; }
        //catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_CDRoundConeDesc_set_radius(void * _this, void * _ptr) {
         {
            if (&(((CDRoundConeDesc*)_this)->radius) != _ptr) {
                ((CDRoundConeDesc*)_this)->radius = *((Vec2f*)_ptr);
            }
        }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_CDRoundConeDesc_get_length(void * _this) {
        float _val = 0;
         { _val = (*((CDRoundConeDesc*)_this)).length; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_CDRoundConeDesc_set_length(void * _this, float value) {
         { (*((CDRoundConeDesc*)_this)).length = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_new_CDBoxDesc() {
	void * _ptr = (void *) NULL;
	 { _ptr = new CDBoxDesc(); }
	//catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_new_CDBoxDesc_2(void * bs) {
	void * _ptr = (void *) NULL;
	 { _ptr = new CDBoxDesc(*((Vec3d*) bs)); }
	//catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_CDBoxDesc(void * v) {
        if (v == NULL) return;
         { delete (CDBoxDesc*) v; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDBoxDesc_addr_boxsize(void * _this) {
        void * _ptr = NULL;
         { _ptr = &((CDBoxDesc*)_this)->boxsize; }
        //catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_CDBoxDesc_set_boxsize(void * _this, void * _ptr) {
         {
            if (&(((CDBoxDesc*)_this)->boxsize) != _ptr) {
                ((CDBoxDesc*)_this)->boxsize = *((Vec3f*)_ptr);
            }
        }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_new_CDShapePairState() {
	void * _ptr = (void *) NULL;
	 { _ptr = new CDShapePairState(); }
	//catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_CDShapePairState(void * v) {
        if (v == NULL) return;
         { delete (CDShapePairState*) v; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDShapePairState_addr_normal(void * _this) {
        void * _ptr = NULL;
         { _ptr = &((CDShapePairState*)_this)->normal; }
        //catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_CDShapePairState_set_normal(void * _this, void * _ptr) {
         {
            if (&(((CDShapePairState*)_this)->normal) != _ptr) {
                ((CDShapePairState*)_this)->normal = *((Vec3d*)_ptr);
            }
        }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_CDShapePairState_get_depth(void * _this) {
        double _val = 0;
         { _val = (*((CDShapePairState*)_this)).depth; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_CDShapePairState_set_depth(void * _this, double value) {
         { (*((CDShapePairState*)_this)).depth = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) unsigned int  Spr_CDShapePairState_get_lastContactCount(void * _this) {
        unsigned int _val = 0;
         { _val = (*((CDShapePairState*)_this)).lastContactCount; }
        //catch (const std::exception& e) {  }
        return _val;
    }
    __attribute__((visibility("default"))) void  Spr_CDShapePairState_set_lastContactCount(void * _this, unsigned int value) {
         { (*((CDShapePairState*)_this)).lastContactCount = value; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_new_CDBounds() {
	void * _ptr = (void *) NULL;
	 { _ptr = new CDBounds(); }
	//catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_new_CDBounds_3(void * min0, void * max0) {
	void * _ptr = (void *) NULL;
	 { _ptr = new CDBounds(((const Vec3d&) min0), ((const Vec3d&) max0)); }
	//catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_CDBounds(void * v) {
        if (v == NULL) return;
         { delete (CDBounds*) v; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDBounds_addr_min(void * _this) {
        void * _ptr = NULL;
         { _ptr = &((CDBounds*)_this)->min; }
        //catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_CDBounds_set_min(void * _this, void * _ptr) {
         {
            if (&(((CDBounds*)_this)->min) != _ptr) {
                ((CDBounds*)_this)->min = *((Vec3f*)_ptr);
            }
        }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDBounds_addr_max(void * _this) {
        void * _ptr = NULL;
         { _ptr = &((CDBounds*)_this)->max; }
        //catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_CDBounds_set_max(void * _this, void * _ptr) {
         {
            if (&(((CDBounds*)_this)->max) != _ptr) {
                ((CDBounds*)_this)->max = *((Vec3f*)_ptr);
            }
        }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_CDBounds_set(void * _this, void * min0, void * max0) {
	 { ((CDBounds*) _this)->set((const Vec3d&) *((Vec3d*) min0), (const Vec3d&) *((Vec3d*) max0)); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_CDBounds_clamp(void * _this, void * pos) {
	 { ((CDBounds*) _this)->clamp((Vec3f&) *((Vec3f*) pos)); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_CDBounds_isEmpty(void * _this) {
	bool _val = (bool) NULL;
	 { _val = ((CDBounds*) _this)->isEmpty(); }
	//catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_CDBounds_minimum(void * _this, void * self, void * other) {
	 { ((CDBounds*) _this)->minimum((Vec3f&) *((Vec3f*) self), (Vec3f&) *((Vec3f*) other)); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_CDBounds_maximum(void * _this, void * self, void * other) {
	 { ((CDBounds*) _this)->maximum((Vec3f&) *((Vec3f*) self), (Vec3f&) *((Vec3f*) other)); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_new_CDSpatialHashTableDesc() {
	void * _ptr = (void *) NULL;
	 { _ptr = new CDSpatialHashTableDesc(); }
	//catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_CDSpatialHashTableDesc(void * v) {
        if (v == NULL) return;
         { delete (CDSpatialHashTableDesc*) v; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_new_CDShapeIf() {
	void * _ptr = (void *) NULL;
	 { _ptr = new CDShapeIf(); }
	//catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_CDShapeIf(void * v) {
        if (v == NULL) return;
         { delete (CDShapeIf*) v; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDShapeIf_ToString(void * _this) {
        void* result = nullptr;
         {
            std::ostringstream oss;
            std::string str = "";
            if (dynamic_cast<ObjectIf*>((CDShapeIf*)_this)) {
                (*((CDShapeIf*)_this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = ::calloc(lenW + 1, sizeof(wchar_t));
                ::mbstowcs((wchar_t*)result, cstr, lenW);
            }
        }
        //catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_CDShapeIf_FreeString(std::wstring* ptr) {
         { delete(ptr); }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDShapeIf_GetIfInfo(void * _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	 { _ptr = (IfInfo*) ((CDShapeIf*) _this)->GetIfInfo(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_CDShapeIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	 { _ptr = (IfInfo*) CDShapeIf::GetIfInfoStatic(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_CDShapeIf_SetStaticFriction(void * _this, float mu0) {
	 { ((CDShapeIf*) _this)->SetStaticFriction(mu0); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_CDShapeIf_GetStaticFriction(void * _this) {
	float _val = (float) NULL;
	 { _val = ((CDShapeIf*) _this)->GetStaticFriction(); }
	//catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_CDShapeIf_SetDynamicFriction(void * _this, float mu) {
	 { ((CDShapeIf*) _this)->SetDynamicFriction(mu); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_CDShapeIf_GetDynamicFriction(void * _this) {
	float _val = (float) NULL;
	 { _val = ((CDShapeIf*) _this)->GetDynamicFriction(); }
	//catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_CDShapeIf_SetElasticity(void * _this, float e) {
	 { ((CDShapeIf*) _this)->SetElasticity(e); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_CDShapeIf_GetElasticity(void * _this) {
	float _val = (float) NULL;
	 { _val = ((CDShapeIf*) _this)->GetElasticity(); }
	//catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_CDShapeIf_SetDensity(void * _this, float d) {
	 { ((CDShapeIf*) _this)->SetDensity(d); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_CDShapeIf_GetDensity(void * _this) {
	float _val = (float) NULL;
	 { _val = ((CDShapeIf*) _this)->GetDensity(); }
	//catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_CDShapeIf_SetContactSpring(void * _this, float K) {
	 { ((CDShapeIf*) _this)->SetContactSpring(K); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_CDShapeIf_GetContactSpring(void * _this) {
	float _val = (float) NULL;
	 { _val = ((CDShapeIf*) _this)->GetContactSpring(); }
	//catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_CDShapeIf_SetContactDamper(void * _this, float D) {
	 { ((CDShapeIf*) _this)->SetContactDamper(D); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_CDShapeIf_GetContactDamper(void * _this) {
	float _val = (float) NULL;
	 { _val = ((CDShapeIf*) _this)->GetContactDamper(); }
	//catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_CDShapeIf_SetReflexSpring(void * _this, float K) {
	 { ((CDShapeIf*) _this)->SetReflexSpring(K); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_CDShapeIf_GetReflexSpring(void * _this) {
	float _val = (float) NULL;
	 { _val = ((CDShapeIf*) _this)->GetReflexSpring(); }
	//catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_CDShapeIf_SetReflexDamper(void * _this, float D) {
	 { ((CDShapeIf*) _this)->SetReflexDamper(D); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_CDShapeIf_GetReflexDamper(void * _this) {
	float _val = (float) NULL;
	 { _val = ((CDShapeIf*) _this)->GetReflexDamper(); }
	//catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_CDShapeIf_SetFrictionSpring(void * _this, float K) {
	 { ((CDShapeIf*) _this)->SetFrictionSpring(K); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_CDShapeIf_GetFrictionSpring(void * _this) {
	float _val = (float) NULL;
	 { _val = ((CDShapeIf*) _this)->GetFrictionSpring(); }
	//catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_CDShapeIf_SetFrictionDamper(void * _this, float D) {
	 { ((CDShapeIf*) _this)->SetFrictionDamper(D); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_CDShapeIf_GetFrictionDamper(void * _this) {
	float _val = (float) NULL;
	 { _val = ((CDShapeIf*) _this)->GetFrictionDamper(); }
	//catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_CDShapeIf_SetVibration(void * _this, float vibA, float vibB, float vibW) {
	 { ((CDShapeIf*) _this)->SetVibration(vibA, vibB, vibW); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_CDShapeIf_SetVibA(void * _this, float vibA) {
	 { ((CDShapeIf*) _this)->SetVibA(vibA); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_CDShapeIf_GetVibA(void * _this) {
	float _val = (float) NULL;
	 { _val = ((CDShapeIf*) _this)->GetVibA(); }
	//catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_CDShapeIf_SetVibB(void * _this, float vibB) {
	 { ((CDShapeIf*) _this)->SetVibB(vibB); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_CDShapeIf_GetVibB(void * _this) {
	float _val = (float) NULL;
	 { _val = ((CDShapeIf*) _this)->GetVibB(); }
	//catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_CDShapeIf_SetVibW(void * _this, float vibW) {
	 { ((CDShapeIf*) _this)->SetVibW(vibW); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_CDShapeIf_GetVibW(void * _this) {
	float _val = (float) NULL;
	 { _val = ((CDShapeIf*) _this)->GetVibW(); }
	//catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_CDShapeIf_SetVibT(void * _this, float vibT) {
	 { ((CDShapeIf*) _this)->SetVibT(vibT); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_CDShapeIf_GetVibT(void * _this) {
	float _val = (float) NULL;
	 { _val = ((CDShapeIf*) _this)->GetVibT(); }
	//catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_CDShapeIf_SetVibContact(void * _this, char vibContact) {
	bool arg01_ = (vibContact == 0) ? false : true;
	 { ((CDShapeIf*) _this)->SetVibContact((bool) arg01_); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_CDShapeIf_GetVibContact(void * _this) {
	bool _val = (bool) NULL;
	 { _val = ((CDShapeIf*) _this)->GetVibContact(); }
	//catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void *  Spr_CDShapeIf_GetMaterial(void * _this) {
	PHMaterial* _ptr = (PHMaterial*) NULL;
	 { _ptr = new PHMaterial(); (*_ptr) = ((CDShapeIf*) _this)->GetMaterial(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_CDShapeIf_SetMaterial(void * _this, void * mat) {
	 { ((CDShapeIf*) _this)->SetMaterial((const PHMaterial&) *((PHMaterial*) mat)); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_CDShapeIf_CalcVolume(void * _this) {
	float _val = (float) NULL;
	 { _val = ((CDShapeIf*) _this)->CalcVolume(); }
	//catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void *  Spr_CDShapeIf_CalcCenterOfMass(void * _this) {
	Vec3f* _ptr = (Vec3f*) NULL;
	 { _ptr = new Vec3f(); (*_ptr) = ((CDShapeIf*) _this)->CalcCenterOfMass(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_CDShapeIf_CalcMomentOfInertia(void * _this) {
	Matrix3f* _ptr = (Matrix3f*) NULL;
	 { _ptr = new Matrix3f(); (*_ptr) = ((CDShapeIf*) _this)->CalcMomentOfInertia(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) char  Spr_CDShapeIf_IsInside(void * _this, void * p) {
	bool _val = (bool) NULL;
	 { _val = ((CDShapeIf*) _this)->IsInside((const Vec3f&) *((Vec3f*) p)); }
	//catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
    __attribute__((visibility("default"))) void  Spr_CDShapeIf_CalcBBox(void * _this, void * bbmin, void * bbmax, void * pose) {
	 { ((CDShapeIf*) _this)->CalcBBox((Vec3f&) *((Vec3f*) bbmin), (Vec3f&) *((Vec3f*) bbmax), (const Posed&) *((Posed*) pose)); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_CDShapeIf_CalcBBox_1(void * _this, void * bbmin, void * bbmax) {
	 { ((CDShapeIf*) _this)->CalcBBox((Vec3f&) *((Vec3f*) bbmin), (Vec3f&) *((Vec3f*) bbmax)); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_new_CDConvexIf() {
	void * _ptr = (void *) NULL;
	 { _ptr = new CDConvexIf(); }
	//catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_CDConvexIf(void * v) {
        if (v == NULL) return;
         { delete (CDConvexIf*) v; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDConvexIf_ToString(void * _this) {
        void * result = nullptr;
         {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CDConvexIf*) _this)) {
                (*((CDConvexIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = ::calloc(lenW + 1, sizeof(wchar_t));
                ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        //catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_CDConvexIf_FreeString(std::wstring* ptr) {
         {delete(ptr); }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDConvexIf_GetIfInfo(void * _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	 { _ptr = (IfInfo*) ((CDConvexIf*) _this)->GetIfInfo(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_CDConvexIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	 { _ptr = (IfInfo*) CDConvexIf::GetIfInfoStatic(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) double  Spr_CDConvexIf_CurvatureRadius(void * _this, void * p) {
	Vec3d arg01_ = *((Vec3d*) p);
	double _val = (double) NULL;
	 { _val = ((CDConvexIf*) _this)->CurvatureRadius((Vec3d) arg01_); }
	//catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void *  Spr_CDConvexIf_Normal(void * _this, void * p) {
	Vec3d arg01_ = *((Vec3d*) p);
	Vec3d* _ptr = (Vec3d*) NULL;
	 { _ptr = new Vec3d(); (*_ptr) = ((CDConvexIf*) _this)->Normal((Vec3d) arg01_); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_new_CDFaceIf() {
	void * _ptr = (void *) NULL;
	 { _ptr = new CDFaceIf(); }
	//catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_CDFaceIf(void * v) {
        if (v == NULL) return;
         { delete (CDFaceIf*) v; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDFaceIf_ToString(void * _this) {
        void * result = nullptr;
         {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CDFaceIf*) _this)) {
                (*((CDFaceIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = ::calloc(lenW + 1, sizeof(wchar_t));
                ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        //catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_CDFaceIf_FreeString(std::wstring* ptr) {
         { delete(ptr); }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDFaceIf_GetIfInfo(void * _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	 { _ptr = (IfInfo*) ((CDFaceIf*) _this)->GetIfInfo(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_CDFaceIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	 { _ptr = (IfInfo*) CDFaceIf::GetIfInfoStatic(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_CDFaceIf_NIndex(void * _this) {
	int _val = (int) NULL;
	 { _val = ((CDFaceIf*) _this)->NIndex(); }
	//catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void *  Spr_CDFaceIf_GetIndices(void * _this) {
	int* _ptr = (int*) NULL;
	 { _ptr = ((CDFaceIf*) _this)->GetIndices(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_new_CDQuadFaceIf() {
	void * _ptr = (void *) NULL;
	 { _ptr = new CDQuadFaceIf(); }
	//catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_CDQuadFaceIf(void * v) {
        if (v == NULL) return;
         { delete (CDQuadFaceIf*) v; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDQuadFaceIf_ToString(void * _this) {
        void * result = nullptr;
         {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CDQuadFaceIf*) _this)) {
                (*((CDQuadFaceIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = ::calloc(lenW + 1, sizeof(wchar_t));
                ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        //catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_CDQuadFaceIf_FreeString(void * ptr) {
         {delete(ptr); }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDQuadFaceIf_GetIfInfo(void * _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	 { _ptr = (IfInfo*) ((CDQuadFaceIf*) _this)->GetIfInfo(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_CDQuadFaceIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	 { _ptr = (IfInfo*) CDQuadFaceIf::GetIfInfoStatic(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_CDQuadFaceIf_NIndex(void * _this) {
	int _val = (int) NULL;
	 { _val = ((CDQuadFaceIf*) _this)->NIndex(); }
	//catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void *  Spr_CDQuadFaceIf_GetIndices(void * _this) {
	int* _ptr = (int*) NULL;
	 { _ptr = ((CDQuadFaceIf*) _this)->GetIndices(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_new_CDConvexMeshIf() {
	void * _ptr = (void *) NULL;
	 { _ptr = new CDConvexMeshIf(); }
	//catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_CDConvexMeshIf(void * v) {
        if (v == NULL) return;
         { delete (CDConvexMeshIf*) v; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDConvexMeshIf_ToString(void * _this) {
        void * result = nullptr;
         {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CDConvexMeshIf*) _this)) {
                (*((CDConvexMeshIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = ::calloc(lenW + 1, sizeof(wchar_t));
                ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        //catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_CDConvexMeshIf_FreeString(void * ptr) {
         { delete(ptr); }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDConvexMeshIf_GetIfInfo(void * _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	 { _ptr = (IfInfo*) ((CDConvexMeshIf*) _this)->GetIfInfo(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_CDConvexMeshIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	 { _ptr = (IfInfo*) CDConvexMeshIf::GetIfInfoStatic(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_CDConvexMeshIf_GetFace(void * _this, int i) {
	CDFaceIf* _ptr = (CDFaceIf*) NULL;
	 { _ptr = (CDFaceIf*) ((CDConvexMeshIf*) _this)->GetFace(i); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_CDConvexMeshIf_NFace(void * _this) {
	int _val = (int) NULL;
	 { _val = ((CDConvexMeshIf*) _this)->NFace(); }
	//catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void *  Spr_CDConvexMeshIf_GetVertices(void * _this) {
        Vec3f* _ptr = (Vec3f*) NULL;
         { Vec3f* _ary = (((CDConvexMeshIf*) _this)->GetVertices());
              int _size = 0;
              _ptr = new Vec3f[_size];
              for (int n = 0; n < (int) _size; n++) {
                  *(_ptr+n) = _ary[n];
              }
        }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) int  Spr_CDConvexMeshIf_NVertex(void * _this) {
	int _val = (int) NULL;
	 { _val = ((CDConvexMeshIf*) _this)->NVertex(); }
	//catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void *  Spr_new_CDConvexMeshInterpolateIf() {
	void * _ptr = (void *) NULL;
	 { _ptr = new CDConvexMeshInterpolateIf(); }
	//catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_CDConvexMeshInterpolateIf(void * v) {
        if (v == NULL) return;
         { delete (CDConvexMeshInterpolateIf*) v; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDConvexMeshInterpolateIf_ToString(void * _this) {
        void * result = nullptr;
         {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CDConvexMeshInterpolateIf*) _this)) {
                (*((CDConvexMeshInterpolateIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = ::calloc(lenW + 1, sizeof(wchar_t));
                ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        //catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_CDConvexMeshInterpolateIf_FreeString(void * ptr) {
         { delete(ptr); }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDConvexMeshInterpolateIf_GetIfInfo(void * _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	 { _ptr = (IfInfo*) ((CDConvexMeshInterpolateIf*) _this)->GetIfInfo(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_CDConvexMeshInterpolateIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	 { _ptr = (IfInfo*) CDConvexMeshInterpolateIf::GetIfInfoStatic(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_new_CDSphereIf() {
	void * _ptr = (void *) NULL;
	 { _ptr = new CDSphereIf(); }
	//catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_CDSphereIf(void * v) {
        if (v == NULL) return;
         { delete (CDSphereIf*) v; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDSphereIf_ToString(void * _this) {
        void * result = nullptr;
         {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CDSphereIf*) _this)) {
                (*((CDSphereIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = ::calloc(lenW + 1, sizeof(wchar_t));
                ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        //catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_CDSphereIf_FreeString(void * ptr) {
         { delete(ptr); }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDSphereIf_GetIfInfo(void * _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	 { _ptr = (IfInfo*) ((CDSphereIf*) _this)->GetIfInfo(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_CDSphereIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	 { _ptr = (IfInfo*) CDSphereIf::GetIfInfoStatic(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) float  Spr_CDSphereIf_GetRadius(void * _this) {
	float _val = (float) NULL;
	 { _val = ((CDSphereIf*) _this)->GetRadius(); }
	//catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_CDSphereIf_SetRadius(void * _this, float r) {
	 { ((CDSphereIf*) _this)->SetRadius(r); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_new_CDEllipsoidIf() {
	void * _ptr = (void *) NULL;
	 { _ptr = new CDEllipsoidIf(); }
	//catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_CDEllipsoidIf(void * v) {
        if (v == NULL) return;
         { delete (CDEllipsoidIf*) v; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDEllipsoidIf_ToString(void * _this) {
        std::wstring* result = NULL;
         {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CDEllipsoidIf*) _this)) {
                (*((CDEllipsoidIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = new std::wstring(lenW, L'\0');
                std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;
                std::wstring myString = converter.from_bytes(cstr);
            }
        }
        //catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_CDEllipsoidIf_FreeString(void * ptr) {
         { delete(ptr); }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDEllipsoidIf_GetIfInfo(void * _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	 { _ptr = (IfInfo*) ((CDEllipsoidIf*) _this)->GetIfInfo(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_CDEllipsoidIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	 { _ptr = (IfInfo*) CDEllipsoidIf::GetIfInfoStatic(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_CDEllipsoidIf_GetRadius(void * _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	 { _ptr = new Vec3d(); (*_ptr) = ((CDEllipsoidIf*) _this)->GetRadius(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_CDEllipsoidIf_SetRadius(void * _this, void * r) {
	Vec3d arg01_ = *((Vec3d*) r);
	 { ((CDEllipsoidIf*) _this)->SetRadius((Vec3d) arg01_); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_new_CDCapsuleIf() {
	void * _ptr = (void *) NULL;
	 { _ptr = new CDCapsuleIf(); }
	//catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_CDCapsuleIf(void * v) {
        if (v == NULL) return;
         { delete (CDCapsuleIf*) v; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDCapsuleIf_ToString(void * _this) {
        void * result = nullptr;
         {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CDCapsuleIf*) _this)) {
                (*((CDCapsuleIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = ::calloc(lenW + 1, sizeof(wchar_t));
                ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        //catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_CDCapsuleIf_FreeString(void * ptr) {
         { delete(ptr); }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDCapsuleIf_GetIfInfo(void * _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	 { _ptr = (IfInfo*) ((CDCapsuleIf*) _this)->GetIfInfo(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_CDCapsuleIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	 { _ptr = (IfInfo*) CDCapsuleIf::GetIfInfoStatic(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) float  Spr_CDCapsuleIf_GetRadius(void * _this) {
	float _val = (float) NULL;
	 { _val = ((CDCapsuleIf*) _this)->GetRadius(); }
	//catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_CDCapsuleIf_SetRadius(void * _this, float r) {
	 { ((CDCapsuleIf*) _this)->SetRadius(r); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_CDCapsuleIf_GetLength(void * _this) {
	float _val = (float) NULL;
	 { _val = ((CDCapsuleIf*) _this)->GetLength(); }
	//catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_CDCapsuleIf_SetLength(void * _this, float l) {
	 { ((CDCapsuleIf*) _this)->SetLength(l); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_new_CDRoundConeIf() {
	void * _ptr = (void *) NULL;
	 { _ptr = new CDRoundConeIf(); }
	//catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_CDRoundConeIf(void * v) {
        if (v == NULL) return;
         { delete (CDRoundConeIf*) v; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDRoundConeIf_ToString(void * _this) {
        void * result = nullptr;
         {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CDRoundConeIf*) _this)) {
                (*((CDRoundConeIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = ::calloc(lenW + 1, sizeof(wchar_t));
                ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        //catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_CDRoundConeIf_FreeString(void * ptr) {
         { delete(ptr); }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDRoundConeIf_GetIfInfo(void * _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	 { _ptr = (IfInfo*) ((CDRoundConeIf*) _this)->GetIfInfo(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_CDRoundConeIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	 { _ptr = (IfInfo*) CDRoundConeIf::GetIfInfoStatic(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_CDRoundConeIf_GetRadius(void * _this) {
	Vec2f* _ptr = (Vec2f*) NULL;
	 { _ptr = new Vec2f(); (*_ptr) = ((CDRoundConeIf*) _this)->GetRadius(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) float  Spr_CDRoundConeIf_GetLength(void * _this) {
	float _val = (float) NULL;
	 { _val = ((CDRoundConeIf*) _this)->GetLength(); }
	//catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_CDRoundConeIf_SetRadius(void * _this, void * r) {
	Vec2f arg01_ = *((Vec2f*) r);
	 { ((CDRoundConeIf*) _this)->SetRadius((Vec2f) arg01_); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_CDRoundConeIf_SetLength(void * _this, float l) {
	 { ((CDRoundConeIf*) _this)->SetLength(l); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_CDRoundConeIf_SetWidth(void * _this, void * r) {
	Vec2f arg01_ = *((Vec2f*) r);
	 { ((CDRoundConeIf*) _this)->SetWidth((Vec2f) arg01_); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_new_CDBoxIf() {
	void * _ptr = (void *) NULL;
	 { _ptr = new CDBoxIf(); }
	//catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_CDBoxIf(void * v) {
        if (v == NULL) return;
         { delete (CDBoxIf*) v; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDBoxIf_ToString(void * _this) {
        void * result = nullptr;
         {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CDBoxIf*) _this)) {
                (*((CDBoxIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = ::calloc(lenW + 1, sizeof(wchar_t));
                ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        //catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_CDBoxIf_FreeString(void * ptr) {
         { delete(ptr); }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDBoxIf_GetIfInfo(void * _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	 { _ptr = (IfInfo*) ((CDBoxIf*) _this)->GetIfInfo(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_CDBoxIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	 { _ptr = (IfInfo*) CDBoxIf::GetIfInfoStatic(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_CDBoxIf_GetBoxSize(void * _this) {
	Vec3f* _ptr = (Vec3f*) NULL;
	 { _ptr = new Vec3f(); (*_ptr) = ((CDBoxIf*) _this)->GetBoxSize(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_CDBoxIf_GetVertices(void * _this) {
        Vec3f* _ptr = (Vec3f*) NULL;
         { Vec3f* _ary = (((CDBoxIf*) _this)->GetVertices());
              int _size = 0;
              _ptr = new Vec3f[_size];
              for (int n = 0; n < (int) _size; n++) {
                  *(_ptr+n) = _ary[n];
              }
        }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_CDBoxIf_GetFace(void * _this, int i) {
	CDFaceIf* _ptr = (CDFaceIf*) NULL;
	 { _ptr = (CDFaceIf*) ((CDBoxIf*) _this)->GetFace(i); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_CDBoxIf_SetBoxSize(void * _this, void * boxsize) {
	Vec3f arg01_ = *((Vec3f*) boxsize);
	Vec3f* _ptr = (Vec3f*) NULL;
	 { _ptr = new Vec3f(); (*_ptr) = ((CDBoxIf*) _this)->SetBoxSize((Vec3f) arg01_); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_new_CDShapePairIf() {
	void * _ptr = (void *) NULL;
	 { _ptr = new CDShapePairIf(); }
	//catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_CDShapePairIf(void * v) {
        if (v == NULL) return;
         { delete (CDShapePairIf*) v; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDShapePairIf_ToString(void * _this) {
        void * result = nullptr;
         {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CDShapePairIf*) _this)) {
                (*((CDShapePairIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = ::calloc(lenW + 1, sizeof(wchar_t));
                ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        //catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_CDShapePairIf_FreeString(void * ptr) {
         { delete(ptr); }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDShapePairIf_GetIfInfo(void * _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	 { _ptr = (IfInfo*) ((CDShapePairIf*) _this)->GetIfInfo(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_CDShapePairIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	 { _ptr = (IfInfo*) CDShapePairIf::GetIfInfoStatic(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_CDShapePairIf_GetShape(void * _this, int i) {
	CDShapeIf* _ptr = (CDShapeIf*) NULL;
	 { _ptr = (CDShapeIf*) ((CDShapePairIf*) _this)->GetShape(i); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_CDShapePairIf_GetShapePose(void * _this, int i) {
	Posed* _ptr = (Posed*) NULL;
	 { _ptr = new Posed(); (*_ptr) = ((CDShapePairIf*) _this)->GetShapePose(i); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_CDShapePairIf_GetClosestPointOnWorld(void * _this, int i) {
	Vec3d* _ptr = (Vec3d*) NULL;
	 { _ptr = new Vec3d(); (*_ptr) = ((CDShapePairIf*) _this)->GetClosestPointOnWorld(i); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_CDShapePairIf_GetNormal(void * _this) {
	Vec3d* _ptr = (Vec3d*) NULL;
	 { _ptr = new Vec3d(); (*_ptr) = ((CDShapePairIf*) _this)->GetNormal(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_new_CDSpatialHashTableIf() {
	void * _ptr = (void *) NULL;
	 { _ptr = new CDSpatialHashTableIf(); }
	//catch (const std::exception& e) {  }
	return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_delete_CDSpatialHashTableIf(void * v) {
        if (v == NULL) return;
         { delete (CDSpatialHashTableIf*) v; }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDSpatialHashTableIf_ToString(void * _this) {
        void * result = nullptr;
         {
            ostringstream oss;
            string str = "";
            if (dynamic_cast<ObjectIf*>((CDSpatialHashTableIf*) _this)) {
                (*((CDSpatialHashTableIf*) _this)).GetObjectIf()->Print(oss);
                str = oss.str();
            }
            const char* cstr = str.c_str();
            int lenA = str.size();
            int lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW >= 0) {
                result = ::calloc(lenW + 1, sizeof(wchar_t));
                ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
        }
        //catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_CDSpatialHashTableIf_FreeString(void * ptr) {
         { delete(ptr); }
        //catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void *  Spr_CDSpatialHashTableIf_GetIfInfo(void * _this) {
	IfInfo* _ptr = (IfInfo*) NULL;
	 { _ptr = (IfInfo*) ((CDSpatialHashTableIf*) _this)->GetIfInfo(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void *  Spr_CDSpatialHashTableIf_GetIfInfoStatic() {
	IfInfo* _ptr = (IfInfo*) NULL;
	 { _ptr = (IfInfo*) CDSpatialHashTableIf::GetIfInfoStatic(); }
	//catch (const std::exception& e) {  }
	return (void *) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_CDSpatialHashTableIf_Init(void * _this, float cellSize, void * bounds) {
	CDBounds arg02_ = *((CDBounds*) bounds);
	 { ((CDSpatialHashTableIf*) _this)->Init(cellSize, (CDBounds) arg02_); }
	//catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) char  Spr_CDSpatialHashTableIf_ReducedSelectPointsToAdd(void * _this, void * pCtr, float radius, int objInd, int pInd, int timestamp) {
	bool _val = (bool) NULL;
	 { _val = ((CDSpatialHashTableIf*) _this)->ReducedSelectPointsToAdd((Vec3f&) *((Vec3f*) pCtr), radius, objInd, pInd, timestamp); }
	//catch (const std::exception& e) {  }
	char _ret = _val ? 1 : 0;
	return _ret;
    }
}
