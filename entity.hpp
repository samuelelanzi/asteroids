#ifndef ENTITY_HPP
#define ENTITY_HPP

#include "animation.hpp"

constexpr float DEGTORAD = 0.017453f;
constexpr int W = 1200;
constexpr int H = 800;

class Entity {
public:
  float x, y, dx, dy, R, angle;
  bool life;
  std::string name;
  Animation anim;

  Entity();

  void settings(Animation &a, int X, int Y, float Angle = 0., int radius = 1) 
  {
		anim = a;
  	x = X;
  	y = Y;
  	angle = Angle;
  	R = radius;
	}

  virtual void update();

  void draw(sf::RenderWindow &app);

  virtual ~Entity();
};

#endif
