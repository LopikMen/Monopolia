#pragma once
#include <SFML/Graphics.hpp>
#include"App.h"
using namespace std;
using namespace sf;
class Player
{
	string name;
	Color color;
	Image hero_image;
	Texture hero;
	Sprite herosprite;
	float CurrentFrame = 0;
	Clock clock;
public:
	Player(string name,Color color, Image hero_image);
	void walkHero();
};

