#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Vozel {

	class VOZEL_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
		static std::shared_ptr<spdlog::logger> s_CoreLogger;

	};

}

// Core log macros
#define VZ_CORE_TRACE(...)		::Vozel::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define VZ_CORE_INFO(...)		::Vozel::Log::GetCoreLogger()->info(__VA_ARGS__)
#define VZ_CORE_WARN(...)		::Vozel::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define VZ_CORE_ERROR(...)		::Vozel::Log::GetCoreLogger()->error(__VA_ARGS__)
#define VZ_CORE_FATAL(...)		::Vozel::Log::GetCoreLogger()->fatal(__VA_ARGS__)


// Client log macros
#define VZ_TRACE(...)		::Vozel::Log::GetClientLogger()->trace(__VA_ARGS__)
#define VZ_INFO(...)		::Vozel::Log::GetClientLogger()->info(__VA_ARGS__)
#define VZ_WARN(...)		::Vozel::Log::GetClientLogger()->warn(__VA_ARGS__)
#define VZ_ERROR(...)		::Vozel::Log::GetClientLogger()->error(__VA_ARGS__)
#define VZ_FATAL(...)		::Vozel::Log::GetClientLogger()->fatal(__VA_ARGS__)
