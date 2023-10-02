#include"Button.h"
void Button::creatB(string image_button)
{
	texture_button.loadFromFile(image_button);
	sprite_button.setTexture(texture_button);
	rectangle.setTexture(&texture_button);
	rectangle.setSize(Vector2f(100, 50));
	rectangle.setPosition(Vector2f(500, 300));
}


void Button::render(sf::RenderWindow& window)
{
	window.draw(rectangle);
}

void Button::generationNum()
{
	num = rand() % 13;
}





int Button::getNum()
{
	return num;
}

