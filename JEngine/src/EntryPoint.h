#pragma once

#ifdef JENGINE_PLATFORM_WINDOWS

extern JEngine::Application* JEngine::CreateApplication();

int main(int argc, char** argv) {
	auto app = JEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif // JENGINE_PLATFORM_WINDOWS
