#pragma once

#include <map>
#include <SFML/Graphics.hpp>
#include <box2d/box2d.h>

struct LevelPalette {
  sf::Texture file;
  b2Vec2 tileDimensions;
  uint32_t tileSize;
  std::map<std::string, uint32_t> tileLUT;
};