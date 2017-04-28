#include "GLFW\glfw3.h"

class Mouse
{
public:
	static void MousePosCallback(GLFWwindow* window, double _x, double _y);
	static void MouseButtonCallback(GLFWwindow* window, int button, int action, int mods);

	static double GetMouseX();
	static double GetMouseY();
	
	static bool ButtonPressed(int button);
	static bool ButtonReleased(int button);
	static bool Button(int button);
private:
	static double x;
	static double y;

	static bool buttons[];
	static bool buttonsPressed[];
	static bool buttonsReleased[];
};
