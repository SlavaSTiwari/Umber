#pragma once

extern Umbra::Application* Umbra::CreateApplication();

int main(int argc, char** argv) {
	
	auto app = Umbra::CreateApplication();
	app->Run();
	delete app;

	return 0;
}