#include <SFML/Graphics.hpp>
#include <box2d/box2d.h>

class Tile : public sf::Sprite {
  void Init(b2World& world, b2Vec2 startPos, b2Vec2 size);
  private:
    b2Body* body;
    b2PolygonShape shape;
};