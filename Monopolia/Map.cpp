#include "Map.h"

void Map::createPl()
{
}

void Map::craeteMap()
{
    map_image.loadFromFile("map.jpg");
    map.loadFromImage(map_image);
    s_map.setTexture(map);
    s_map.getTextureRect();
}
