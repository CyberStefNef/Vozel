#pragma once

#ifdef VZ_PLATFORM_WINDOWS
	#ifdef VZ_BUILD_DLL
		#define VOZEL_API __declspec(dllexport)
	#else
		#define VOZEL_API __declspec(dllimport)
	#endif // HZ_BUILD_DLL
#else
	#error Vozel only supports Windows!
#endif // HZ_PLATFORM_WINDOWS

#ifdef VZ_ENABLE_ASSERTS
	#define VZ_ASSERT(x, ...) { if(!(x)) { VZ_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define VZ_CORE_ASSERT(x, ...) { if(!(x)) { VZ_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define VZ_ASSERT(x, ...)
	#define VZ_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)