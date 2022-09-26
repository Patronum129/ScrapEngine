#pragma once

#ifdef SE_PLATFORM_WINDOWS

extern ScrapEngine::Application* ScrapEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = ScrapEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif