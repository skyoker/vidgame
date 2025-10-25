#pragma once
#include <SFML/Graphics.hpp>

sf::Color rgb_to_sfcolor(int r, int g, int b, int a = 255);
void draw_circle(sf::RenderWindow& screen, int posx, int posy, int radius);
void draw_rect(sf::RenderWindow& screen, int posx, int posy, int width, int height, sf::Color color);
