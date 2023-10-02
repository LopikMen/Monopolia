#include"Map.h"



void Map::createMap()
{
    map_image.loadFromFile("map.jpg");
    map.loadFromImage(map_image);
    s_map.setTexture(map);
    mapR.setTexture(&map);
    mapR.setSize(Vector2f(800,800));
    mapR.setPosition(Vector2f(200, 100));
  
    
}
