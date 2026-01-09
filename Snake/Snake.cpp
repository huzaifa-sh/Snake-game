#include"Snake.hpp"
#include<SFML/Graphics.hpp>
#include"Constants.hpp"

Snake::Snake(sf::RenderWindow* win) {

	Snake::window = win;

	float idx_x = n_cell_x/2 - 1 , idx_y = n_cell_y/2 - 1 ;

	for (int i = 0; i < size; i++) {

		Snake::snake_body.push_back({ idx_x+i, idx_y });

	}
}


sf :: Vector2f Snake :: get_cell_cord(sf::Vector2f idx) {

	float comp = margin + cellsize / 2;
	return sf :: Vector2f(idx.x*cellsize+comp , idx.y * cellsize + comp);


}



void Snake::Draw() {

	sf::CircleShape circle({cellsize/2});
	circle.setOrigin({cellsize/2 , cellsize/2});

	for (int i = 0; i < size; i++) {
	
		circle.setPosition(get_cell_cord(snake_body[i]));
		circle.setFillColor(s_color);

		window->draw(circle);
	
	}



}

void Snake::Move() {










}

void Snake::Crash() {}
bool Snake::Grow() {}