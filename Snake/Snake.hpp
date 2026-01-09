#pragma once
#include<deque>
#include"Constants.hpp"
#include<SFML/Graphics.hpp>

class Snake {

private:

	std :: deque<sf :: Vector2f>snake_body;
	sf::RenderWindow * window;

	int size = def_size_s;


public:

	Snake(sf :: RenderWindow * win);

	sf :: Vector2f get_cell_cord(sf :: Vector2f idx);

	void Move(Direction dir);

	void Draw();

	bool Crash();

	void Grow();

};