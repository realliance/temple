#pragma once

#include <vector>
#include <SFML/Graphics.hpp>

#include "states/state.h"
#include "entities/entity.h"
#include "tiles/tile.h"

class LevelState : public State {
  public:
    void Init(std::string path);
    void OnDraw(sf::RenderWindow& window);
    void OnUpdate();
  private:
    std::vector<Entity> entityList;
    std::vector<Tile> envList;

}