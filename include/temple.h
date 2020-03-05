#pragma once
#include "states/state.h"
#include "entities/entity.h"

#include <stack>
#include <vector>
#include <box2d/box2d.h>
#include <toml.hpp>

class Temple {
  public:
    void Init();
    static Temple& GetInstance();
    void PushState(State state);
    State& GetCurrentState();
    State PopState();
  private:
    std::stack<State, std::vector<State>> stateStack;
    b2Vec2 gravity;
};