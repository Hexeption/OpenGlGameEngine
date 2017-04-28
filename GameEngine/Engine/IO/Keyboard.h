#include "GLFW\glfw3.h"

class Keyboard
{
public:
	static void KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods);

	static bool KeyPressed(int key);
	static bool KeyReleased(int key);
	static bool Key(int key);
private:
	static bool keys[];
	static bool keyPressed[];
	static bool keyReleased[];
};
