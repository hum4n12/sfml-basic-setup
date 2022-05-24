#pragma once
#include "SFML/Graphics.hpp"

class GameObject
{
public:
	GameObject(int x, int y, sf::Shape* shape);
	GameObject(int x, int y, sf::Shape* shape, sf::Texture* texture);
	GameObject(int x, int y, sf::Shape* shape, sf::Texture* texture,sf::IntRect rect);
	virtual void update(double delta) = 0;
	virtual void draw(sf::RenderWindow* screen);
	virtual ~GameObject();
private:
	int x;
	int y;
	sf::Sprite sprite;
	sf::IntRect rect;
	sf::Shape* shape = nullptr;
	sf::Texture* texture = nullptr;
};
