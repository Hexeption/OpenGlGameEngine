#include "Keyboard.h"

bool Keyboard::keys[GLFW_KEY_LAST] = { 0 };
bool Keyboard::keysPressing[GLFW_KEY_LAST] = { 0 };
bool Keyboard::keyReleased[GLFW_KEY_LAST] = { 0 };

void Keyboard::KeyCallback(GLFWwindow * window, int key, int scancode, int action, int mods)
{
	if (key < 0)
		return;

	if (action != GLFW_RELEASE && keys[key] == false)
	{
		keysPressing[key] = true;
		keyReleased[key] = false;
	}

	if (action != GLFW_RELEASE && keys[key] == false)
	{
		keysPressing[key] = false;
		keyReleased[key] = true;
	}

	keys[key] = action != GLFW_RELEASE;
}

bool Keyboard::KeyDown(int key)
{
	bool x = keysDown[key];
	keysDown[key] = false;
	return x;
}

bool Keyboard::KeyUp(int key)
{
	bool x = keysUp[key];
	keysUp[key] = false;
	return x;
}

bool Keyboard::Key(int key)
{
	return keys[key];
}

