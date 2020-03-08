#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include "temple.h"

int main() 
{
  sf::RenderWindow window(sf::VideoMode(800, 600), "Temple");
  Temple temple;

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      switch(event.type) {
        Closed: 
          window.close(); 
          break;
      }
    }
    window.clear();

    window.display();
  }

  return 0;
}