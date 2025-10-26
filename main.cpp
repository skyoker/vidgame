#include <SFML/Graphics.hpp>
#include <optional>

int main() {
    sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML 3 Window");

    while (window.isOpen()) {
        while (auto eventOpt = window.pollEvent()) {
            const sf::Event& event = *eventOpt;

            // SFML 3: check event type like this
            if (event.is<sf::Event::Closed>())
                window.close();
        }

        window.clear(sf::Color::Black);

        // draw things here

        window.display();
    }

    return 0;
}

