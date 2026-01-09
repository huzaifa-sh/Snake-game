#pragma once
#include<deque>
#include"Constants.hpp"
#include<SFML/Graphics.hpp>

class Snake {

private:

	std :: deque<sf :: Vector2f>snake_pos;
	std::deque<sf::Vector2f>snake_pos_old;

	sf::RenderWindow * window;

	int size = def_size_s;


public:

	Snake(sf :: RenderWindow * win);

	sf :: Vector2f getcellcord_centre(sf :: Vector2f idx);

	void Move(Direction dir);

	void Draw(float & elapsed_time);

	bool Crash();

	void Grow();

};