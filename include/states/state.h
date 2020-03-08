#pragma once

#include <SFML/Graphics.hpp>

class State {
  public:
    void Init();
    void OnDraw(sf::RenderWindow& window);
    void OnUpdate();
};