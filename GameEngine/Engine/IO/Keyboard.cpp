#include "Keyboard.h"

bool Keyboard::keys[GLFW_KEY_LAST] = { 0 };
bool Keyboard::keyPressed[GLFW_KEY_LAST] = { 0 };
bool Keyboard::keyReleased[GLFW_KEY_LAST] = { 0 };

void Keyboard::KeyCallback(GLFWwindow * window, int key, int scancode, int action, int mods)
{
	if (key < 0)
		return;

	if (action != GLFW_RELEASE && keys[key] == false)
	{
		keyPressed[key] = true;
		keyReleased[key] = false;
	}

	if (action != GLFW_RELEASE && keys[key] == false)
	{
		keyPressed[key] = false;
		keyReleased[key] = true;
	}

	keys[key] = action != GLFW_RELEASE;
}

bool Keyboard::KeyPressed(int key)
{
	bool x = keyPressed[key];
	keyPressed[key] = false;
	return x;
}

bool Keyboard::KeyReleased(int key)
{
	bool x = keyReleased[key];
	keyReleased[key] = false;
	return x;
}

bool Keyboard::Key(int key)
{
	return keys[key];
}


