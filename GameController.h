#pragma once
#include "SFML/Graphics.hpp"
#include <vector>
#include "GameObject.h"

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
	std::vector<GameObject> gameObjects;
	void events();
};