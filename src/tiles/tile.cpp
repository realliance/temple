#include "tiles/tile.h"

#include <SFML/Graphics.hpp>
#include <box2d/box2d.h>

void Tile::Init(b2World& world, b2Vec2 startPos, b2Vec2 size) {
  b2BodyDef def;
  def.position = startPos;

  body = world.CreateBody(&def);
  shape.SetAsBox(size.x / 2.0f, size.y / 2.0f);

  body->CreateFixture(&shape, 0.0f);
}