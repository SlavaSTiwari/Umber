#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Umbra {

	class UMBRA_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() {
			return s_CoreLogger;
		}

		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() {
			return s_ClientLogger;
		}

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define UB_CORE_TRACE(...)		::Umbra::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define UB_CORE_INFO(...)		::Umbra::Log::GetCoreLogger()->info(__VA_ARGS__)
#define UB_CORE_WARN(...)		::Umbra::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define UB_CORE_ERROR(...)		::Umbra::Log::GetCoreLogger()->error(__VA_ARGS__)
#define UB_CORE_FATAL(...)		::Umbra::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define UB_TRACE(...)			::Umbra::Log::GetClientLogger()->trace(__VA_ARGS__)
#define UB_INFO(...)			::Umbra::Log::GetClientLogger()->info(__VA_ARGS__)
#define UB_WARN(...)			::Umbra::Log::GetClientLogger()->warn(__VA_ARGS__)
#define UB_ERROR(...)			::Umbra::Log::GetClientLogger()->error(__VA_ARGS__)
#define UB_FATAL(...)			::Umbra::Log::GetClientLogger()->fatal(__VA_ARGS__)
