#include"Snake.hpp"
#include<SFML/Graphics.hpp>

Snake::Snake(sf :: RenderWindow * win) {

	Snake::window = win;

	Snake::snake_body.push_back({});


}
