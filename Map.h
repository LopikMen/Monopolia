#pragma once
#include"Player.h"
class Map
{
public:
    Sprite s_map;
    RectangleShape mapR;

private:
  
    Image map_image;
    Texture map;

public:
    void createMap();


    
};

