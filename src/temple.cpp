#include "temple.h"
#include "states/state.h"

void Temple::Init() {

}

Temple& Temple::GetInstance() {
  static Temple instance;
  return instance;
}

void Temple::PushState(State state) {

}

State& Temple::GetCurrentState() {

}

State Temple::PopState() {

}