#include"Card.h"

inline Card::Card() {
	id++;
}

void Card::createCard(){
	cardOne.setSize(Vector2f(SIZE_CARD_X, SIZE_CARD_Y));
	cardOnePositionLeftStartDown[0] = SIZE_CARD_X;
	cardOnePositionLeftStartDown[1] = SIZE_CARD_Y;
	cardOnePositionRightStarUp[0] = SIZE_CARD_X + 160;
	cardOnePositionRightStarUp[1] = SIZE_CARD_Y + 60;
}

void Card::povernutCard()
{
	cardOne.rotate(90);
}


void Card::setCountHomeAndCostHome(int count, int cost)
{
	CountHomeAndCostHome.push_back(count);
	CountHomeAndCostHome.push_back(cost);

}

int Card::getCountHome()
{
	return CountHomeAndCostHome[0];
}

int Card::getCostHome()
{
	return CountHomeAndCostHome[1];
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
