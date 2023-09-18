#pragma once
#include <SFML/Graphics.hpp>
#include"Map.h"
#include"Config.h"
#include"Player.h"
class App
{
public:
	Map map;
	sf::RenderWindow window;
	App();
	void run();
private:
	void render();
	void processEvent();
	void update();
};

