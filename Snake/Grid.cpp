#include"Grid.hpp"
#include"Constants.hpp"
#include<SFML/Graphics.hpp>

Grid::Grid(sf::RenderWindow* win) {

	window = win;

}

void Grid::Draw(){


	sf::VertexArray line(sf :: PrimitiveType :: Lines);

	for (float x = margin; x <= (win_length - margin); x += cellsize) {
	
	
		line.append(sf::Vertex({x,margin} , g_color));
		line.append(sf::Vertex({x,win_height-margin} , g_color));
	
	}

	for (float y = margin; y <= (win_height - margin); y += cellsize) {

		line.append(sf::Vertex({ margin,y }, g_color));
		line.append(sf::Vertex({ win_length - margin,y}, g_color));

	}

	window->draw(line);


}