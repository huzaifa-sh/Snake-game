#pragma once
#include<SFML/Graphics.hpp>

const unsigned int win_length = 800;
const unsigned int win_height = 600;

const float cellsize = 25.f;
const float margin = 50.f;

const float cell_x = (win_length - 2 * margin)/cellsize;
const float cell_y = (win_height - 2 * margin)/cellsize;


const sf::Color g_color = sf::Color::White;
const sf::Color win_color = sf::Color::Black;
const sf::Color s_color = sf::Color::Green;



enum class Direction {

	UP,
	DOWN,
	RIGHT,
	LEFT

};


struct cord {

	float x;
	float y;

};
