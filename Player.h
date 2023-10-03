#pragma once
#include"Card.h"
class Player
{
public:
	int mani = 1500;
	int xodId;
	Sprite herosprite;
	Text name;
	Font font;
private:
	int xod;
	Image hero_image;
	Texture hero;
	float CurrentFrame = 0;
	Vector2f position;
	Clock clock;
	float time;		
public:
	Player();
	Text getText();
	int getXod();
	void setXod(int xod);
	Player(string hero_image,string name);
	void buyCard(Card& card);
	void checkPosition();
	void walkHero(Card card);
	void checkCards(vector<Card>& crds);
};