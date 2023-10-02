#pragma once
#include"Config.h"
class Button
{
public:
	sf::RectangleShape rectangle;
private:
	Image image_button;
	Texture texture_button;
	Sprite sprite_button;
	int num;
public:
	
	void creatB(string image_button);
	void render(sf::RenderWindow& window);
	void generationNum();
	int getNum();


};

