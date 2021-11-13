#pragma once

extern Umbra::Application* Umbra::CreateApplication();

int main(int argc, char** argv) 
{
	Umbra::Log::Init();
	UB_CORE_WARN("INITIALIZED LOG");
	UB_INFO("Hello");
	
	auto app = Umbra::CreateApplication();
	app->Run();
	delete app;

	return 0;
}