#include "Mouse.h"

double Mouse::x = 0;
double Mouse::y = 0;

bool Mouse::buttons[GLFW_MOUSE_BUTTON_LAST] = { 0 };
bool Mouse::buttonsPressed[GLFW_MOUSE_BUTTON_LAST] = { 0 };
bool Mouse::buttonsReleased[GLFW_MOUSE_BUTTON_LAST] = { 0 };

void Mouse::MousePosCallback(GLFWwindow * window, double _x, double _y)
{
	int width, height;
	glfwGetFramebufferSize(window, &width, &height);

	x = _x;
	y = height - _y;
}

void Mouse::MouseButtonCallback(GLFWwindow * window, int button, int action, int mods)
{
	if (button < 0)
		return;

	if (action != GLFW_RELEASE && buttons[button] == false)
	{
		buttonsPressed[button] = true;
		buttonsReleased[button] = false;
	}
	
	if (action == GLFW_RELEASE && buttons[button] == true)
	{
		buttonsPressed[button] = false;
		buttonsReleased[button] = true;
	}

	buttons[button] = action != GLFW_RELEASE;
}

double Mouse::GetMouseX()
{
	return x;
}

double Mouse::GetMouseY()
{
	return y;
}

bool Mouse::ButtonPressed(int button)
{
	bool x = buttonsPressed[button];
	buttonsPressed[button] = false;
	return x;
}

bool Mouse::ButtonReleased(int button)
{
	bool x = buttonsReleased[button];
	buttonsReleased[button] = false;
	return x;
}

bool Mouse::Button(int button)
{
	return buttons[button];
}
