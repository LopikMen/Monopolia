#include"App.h"
App::App():
	window(sf::VideoMode(SIZE_WINDOWS_X, SIZE_WINDOWS_Y), "monopolia")
{
	map.createMap();
	Player pl1("player1.png", "player1");
	Player pl2("player2.png",  "player2");
	Player pl3("player3.png", "player3");
	Player pl4("player4.png","player4");
	pls.push_back(pl1);
	pls.push_back(pl2);
	pls.push_back(pl3);
	pls.push_back(pl4);
	rool.creatB("kubic.jpg");

}

void App::run()
{

	while (window.isOpen()) {
		
		processEvent();
				
	}
	render();
}

void App::render()
{

	window.clear();
	window.draw(map.mapR);
	window.draw(pls[2].herosprite);
	window.draw(rool.rectangle);
	window.display();
}

void App::processEvent()
{

	sf::Event event;

	while (window.pollEvent(event))
	{

		if (event.type == sf::Event::Closed) {
			window.close();
		}
        if (event.type == sf::Event::KeyPressed || event.type == sf::Event::MouseButtonPressed) {
            sf::Vector2i mousePosition;
            switch (timePlayer)
            {
            case(1):

                mousePosition = sf::Mouse::getPosition(window);
                if (rool.rectangle.getPosition().x > mousePosition.x && rool.rectangle.getPosition().y > mousePosition.y) {
                    rool.generationNum();
                    pls[0].xod = rool.getNum();
                    pls[0].walkHero();
                    pls[0].checkCards(cards, pls[0]);
                }
                break;
            case(2):

                mousePosition = sf::Mouse::getPosition(window);
                if (rool.rectangle.getPosition().x > mousePosition.x && rool.rectangle.getPosition().y > mousePosition.y) {
                    rool.generationNum();
                    pls[1].xod = rool.getNum();
                    pls[1].walkHero();
                    pls[1].checkCards(cards, pls[1]);
                }
                break;
            case(3):
                mousePosition = sf::Mouse::getPosition(window);

                if (rool.rectangle.getPosition().x > mousePosition.x && rool.rectangle.getPosition().y > mousePosition.y) {
                    rool.generationNum();
                    pls[2].xod = rool.getNum();
                    pls[2].walkHero();
                    pls[2].checkCards(cards, pls[2]);
                }
                break;
            case(4):

                mousePosition = sf::Mouse::getPosition(window);
                if (rool.rectangle.getPosition().x > mousePosition.x && rool.rectangle.getPosition().y > mousePosition.y) {
                    rool.generationNum();
                    pls[3].xod = rool.getNum();
                    pls[3].walkHero();
                    pls[3].checkCards(cards, pls[3]);
                    timePlayer = 1;
                }
            default:
                break;
            }


        }
	}
}

void App::update()
{
	window.draw(map.mapR);
	window.draw(pls[0].herosprite);
	window.draw(pls[1].herosprite);
	window.draw(pls[2].herosprite);
	window.draw(pls[3].herosprite);
	window.draw(rool.rectangle);
	window.display();
}
