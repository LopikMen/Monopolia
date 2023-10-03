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

    Card start(Vector2f(200,900));
    start.setEventOnCard(200);
    start.setSizeQvadro();
    Card test(Vector2f(200, 835));
    test.setCountHomeAndCostHome(0, 200);
    cards.push_back(start);
    cards.push_back(test);
}

void App::run()
{

	while (window.isOpen()) {
		
		processEvent();
        update();
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
    int timePlayer = 1;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
        }
        update();
        if (true/*event.type == sf::Event::KeyPressed || event.type == sf::Event::MouseButtonPressed*/) {
            sf::Vector2i mousePosition;
    
            switch (timePlayer)
            {
            case(1):
                
                mousePosition = sf::Mouse::getPosition(window);
               
                if (/*rool.rectangle.getPosition().x > mousePosition.x && rool.rectangle.getPosition().y > mousePosition.y*/true) {
                    rool.generationNum();
                    pls[0].setXod(rool.getNum());
                    pls[0].checkCards(cards);
                    
                }
                break;
            case(2):

                mousePosition = sf::Mouse::getPosition(window);
                if (rool.rectangle.getPosition().x > mousePosition.x && rool.rectangle.getPosition().y > mousePosition.y) {
                    rool.generationNum();
                    pls[1].setXod(rool.getNum());
                    pls[1].checkCards(cards);
                    timePlayer++;
                }
                break;
            case(3):
                mousePosition = sf::Mouse::getPosition(window);

                if (rool.rectangle.getPosition().x > mousePosition.x && rool.rectangle.getPosition().y > mousePosition.y) {
                    rool.generationNum();
                    pls[2].setXod(rool.getNum());
                    pls[2].checkCards(cards);
                    timePlayer++;
                }
                break;
            case(4):

                mousePosition = sf::Mouse::getPosition(window);
                if (rool.rectangle.getPosition().x > mousePosition.x && rool.rectangle.getPosition().y > mousePosition.y) {
                    rool.generationNum();
                    pls[3].setXod(rool.getNum());
                    pls[3].checkCards(cards);
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
	
	window.draw(rool.rectangle);
	window.display();
}
