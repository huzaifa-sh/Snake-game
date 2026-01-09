#include"Snake.hpp"
#include<SFML/Graphics.hpp>
#include"Constants.hpp"

Snake::Snake(sf::RenderWindow* win) {

	Snake::window = win;

	for (int i = 0; i < size; i++) {

		Snake::snake_pos.push_back({ def_cell.x+i, def_cell.y });

	}
}


sf :: Vector2f Snake :: getcellcord_centre(sf::Vector2f idx) {

	float comp = margin + cellsize / 2;
	return sf :: Vector2f(idx.x*cellsize + comp , idx.y * cellsize + comp);


}




void Snake::Move(Direction dir) {

	snake_pos_old = snake_pos;

	if (dir == Direction::NONE) return;

	sf::Vector2f newseg(snake_pos[0].x , snake_pos[0].y);

	if (dir == Direction::UP) newseg.y -= 1;
	if (dir == Direction::DOWN)newseg.y += 1;
    if (dir == Direction::LEFT)newseg.x -= 1;
    if (dir == Direction::RIGHT)newseg.x += 1;

	snake_pos.push_front(newseg);
	snake_pos.pop_back();

}



void Snake::Draw(float & elapsed_time) {

	sf::CircleShape circle({ cellsize / 2 });
	circle.setOrigin({ cellsize / 2 , cellsize / 2 });







	
	if (elapsed_time >= delay_sec) elapsed_time = 0.f;
}



void Snake::Grow() {}
bool Snake::Crash() { return 1; }