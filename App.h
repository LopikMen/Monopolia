#pragma once
#include"Map.h"

class App
{
public:
	Map map;
	vector<Player> pls;
	vector<Card> cards;
	Button rool;
	sf::RenderWindow window;
	int timePlayer;
private:
	void render();
	void processEvent();
	void update();
public:
	App();
	void run();
};

