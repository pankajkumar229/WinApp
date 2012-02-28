// WinRTComponent.cpp

#include "pch.h"
#include "WinRTComponent.h"

using namespace FFMpeg;

extern "C" int mingw_app_type = 0;
extern "C" void __mingw_raise_matherr (int typ, const char *name, double a1, double a2,
      double rslt)
{
}

typedef int HMODULE;
extern "C" HMODULE __mingw_get_msvcrt_handle(void)
{
 return 0;
}

