#include"Player.h"
Player::Player()
{
}


Text Player::getText()
{
	return name;
}

int Player::getXod()
{
	return xod;
}



Player::Player(string hero_image,string nameP)
{
	font.loadFromFile("arial.ttf");
	name.setString(nameP);
	name.setFont(font);
	name.setCharacterSize(20);
	hero.loadFromFile(hero_image);
	herosprite.setTexture(hero);
	herosprite.setTextureRect(IntRect(0, 60, 50, 60));
	herosprite.setPosition(250, 775);
}

void Player::buyCard(Card& card)
{
	if (Keyboard::isKeyPressed(Keyboard::Y)) {
		card.nameP = name;
		mani -= card.getCostHome();
		card.setCountHomeAndCostHome(1, card.getCostHome());
		card.setEventOnCard(card.getCostHome() * card.getCountHome());
	}
}



void Player::checkPosition()
{
	position=herosprite.getPosition();

}

void Player::walkHero(Card card)
{
	while (card.cardOnePositionLeftStartDown.y < position.y < card.cardOnePositionRightStarUp.y) {
		time = clock.getElapsedTime().asMicroseconds();
		clock.restart();
		time = time / 1200;

		if ((Keyboard::isKeyPressed(Keyboard::Left) || (Keyboard::isKeyPressed(Keyboard::A)))) {
			CurrentFrame += 0.004 * time;
			if (CurrentFrame > 4) CurrentFrame -= 4;
			herosprite.setTextureRect(IntRect(50 * int(CurrentFrame), 120, 50, 60));
			herosprite.move(-0.1 * time, 0);
			checkPosition();
		}

		if ((Keyboard::isKeyPressed(Keyboard::Right) || (Keyboard::isKeyPressed(Keyboard::D)))) {
			CurrentFrame += 0.004 * time;
			if (CurrentFrame > 4) CurrentFrame -= 4;
			herosprite.setTextureRect(IntRect(50 * int(CurrentFrame), 180, 50, 60));
			herosprite.move(0.1 * time, 0);
			checkPosition();
		}


		if ((Keyboard::isKeyPressed(Keyboard::Up) || (Keyboard::isKeyPressed(Keyboard::W)))) {
			CurrentFrame += 0.004 * time;
			if (CurrentFrame > 4) CurrentFrame -= 4;
			herosprite.setTextureRect(IntRect(50 * int(CurrentFrame), 60, 50, 60));
			herosprite.move(0, -0.1 * time);
			checkPosition();
		}

		if ((Keyboard::isKeyPressed(Keyboard::Down) || (Keyboard::isKeyPressed(Keyboard::S)))) {
			CurrentFrame += 0.004 * time;
			if (CurrentFrame > 4) CurrentFrame -= 4;
			herosprite.setTextureRect(IntRect(50 * int(CurrentFrame), 0, 50, 60));
			herosprite.move(0, 0.1 * time);
			checkPosition();
		}
	}
	if (card.cardOnePositionLeftStartDown.y < position.y > card.cardOnePositionRightStarUp.y) {
		xod--;
		xodId++;

	}
}


void Player::checkCards(vector<Card>& cards)
{
	for (auto cr : cards) {
		if (xodId == cr.getId()&& xod!=0) {
			for (int i = 0; i < xod;) {
				walkHero(cr);

			}
		}
		else if (xod == 0 && cr.nameP.getString() == "") {
			buyCard(cr);
		}
		else if(xod == 0 && cr.nameP.getString() == name.getString()){
			if (Keyboard::isKeyPressed(Keyboard::Y)) {
				mani -= cr.getCostHome();
				cr.setCountHomeAndCostHome(2, cr.getCostHome());
				cr.setEventOnCard(cr.getCostHome() * cr.getCountHome());
			}
		}
		else if (xod == 0 && cr.nameP.getString() != "") {
			mani -= cr.getEventOnCard();
		}
	}
}
		

