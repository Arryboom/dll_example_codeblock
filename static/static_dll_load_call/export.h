#ifndef __MYDLL_H__
#define __MYDLL_H__

#include <windows.h>


#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif

//=============================here add your export func
int DLL_EXPORT get_id(void);
int DLL_EXPORT add(int,int);
//=======================================================

#endif // __MAIN_H__
