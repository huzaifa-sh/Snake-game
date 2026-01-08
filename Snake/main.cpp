#include<SFML/Graphics.hpp>
#include"Constants.hpp"
#include"Grid.hpp"
#include"Snake.hpp"


sf::RenderWindow* window = new sf::RenderWindow(sf::VideoMode({ win_length, win_height }), "Snake");
Grid* grid1 = new Grid(window);
Snake* snake1 = new Snake(window);


int main() {


	while (window->isOpen()) {
	
	

                while (const std::optional event = window->pollEvent())
                {
                    if (event->is<sf::Event::Closed>())
                        window->close();
                }

				if(sf :: Keyboard :: isKeyPressed(sf :: Keyboard :: Key :: Escape) ) window->close();



				window->clear(win_color);

				grid1->Draw();
				snake1->Draw();

				window->display();







				
	}



}