#include "export.h"

// a sample exported function
int DLL_EXPORT get_id(void){
    return 888;
}
int DLL_EXPORT add(int a,int b){
    return a+b;
}

//======================================you can delete it if you don't need dynamic load to run this dll================================================
DLL_EXPORT BOOL APIENTRY DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
            // attach to process
            // return FALSE to fail DLL load
            OutputDebugString("dll_loaded_123456");//Check this with dbgview tool.
            break;

        case DLL_PROCESS_DETACH:
            // detach from process
            break;

        case DLL_THREAD_ATTACH:
            // attach to thread
            break;

        case DLL_THREAD_DETACH:
            // detach from thread
            break;
    }
    return TRUE; // succesful
}
//======================================
