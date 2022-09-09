#ifdef EGAF_INCLUDE_VULKAN

#endif
#include <glfw/glfw3.h>
#include <string>

namespace egaf
{
	struct ApplicationSettings
	{
		int width = 800;
		int height = 600;
		std::string name = "Application";
	};

	class Application
	{
	public:
		Application();
		Application(ApplicationSettings settings);

		int Run(int argc, char* argv[]);

	protected:
		virtual void Init(int argc, char* argv[]);
		virtual void Tick(double deltaTime);
		virtual void Exit();

		ApplicationSettings m_settings = {};

	private:
		double m_lastTime = 0.0;
		GLFWwindow* m_window = nullptr;

		void InitWindow();
		void CleanUpWindow();
	};
}