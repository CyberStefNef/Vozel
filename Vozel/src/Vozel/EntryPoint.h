#pragma once

#ifdef VZ_PLATFORM_WINDOWS

extern Vozel::Application* Vozel::CreateApplication();

int main(int argc, char** argv) {

	Vozel::Log::Init();
	VZ_CORE_WARN("Initalized Log!");
	int a = 5;
	VZ_INFO("Hello! Var={0}", a);

	auto app = Vozel::CreateApplication();
	app->Run();
	delete app;

}

#endif // VZ_PLATFORM_WINDOWS
