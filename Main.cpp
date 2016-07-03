#include <SFML/Graphics.hpp>

int main(int argc, char const *argv[]) {
  sf::RenderWindow window(sf::VideoMode(640, 80), "First Window");
  while(window.isOpen()) {
    sf::Event event;
    while(window.pollEvent(event)) {
      if(event.type == sf::Event::Closed) {
        window.close();
      }
    }
    window.clear(sf::Color::Black);
    window.display();
  }
  return 0;
}
