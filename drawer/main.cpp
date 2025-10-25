#include <SFML/Graphics.hpp>
#include <optional>

#include "sfml_wrapper.hpp"

int main() {
    // Create a window (width, height)
    sf::RenderWindow screen(sf::VideoMode(800, 600), "Green Circle Example");

    while (screen.isOpen()) {
        sf::Event event;
        while (screen.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                screen.close();
            }
        }

        screen.clear(sf::Color::Black);
        draw_circle(screen, 100, 100, 50); // your wrapper function
        screen.display();
    }
    return 0;
}
