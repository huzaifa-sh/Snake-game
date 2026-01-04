#include<SFML/Graphics.hpp>
#include"Constants.hpp"
#include"Grid.hpp"


sf::RenderWindow* window = new sf::RenderWindow(sf::VideoMode({ win_length, win_height }), "Snake");
Grid* grid1 = new Grid(window);


int main() {


	while (window->isOpen()) {
	
	

                while (const std::optional event = window->pollEvent())
                {
                    if (event->is<sf::Event::Closed>())
                        window->close();
                }

				if(sf :: Keyboard :: isKeyPressed(sf :: Keyboard :: Key :: Escape) ) window->close();



				window->clear();

				grid1->Draw();

				window->display();





	}









}