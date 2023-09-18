#pragma once
#include <SFML/Graphics.hpp>
#include<vector>
#include "Player.h"
#include "Card.h"
using namespace sf;
class Map
{
    sf::RenderWindow window;
    Image map_image;
    Texture map;
    Sprite s_map;
    std::vector<Player> players;
    std::vector<Card> cards;
public:
    void createPl();
    void craeteMap();
    
};

