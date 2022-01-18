#include "GameObject.h"

using namespace gobj;

GameObject::GameObject(int x, int y, sf::Shape* shape) : x(x), y(y), shape(shape)
{

}

GameObject::GameObject(int x, int y, sf::Shape* shape,sf::Texture* texture) : x(x), y(y), shape(shape), texture(texture)
{

}

GameObject::GameObject(int x, int y, sf::Shape* shape, sf::Texture* texture,sf::IntRect rect) : x(x), y(y), shape(shape), texture(texture),rect(rect)
{
	this->sprite.setTexture(*texture);
	this->sprite.setTextureRect(rect);
}

void GameObject::draw(sf::RenderWindow* screen)
{
	if (this->texture != nullptr)
	{
		screen->draw(this->sprite);
	}
	else
	{
		screen->draw(*this->shape);
	}
}

GameObject::~GameObject()
{

}
