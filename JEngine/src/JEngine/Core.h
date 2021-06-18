#pragma once

#ifdef JENGINE_PLATFORM_WINDOWS
	#ifdef JENGINE_BUILD_DLL
		#define JENGINE_API __declspec(dllexport)
	#else
		#define JENGINE_API __declspec(dllimport)
	#endif // JE_BUILD_DLL
#else
	#error JEngine only support Windows!
#endif // JE_PLATFORM_WINDOWS

