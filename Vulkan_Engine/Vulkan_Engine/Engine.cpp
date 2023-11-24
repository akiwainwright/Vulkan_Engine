#include "Engine.h"

Engine::Engine(int windowWidth, int windowHeight, std::string windowName)
{
	m_WindowWidth = windowWidth;
	m_WindowHeight = windowHeight;

	m_WindownName = windowName;

	InitEngine();
}

Engine::~Engine()
{
	glfwDestroyWindow(m_BaseWindow);
	glfwTerminate();
}

void Engine::InitEngine()
{
	glfwInit();
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	m_BaseWindow = glfwCreateWindow(m_WindowWidth, m_WindowHeight, m_WindownName.c_str(), NULL, NULL);
}

void Engine::RunEngine()
{
	while (EngineRunning())
	{
		glfwPollEvents();
	}
}
