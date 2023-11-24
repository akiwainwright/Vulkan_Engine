#pragma once
#include <GLFW/glfw3.h>
#include <string>

class Engine
{
public:
	Engine(int windowWidth, int windowHeight, std::string windowName);
	~Engine();

	void InitEngine();
	void RunEngine();

	inline bool EngineRunning() { return !glfwWindowShouldClose(m_BaseWindow); }
	
	

private:
	int m_WindowWidth;
	int m_WindowHeight;

	std::string m_WindownName;

	GLFWwindow* m_BaseWindow;
};

