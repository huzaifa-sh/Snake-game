#include<SFML/Graphics.hpp>
#include"Constants.hpp"
#include"Grid.hpp"
#include"Snake.hpp"


sf::RenderWindow* window = new sf::RenderWindow(sf::VideoMode({ win_length, win_height }), "Snake");
Grid* grid1 = new Grid(window);
Snake* snake1 = new Snake(window);

Direction dir = Direction :: NONE;


int main() {


	while (window->isOpen()) {
	
	

                while (const std::optional event = window->pollEvent())
                {
                    if (event->is<sf::Event::Closed>())
                        window->close();
                }

				if(sf :: Keyboard :: isKeyPressed(sf :: Keyboard :: Key :: Escape) ) window->close();

			
				     if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up) || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))    dir = Direction::UP;
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) dir = Direction::RIGHT;
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))  dir = Direction::LEFT;
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down) || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))  dir = Direction::DOWN;


				window->clear(win_color);

				grid1->Draw();
				snake1->Draw();
				snake1->Move(dir);

				window->display();
				
	}



}