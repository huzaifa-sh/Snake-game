#pragma once
#include<vector>
#include<SFML/Graphics.hpp>

struct body{

	int x;
	int y;

};

class Snake {

private:

	std :: vector<body>snake;
	sf::RenderWindow * window;


public:

	Snake(sf :: RenderWindow * win);


};