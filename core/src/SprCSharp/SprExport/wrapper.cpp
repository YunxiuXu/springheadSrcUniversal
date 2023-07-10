// wrapper.cpp
//
#include <Springhead.h>
#include <vector>

#include <stdio.h>


using namespace std;
using namespace Spr;

extern "C" {
    // wrapper base class
    // vectorwrapper
    // arraywrapper

    // std::vector
    //  int
    __attribute__((visibility("default"))) void*  Spr_vector_new_int() {
	void* _ptr = (void*) NULL;
	try { _ptr = new vector<int>; }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_vector_delete_int(void* ptr) {
	if (ptr == NULL) return;
        vector<int>* vec = (vector<int>*) ptr;
        try { vector<int>().swap(*vec); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_vector_get_int(void* ptr, int index) {
        vector<int>* vecptr = (vector<int>*) ptr;
	int _val = 0;
        try { _val = (*vecptr)[index]; }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_vector_set_int(void* ptr, int index, int value) {
        vector<int>* vecptr = (vector<int>*) ptr;
        try { (*vecptr)[index] = value; }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_vector_size_int(void* ptr) {
	if (ptr == NULL) return 0;
        vector<int>* vecptr = (vector<int>*) ptr;
	int _val = 0;
        try { _val = (int) (*vecptr).size(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_vector_push_back_int(void* ptr, int value) {
        vector<int>* vecptr = (vector<int>*) ptr;
        try { (*vecptr).push_back(value); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_vector_clear_int(void* ptr) {
	if (ptr == NULL) return;
        vector<int>* vecptr = (vector<int>*) ptr;
        try { (*vecptr).clear(); }
	catch (const std::exception& e) {  }
    }

    //  unsigned int
    __attribute__((visibility("default"))) void*  Spr_vector_new_unsigned_int() {
	void* _ptr = (void*) NULL;
        try { _ptr = new vector<unsigned int>; }
	catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_vector_delete_unsigned_int(void* ptr) {
	if (ptr == NULL) return;
        vector<unsigned int>* vec = (vector<unsigned int>*) ptr;
        try { vector<unsigned int>().swap(*vec); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) unsigned int  Spr_vector_get_unsigned_int(void* ptr, int index) {
        vector<unsigned int>* vecptr = (vector<unsigned int>*) ptr;
	unsigned int _val = 0;
        try { _val = (*vecptr)[index]; }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_vector_set_unsigned_int(void* ptr, int index, unsigned int value) {
        vector<unsigned int>* vecptr = (vector<unsigned int>*) ptr;
        try { (*vecptr)[index] = value; }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_vector_size_unsigned_int(void* ptr) {
	if (ptr == NULL) return 0;
        vector<unsigned int>* vecptr = (vector<unsigned int>*) ptr;
	int _val = 0;
        try { _val = (int) (*vecptr).size(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_vector_push_back_unsigned_int(void* ptr, unsigned int value) {
        vector<unsigned int>* vecptr = (vector<unsigned int>*) ptr;
        try { (*vecptr).push_back(value); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_vector_clear_unsigned_int(void* ptr) {
	if (ptr == NULL) return;
        vector<unsigned int>* vecptr = (vector<unsigned int>*) ptr;
        try { (*vecptr).clear(); }
	catch (const std::exception& e) {  }
    }

    //  size_t
    __attribute__((visibility("default"))) void*  Spr_vector_new_size_t() {
	void* _ptr = (void*) NULL;
        try { _ptr = new vector<size_t>; }
	catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_vector_delete_size_t(void* ptr) {
	if (ptr == NULL) return;
        vector<size_t>* vec = (vector<size_t>*) ptr;
        try { vector<size_t>().swap(*vec); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) size_t  Spr_vector_get_size_t(void* ptr, int index) {
        vector<size_t>* vecptr = (vector<size_t>*) ptr;
	size_t _val = 0;
        try { _val = (*vecptr)[index]; }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_vector_set_size_t(void* ptr, int index, size_t value) {
        vector<size_t>* vecptr = (vector<size_t>*) ptr;
        try { (*vecptr)[index] = value; }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_vector_size_size_t(void* ptr) {
	if (ptr == NULL) return 0;
        vector<size_t>* vecptr = (vector<size_t>*) ptr;
	int _val = 0;
        try { _val = (int) (*vecptr).size(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_vector_push_back_size_t(void* ptr, size_t value) {
        vector<size_t>* vecptr = (vector<size_t>*) ptr;
        try { (*vecptr).push_back(value); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_vector_clear_size_t(void* ptr) {
	if (ptr == NULL) return;
        vector<size_t>* vecptr = (vector<size_t>*) ptr;
        try { (*vecptr).clear(); }
	catch (const std::exception& e) {  }
    }

    //  float
    __attribute__((visibility("default"))) void*  Spr_vector_new_float() {
	void* _ptr = (void*) NULL;
	try { _ptr = new vector<float>; }
	catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_vector_delete_float(void* ptr) {
	if (ptr == NULL) return;
        vector<float>* vecptr = (vector<float>*) ptr;
	try { vector<float>().swap(*vecptr); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) float  Spr_vector_get_float(void* ptr, int index) {
        vector<float>* vecptr = (vector<float>*) ptr;
	float _val = 0;
	try { _val = (*vecptr)[index]; }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_vector_set_float(void* ptr, int index, float value) {
        vector<float>* vecptr = (vector<float>*) ptr;
	try { (*vecptr)[index] = value; }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_vector_size_float(void* ptr) {
	if (ptr == NULL) return 0;
        vector<float>* vecptr = (vector<float>*) ptr;
	int _val = 0;
	try { _val = (int) (*vecptr).size(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_vector_push_back_float(void* ptr, float value) {
        vector<float>* vecptr = (vector<float>*) ptr;
	try { (*vecptr).push_back(value); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_vector_clear_float(void* ptr) {
	if (ptr == NULL) return;
        vector<float>* vecptr = (vector<float>*) ptr;
	try { (*vecptr).clear(); }
	catch (const std::exception& e) {  }
    }

    //  double
    __attribute__((visibility("default"))) void*  Spr_vector_new_double() {
	void* _ptr = (void*) NULL;
        try { _ptr = new vector<double>; }
	catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_vector_delete_double(void* ptr) {
	if (ptr == NULL) return;
        vector<double>* vecptr = (vector<double>*) ptr;
        try { vector<double>().swap(*vecptr); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) double  Spr_vector_get_double(void* ptr, int index) {
        vector<double>* vecptr = (vector<double>*) ptr;
	double _val = 0;
        try { _val = (*vecptr)[index]; }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_vector_set_double(void* ptr, int index, double value) {
        vector<double>* vecptr = (vector<double>*) ptr;
        try { (*vecptr)[index] = value; }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_vector_size_double(void* ptr) {
	if (ptr == NULL) return 0;
        vector<double>* vecptr = (vector<double>*) ptr;
	int _val = 0;
        try { _val = (int) (*vecptr).size(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_vector_push_back_double(void* ptr, double value) {
        vector<double>* vecptr = (vector<double>*) ptr;
        try { (*vecptr).push_back(value); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_vector_clear_double(void* ptr) {
	if (ptr == NULL) return;
        vector<double>* vecptr = (vector<double>*) ptr;
        try { (*vecptr).clear(); }
	catch (const std::exception& e) {  }
    }

    //  string
    __attribute__((visibility("default"))) void*  Spr_vector_new_string() {
	void* _ptr = (void*) NULL;
        try { _ptr = new vector<string>; }
	catch (const std::exception& e) {  }
        return _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_vector_delete_string(void* ptr) {
	if (ptr == NULL) return;
        vector<string>* vecptr = (vector<string>*) ptr;
        try { vector<string>().swap(*vecptr); }
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void*  Spr_vector_get_string(void* ptr, int index) {
        void * result = nullptr;
        vector<string>* vecptr = (vector<string>*) ptr;
	try {
            const char* cstr = (*vecptr)[index].c_str();
            int lenW = ::mbstowcs(NULL, cstr, 0);
            if (lenW > 0) {
                result = ::calloc(lenW + 1, sizeof(wchar_t));;
                ::mbstowcs((wchar_t*) result, cstr, lenW);
            }
	}
	catch (const std::exception& e) {  }
        return result;
    }
    __attribute__((visibility("default"))) void  Spr_vector_set_string(void* ptr, int index, void* value) {
	try {
            int lenMB = static_cast<int>(std::wcstombs(nullptr, reinterpret_cast<const wchar_t*>(value), 0));
            if (lenMB > 0) {
                std::string str1(lenMB, 0); char* addr = &str1[0];
                static_cast<int>(std::wcstombs(nullptr, reinterpret_cast<const wchar_t*>(value), 0));
                vector<string>* vecptr = (vector<string>*) ptr;
                (*vecptr)[index] = string(addr);
            }
	}
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_vector_size_string(void* ptr) {
	if (ptr == NULL) return 0;
        vector<string>* vecptr = (vector<string>*) ptr;
	int _val = 0;
        try { _val = (int) (*vecptr).size(); }
	catch (const std::exception& e) {  }
	return _val;
    }
    __attribute__((visibility("default"))) void  Spr_vector_push_back_string(void* ptr, void* value) {
	try {
            int lenMB = static_cast<int>(std::wcstombs(nullptr, reinterpret_cast<const wchar_t*>(value), 0));
            if (lenMB > 0) {
                std::string str1(lenMB, 0); char* addr = &str1[0];
                static_cast<int>(std::wcstombs(nullptr, reinterpret_cast<const wchar_t*>(value), 0));
                vector<string>* vecptr = (vector<string>*) ptr;
                (*vecptr).push_back(string(addr));
            }
	}
	catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) void  Spr_vector_clear_string(void* ptr) {
	if (ptr == NULL) return;
        vector<string>* vecptr = (vector<string>*) ptr;
        try { (*vecptr).clear(); }
	catch (const std::exception& e) {  }
    }

    // array
    //  int
    __attribute__((visibility("default"))) void*  Spr_array_new_int(unsigned int nelm) {
	void* _ptr = (void*) NULL;
	try { _ptr = new int[nelm]; }
	catch (const std::exception& e) {  }
	return (void*) _ptr;
    }
    __attribute__((visibility("default"))) void  Spr_array_delete_int(void* ptr) {
	int* _ptr = (int*) ptr;
        try { delete[] _ptr; }
        catch (const std::exception& e) {  }
    }
    __attribute__((visibility("default"))) int  Spr_array_get_int(void* ptr, int index) {
        int* aryptr = (int*) ptr;
        return aryptr[index];
    }
    __attribute__((visibility("default"))) void  Spr_array_set_int(void* ptr, int index, int value) {
        int* aryptr = (int*) ptr;
        aryptr[index] = value;
    }

    //  unsigned int
    __attribute__((visibility("default"))) void*  Spr_array_new_unsigned_int(unsigned int nelm) {
        return (void*) new unsigned int[nelm];
    }
    __attribute__((visibility("default"))) void  Spr_array_delete_unsigned_int(void* ptr) {
	if (ptr == NULL) return;
	delete[] ptr;
    }
    __attribute__((visibility("default"))) unsigned int  Spr_array_get_unsigned_int(void* ptr, int index) {
        unsigned int* aryptr = (unsigned int*) ptr;
        return aryptr[index];
    }
    __attribute__((visibility("default"))) void  Spr_array_set_unsigned_int(void* ptr, int index, unsigned int value) {
        unsigned int* aryptr = (unsigned int*) ptr;
        aryptr[index] = value;
    }

    //  size_t
    __attribute__((visibility("default"))) void*  Spr_array_new_size_t(unsigned int nelm) {
        return (void*) new size_t[nelm];
    }
    __attribute__((visibility("default"))) void  Spr_array_delete_size_t(void* ptr) {
	if (ptr == NULL) return;
	delete[] ptr;
    }
    __attribute__((visibility("default"))) size_t  Spr_array_get_size_t(void* ptr, int index) {
        size_t* aryptr = (size_t*) ptr;
        return aryptr[index];
    }
    __attribute__((visibility("default"))) void  Spr_array_set_size_t(void* ptr, int index, size_t value) {
        size_t* aryptr = (size_t*) ptr;
        aryptr[index] = value;
    }

    //  float
    __attribute__((visibility("default"))) void*  Spr_array_new_float(unsigned int nelm) {
        return (void*) new float[nelm];
    }
    __attribute__((visibility("default"))) void  Spr_array_delete_float(void* ptr) {
	if (ptr == NULL) return;
	delete[] ptr;
    }
    __attribute__((visibility("default"))) float  Spr_array_get_float(void* ptr, int index) {
        float* aryptr = (float*) ptr;
        return aryptr[index];
    }
    __attribute__((visibility("default"))) void  Spr_array_set_float(void* ptr, int index, float value) {
        float* aryptr = (float*) ptr;
        aryptr[index] = value;
    }

    //  double
    __attribute__((visibility("default"))) void*  Spr_array_new_double(unsigned int nelm) {
        return (void*) new double[nelm];
    }
    __attribute__((visibility("default"))) void  Spr_array_delete_double(void* ptr) {
	if (ptr == NULL) return;
	delete[] ptr;
    }
    __attribute__((visibility("default"))) double  Spr_array_get_double(void* ptr, int index) {
        double* aryptr = (double*) ptr;
        return aryptr[index];
    }
    __attribute__((visibility("default"))) void  Spr_array_set_double(void* ptr, int index, double value) {
        double* aryptr = (double*) ptr;
        aryptr[index] = value;
    }

    //  string
    __attribute__((visibility("default"))) void*  Spr_array_new_string(unsigned int nelm) {
        return (void*) new std::string[nelm];
    }
    __attribute__((visibility("default"))) void  Spr_array_delete_string(void* ptr, unsigned int nelm) {
	if (ptr == NULL) return;
        std::string* aryptr = (std::string*) ptr;
        std::string().swap(*aryptr);
    }
    __attribute__((visibility("default"))) void*  Spr_array_get_string(void* ptr, int index) {
        void * result = nullptr;
        std::string* aryptr = (std::string*) ptr;
        std::string str = aryptr[index];
        int lenW = lenW = ::mbstowcs(NULL, str.c_str(), 0);
        if (lenW > 0) {
            result = ::calloc(lenW + 1, sizeof(wchar_t));;
            lenW = ::mbstowcs((wchar_t*) result, str.c_str(), lenW);
        }
        return (void*) result;
    }
    __attribute__((visibility("default"))) void  Spr_array_set_string(void* ptr, int index, void* value) {
        int lenMB = static_cast<int>(std::wcstombs(nullptr, reinterpret_cast<const wchar_t*>(value), 0));
        if (lenMB > 0) {
            std::string str1(lenMB, 0); char* addr = &str1[0];
            static_cast<int>(std::wcstombs(nullptr, reinterpret_cast<const wchar_t*>(value), 0));
            int len = strlen(addr);
            char* strptr = new char[len+1];
	    strptr[len] = '\0';
            strncpy(strptr, addr, len);
            strptr[len] = '\0';
            //delete((void*) addr);
            //char** aryptr = (char**) ptr;
            std::string* aryptr = (std::string*) ptr;
            aryptr[index] = std::string(strptr);
            delete((void*) addr);
        }
    }

    //  char*
    __attribute__((visibility("default"))) void*  Spr_array_new_char_p(unsigned int nelm) {
        return (void*) new char**[nelm];
    }
    __attribute__((visibility("default"))) void  Spr_array_delete_char_p(void* ptr, unsigned int nelm) {
	if (ptr == NULL) return;
        char** aryptr = (char**) ptr;
        for (unsigned int i = 0; i < nelm; i++) {
		if (aryptr[i] != NULL) delete aryptr[i];
	}
        delete[] aryptr;
    }
    __attribute__((visibility("default"))) void  Spr_array_init_char_p(void* ptr, unsigned int nelm) {
	if (ptr == NULL) return;
        char** aryptr = (char**) ptr;
        for (unsigned int i = 0; i < nelm; i++) { aryptr[i] = NULL; }
    }
    __attribute__((visibility("default"))) void*  Spr_array_get_char_p(void* ptr, int index) {
        void * result = nullptr;
        char** aryptr = (char**) ptr;
        char* cstr = aryptr[index];
        int lenW = ::mbstowcs(NULL, cstr, 0);
        if (lenW > 0) {
            result = ::calloc(lenW + 1, sizeof(wchar_t));;
            ::mbstowcs((wchar_t*) result, cstr, lenW);
        }
        return (void*) result;
    }
    __attribute__((visibility("default"))) void  Spr_array_set_char_p(void* ptr, int index, void* value) {
        int lenMB = static_cast<int>(std::wcstombs(nullptr, reinterpret_cast<const wchar_t*>(value), 0));
        if (lenMB > 0) {
            std::string str1(lenMB, 0); char* addr = &str1[0];
            static_cast<int>(std::wcstombs(nullptr, reinterpret_cast<const wchar_t*>(value), 0));
            int len = strlen(addr);
            char* strptr = new char[len+1];
            strncpy(strptr, addr, len);
            strptr[len] = '\0';
            delete((void*) addr);
            char** aryptr = (char**) ptr;
            aryptr[index] = strptr;
        }
    }
}

