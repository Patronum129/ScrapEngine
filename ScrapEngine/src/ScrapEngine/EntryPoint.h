#pragma once

#ifdef SE_PLATFORM_WINDOWS

extern ScrapEngine::Application* ScrapEngine::CreateApplication();

int main(int argc, char** argv)
{
	ScrapEngine::Log::Init();
	SE_CORE_WARN("Initialized Log!");
	SE_INFO("Hello!");

	auto app = ScrapEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif