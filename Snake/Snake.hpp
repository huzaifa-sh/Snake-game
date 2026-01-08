#pragma once
#include<vector>
#include"Constants.hpp"
#include<SFML/Graphics.hpp>

class Snake {

private:

	std :: vector<cord>snake_body;
	sf::RenderWindow * window;

	int size = 3;


public:

	Snake(sf :: RenderWindow * win);

	void Move();

	void Draw();

	void Crash();

	void Grow();

};