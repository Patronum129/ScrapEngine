#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/fmt/ostr.h"

namespace ScrapEngine {

	class SCRAPENGINE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

//Core log macros
#define SE_CORE_TRACE(...)     ::ScrapEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define SE_CORE_INFO(...)      ::ScrapEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define SE_CORE_WARN(...)      ::ScrapEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define SE_CORE_ERROR(...)     ::ScrapEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define SE_CORE_FATAL(...)     ::ScrapEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client log macros
#define SE_TRACE(...)          ::ScrapEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define SE_INFO(...)           ::ScrapEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define SE_WARN(...)           ::ScrapEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define SE_ERROR(...)          ::ScrapEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define SE_FATAL(...)          ::ScrapEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)
