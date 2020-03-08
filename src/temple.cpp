#include "temple.h"
#include "states/state.h"

#include <toml.hpp>

Temple::Temple() {

}

Temple:: ~Temple() {

}

void Temple::PushState(State state) {
  stateStack.push(state);
}

State& Temple::GetCurrentState() {
  return stateStack.top();
}

void Temple::PopState() {
  stateStack.pop();
}

void Temple::LoadPalettes(std::string path) {
  auto data = toml::parse(path);

  auto palettes = toml::find<std::vector<toml::table>>(data, "palettes");

  for (auto tableEntry : palettes) {
    LevelPalette newPalette;

    newPalette.file.loadFromFile(toml::get<std::string>(tableEntry["tile_map"]));
    uint32_t xDim = toml::get<uint32_t>(tableEntry["x_dim"]);
    uint32_t yDim = toml::get<uint32_t>(tableEntry["y_dim"]);
    newPalette.tileDimensions = b2Vec2(xDim, yDim);
    newPalette.tileSize = toml::get<uint32_t>(tableEntry["tile_size"]);
  }
}