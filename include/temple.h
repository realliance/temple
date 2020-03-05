#pragma once

#include <stack>
#include <vector>

#include "state.h"

class Temple {
  public:
    void Init();
    static Temple& GetInstance();
    void PushState(State state);
    &State GetCurrentState();
    State PopState();
  private:
    stack<State, vector> stateStack;
}