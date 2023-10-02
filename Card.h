#pragma once
#include"Player.h"
class Card
{
public:
	RectangleShape cardOne;
	Text nameP;
	Vector2f cardOnePositionLeftStartDown;
	Vector2f cardOnePositionRightStarUp;
private:
	static int id;
	sf::Image cardImage;
	sf::Texture texture;
	sf::Sprite s_card;
	vector<int> CountHomeAndCostHome;
	int eventOnCard;
public:
	Card();
	void createCard();
	void povernutCard();
	void setCountHomeAndCostHome(int count,int cost);
	int getCountHome();
	int getCostHome();
	int getId();
	void setEventOnCard(int eventOnCard);
	void setSizeQvadro();
	int getEventOnCard();
};

int Card::id=0;
