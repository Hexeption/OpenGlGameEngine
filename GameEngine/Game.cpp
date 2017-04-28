#include "Engine/Engine.h"
#include "Engine/Graphics/Sprite.h"

//Removes console
//#pragma comment(linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" )

int main()
{
	cout << "Hello World" << endl;

	Engine engine;
	engine.Initilize("Game");

	Sprite testSprite = Sprite("Assets/Art/player.png", 100, 100);

	while (true)
	{
		//Update
		engine.Update();
		testSprite.Update();

		//Render
		engine.BeginRender();

		testSprite.Render();
		
		engine.EndRender();
	}

	return 0;

}