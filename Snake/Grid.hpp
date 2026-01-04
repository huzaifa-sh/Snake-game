#pragma once 

#include<SFML/Graphics.hpp>

class Grid {

private:

	sf ::  RenderWindow* window = nullptr;



public :

	Grid(sf::RenderWindow* win);

	void Draw();


};