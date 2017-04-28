#include "GLFW/glfw3.h"
#pragma comment(lib, "opengl32.lib")

#include <iostream>
using namespace std;

class Engine
{
public:
	static int SCREEN_WIDTH;
	static int SCREEN_HEIGHT;
	static float GetDeltaTime();

	Engine();
	~Engine();

	bool Initilize(char* windowTitle);

	void Update();
	void BeginRender();
	void EndRender();

protected:
	static GLFWwindow* window;

	static float deltaTime;
	float lastTime;
private:
};