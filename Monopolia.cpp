
#include"App.h"

int main()
{
    /*sf::RenderWindow window(sf::VideoMode(SIZE_WINDOWS_X, SIZE_WINDOWS_Y), "monopolia");
    
    int timePlayer=1;
    Button rool;
    vector<Card> crds;

    Card start;
    start.createCard();
    start.setEventOnCard(200);

    Card serebro;
    vector<Player> pls;

    Player pl1("player1.png", "player1");
    Player pl2("player2.png", "player2");
    Player pl3("player3.png", "player3");
    Player pl4("player4.png", "player4");
    pls.push_back(pl1);
    pls.push_back(pl2);
    pls.push_back(pl3);
    pls.push_back(pl4);
    Player xodPlayer;
    rool.creatB("kubic.jpg");
    sf::RenderWindow window(sf::VideoMode(1200, 1000), "My window");
    Map map;
    map.createMap();
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            sf::Vector2i mousePosition = sf::Mouse::getPosition(window);
            switch (timePlayer)
            {
            case(1):
                xodPlayer = pls[0];
                if (rool.rectangle.getPosition().x>mousePosition.x&& rool.rectangle.getPosition().y > mousePosition.y) {
                    rool.generationNum();
                    pls[0].xod = rool.getNum();
                    pls[0].walkHero();
                    pls[0].checkCards(crds, xodPlayer);
                }
                break;
            case(2):
                xodPlayer = pls[1];
                if (rool.rectangle.getPosition().x > mousePosition.x && rool.rectangle.getPosition().y > mousePosition.y) {
                    rool.generationNum();
                    pls[1].xod = rool.getNum();
                    pls[1].walkHero();
                    pls[1].checkCards(crds, xodPlayer);
                }
                break;
            case(3):
                xodPlayer = pls[2];
                if (rool.rectangle.getPosition().x > mousePosition.x && rool.rectangle.getPosition().y > mousePosition.y) {
                    rool.generationNum();
                    pls[2].xod = rool.getNum();
                    pls[2].walkHero();
                    pls[2].checkCards(crds, xodPlayer);
                }
                break;
            case(4):
                xodPlayer = pls[3];
                if (rool.rectangle.getPosition().x > mousePosition.x && rool.rectangle.getPosition().y > mousePosition.y) {
                    rool.generationNum();
                    pls[3].xod = rool.getNum();
                    pls[3].walkHero();
                    pls[3].checkCards(crds, xodPlayer);
                    timePlayer = 1;
                }
            default:
                break;
            }

        }

        window.clear();
        window.draw(map.mapR);
        window.draw(pls[0].herosprite);
        window.draw(pls[1].herosprite);
        window.draw(pls[2].herosprite);
        window.draw(pls[3].herosprite);
        window.draw(rool.rectangle);
        
        
 
        window.display();
    }*/
    App app;
    app.run();
   

}