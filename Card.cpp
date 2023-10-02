#include"Card.h"

inline Card::Card() {
	id++;
}

void Card::createCard(){
	cardOne.setSize(Vector2f(SIZE_CARD_X, SIZE_CARD_Y));
	cardOnePositionLeftStartDown.x = SIZE_CARD_X;
	cardOnePositionLeftStartDown.y = SIZE_CARD_Y;
	cardOnePositionRightStarUp.x = SIZE_CARD_X + 160;
	cardOnePositionRightStarUp.y = SIZE_CARD_Y + 60;
}

void Card::povernutCard()
{
	cardOne.rotate(90);
}


void Card::setCountHomeAndCostHome(int count, int cost)
{
	CountHomeAndCostHome.x=count;
	CountHomeAndCostHome.y=cost;

}

int Card::getCountHome()
{
	return CountHomeAndCostHome.x;
}

int Card::getCostHome()
{
	return CountHomeAndCostHome.y;
}

int Card::getId()
{
	return id;
}

void Card::setEventOnCard(int eventOnCard)
{
	this->eventOnCard = eventOnCard;
}

void Card::setSizeQvadro()
{
	cardOne.setSize(Vector2f(160, 160));
}


int Card::getEventOnCard()
{
	return eventOnCard;
}
