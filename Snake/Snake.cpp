#include"Snake.hpp"
#include<SFML/Graphics.hpp>
#include"Constants.hpp"
#include<iostream>

Snake::Snake(sf::RenderWindow* win) {

	Snake::window = win;

	float pos_x = cell_x , pos_y = cell_y ;

	std :: cout << pos_x << " " << pos_y;

	for (int i = 0; i < size; i++) {
	Snake::snake_body.push_back({ pos_x+i, pos_y });

	}
}


void Snake::Move() {}

void Snake::Draw() {

	sf::CircleShape circle({cellsize/2});

	for (int i = 0; i < size; i++) {
	
		circle.setPosition({ snake_body[i].x * cellsize + margin , snake_body[i].y * cellsize + margin });
		circle.setFillColor(s_color);

		window->draw(circle);
	
	}



}
void Snake::Crash() {}
void Snake::Grow() {}