#pragma once

#ifdef VV_PLATFORM_WINDOWS

extern Vivid::Application* Vivid::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Vivid::CreateApplication();
	app->Run();
	delete app;
}

#endif