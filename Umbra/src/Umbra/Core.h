#pragma once

#ifdef UB_BUILD_DLL
	#define UMBRA_API __declspec(dllexport)
#else
	#define UMBRA_API __declspec(dllimport)

#endif

