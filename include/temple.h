#pragma once
#include "states/state.h"
#include "entities/entity.h"
#include "palettes.h"

#include <stack>
#include <vector>
#include <box2d/box2d.h>
#include <toml.hpp>

class Temple {
  public:
    Temple();
    ~Temple();
    void Init();
    void PushState(State state);
    State& GetCurrentState();
    void PopState();
  private:
    void LoadPalettes(std::string path);
    std::vector<LevelPalette> levelPalettes;
    std::stack<State, std::vector<State>> stateStack;
    b2World world = b2World(b2Vec2(0.0f, -10.0f));
};