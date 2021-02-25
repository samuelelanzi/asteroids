#include "entity.hpp"

Entity::Entity() : life{true} { }

void Entity::update() { }

void Entity::draw(sf::RenderWindow &app) 
{
  anim.sprite.setPosition(x, y);
  anim.sprite.setRotation(angle + 90);
  app.draw(anim.sprite);

  sf::CircleShape circle(R);
  circle.setFillColor(sf::Color(255, 0, 0, 170));
  circle.setPosition(x, y);
	circle.setOrigin(R, R);
	//app.draw(circle);
}

Entity::~Entity() { };
