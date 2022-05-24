#include "GameController.h"
#include <iostream>


GameController::GameController(sf::RenderWindow* window) : window(window)
{

}

void GameController::events()
{
	sf::Event event;
	while (this->window->pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			this->window->close();
		}
	}
}

void GameController::init()
{
	this->shape = new sf::CircleShape(100.0f);
	this->shape->setFillColor(sf::Color::Green);
}

void GameController::update(double delta)
{
	this->events();
	for (auto &obj : gameObjects) {
		obj.update(delta);
	}
}

void GameController::draw()
{
	this->window->clear();
	this->window->draw(*this->shape);
	window->display();
}