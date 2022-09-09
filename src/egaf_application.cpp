#include "egaf_application.h"
#include <stdexcept>

egaf::Application::Application(){}

egaf::Application::Application(ApplicationSettings settings) : m_settings(settings)
{

}

int egaf::Application::Run(int argc, char* argv[])
{
	InitWindow();
	Init(argc, argv);
	m_lastTime = glfwGetTime();
	while (!glfwWindowShouldClose(m_window))
	{
		double currentTime = glfwGetTime();
		double deltaTime = currentTime - m_lastTime;
		m_lastTime = currentTime;
		Tick(deltaTime);
	}

	Exit();
	CleanUpWindow();
	return 0;
}

void egaf::Application::InitWindow()
{
	if (glfwInit() != GLFW_TRUE)
	{
		throw std::runtime_error("GLFW did not init correctly");
	}

	m_window = glfwCreateWindow(m_settings.width, m_settings.height, m_settings.name.c_str(), nullptr, nullptr);
	if (m_window == nullptr)
	{
		throw std::runtime_error("GLFW failed to create window");
	}

	glfwMakeContextCurrent(m_window);
}

void egaf::Application::Init(int argc, char* argv[])
{
		
}

void egaf::Application::Tick(double deltaTime)
{
}

void egaf::Application::Exit()
{

}

void egaf::Application::CleanUpWindow()
{
	glfwDestroyWindow(m_window);
}
