#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>  // for sf::Uint8
#include <optional>
#include <cstdint>


sf::Color rgb_to_sfcolor(int r, int g, int b, int a = 255) {
    return sf::Color(
        static_cast<uint8_t>(r),
        static_cast<uint8_t>(g),
        static_cast<uint8_t>(b),
        static_cast<uint8_t>(a)
    );
}

void draw_circle(sf::RenderWindow& screen, int posx, int posy, int radius) {
    sf::CircleShape circle(static_cast<float>(radius));       // radius must be float
    circle.setFillColor(sf::Color::Green);                    // green color
    circle.setPosition(sf::Vector2f(posx, posy));  // fix syntax
    screen.draw(circle);
}

void draw_rect(sf::RenderWindow& screen, int posx, int posy, int width, int height, sf::Color color) {
    sf::RectangleShape rect(sf::Vector2f(static_cast<float>(width), static_cast<float>(height)));
    rect.setFillColor(sf::Color::Blue);                       // example color
    rect.setPosition(sf::Vector2f(static_cast<float>(posx), static_cast<float>(posy))); // fix syntax
    screen.draw(rect);
}


