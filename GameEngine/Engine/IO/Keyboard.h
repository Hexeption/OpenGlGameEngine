#include "GLFW\glfw3.h"

class Keyboard
{
public:
	static void KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);

	static bool keyPressing(int key);
	static bool keyReleased(int key);
	static bool Key(int key);
private:
	static bool keys[];
	static bool keysPressing[];
	static bool keyReleased[];
};
