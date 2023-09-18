#include "App.h"

App::App()
{
	sf::RenderWindow window(sf::VideoMode(1200, 1000), "");
	map.craeteMap();
}

void App::run()
{
	while (window.isOpen()) {
		processEvent();
		
		render();
	}
}

void App::render()
{
}

void App::processEvent()
{
	sf::Event event;
	while (window.pollEvent(event))
	{
		
	}
}
