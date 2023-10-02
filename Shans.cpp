#include"Shans.h"
Shans::Shans()
{
	image_shans.loadFromFile("shans.png");
}

void Shans::creatShans()
{
	Vector2f fragment;
	int numer= rand() % 7;
	textureShans.loadFromImage(image_shans);
	spriteShans.setTextureRect(IntRect(96 * numer, 0, SIZE_SHANS_X,SIZE_SHANS_Y));
}
