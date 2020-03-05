#include <SFML/Graphics.hpp>
#include <box2d/box2d.h>

class Entity : public sf::Sprite {
  Entity();
  ~Entity();
  private:
    b2Body* body;
};