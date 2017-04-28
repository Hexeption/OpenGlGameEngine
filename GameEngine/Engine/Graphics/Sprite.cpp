#include "Sprite.h"

Sprite::Sprite()
{
	xPos = 0;
	yPos = 0;
	texture = Texture();
}

Sprite::Sprite(string imagePath)
{
	xPos = 0;
	yPos = 0;
	texture = Texture(imagePath);
}

Sprite::Sprite(string imagePath, float _xPos, float _yPos)
{
	xPos = _xPos;
	yPos = _yPos;
	texture = Texture(imagePath);
}

void Sprite::Update()
{

}

void Sprite::Render()
{
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, texture.GetID());
	glLoadIdentity();

	glTranslatef(xPos, yPos, 0);

	glColor4f(1, 1, 1, 1);

	glBegin(GL_QUADS);
	glTexCoord2f(0, 0);		
	glVertex2f(0, 0);

	glTexCoord2f(1, 0);		
	glVertex2f(texture.GetWidth(), 0);

	glTexCoord2f(1, 1);		
	glVertex2f(texture.GetWidth(), texture.GetHeight());

	glTexCoord2f(0, 1);		
	glVertex2f(0, texture.GetHeight());

	glEnd();

	glDisable(GL_TEXTURE_2D);
}

