#include"Snake.hpp"
#include<SFML/Graphics.hpp>
#include"Constants.hpp"

Snake::Snake(sf::RenderWindow* win) {

	Snake::window = win;

	for (int i = 0; i < size; i++) {

		Snake::snake_body.push_back({ def_cell.x+i, def_cell.y });

	}
}


sf :: Vector2f Snake :: get_cell_cord(sf::Vector2f idx) {

	float comp = margin + cellsize / 2;
	return sf :: Vector2f(idx.x*cellsize + comp , idx.y * cellsize + comp);


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

void Snake::Move(Direction dir) {


	if (dir == Direction::NONE) return;

	sf::Vector2f newseg(snake_body[0].x , snake_body[0].y);

	if (dir == Direction::UP) newseg.y -= 1;
	else if (dir == Direction::DOWN)newseg.y += 1;
	else if (dir == Direction::LEFT)newseg.x -= 1;
	else if (dir == Direction::RIGHT)newseg.x += 1;

	snake_body.push_front(newseg);
	snake_body.pop_back();

}




void Snake::Grow() {}
bool Snake::Crash() { return 1; }