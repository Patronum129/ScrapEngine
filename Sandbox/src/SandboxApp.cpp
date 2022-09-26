#include <ScrapEngine.h>

class Sandbox : public ScrapEngine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

ScrapEngine::Application* ScrapEngine::CreateApplication()
{
	return new Sandbox();
}