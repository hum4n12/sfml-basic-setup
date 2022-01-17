#pragma once
#include "SFML/Graphics.hpp"
namespace gc
{

	class GameController
	{
	public:
		GameController(sf::RenderWindow* window);
		void init();
		void update(double delta);
		void draw();
	private:
		sf::RenderWindow* window = nullptr;
		sf::CircleShape* shape = nullptr;
		void events();
	};


}