#include "bullet.hpp"

bullet::bullet() { name = "bullet"; }

void bullet::update()
{
	dx = std::cos(angle * DEGTORAD) * 6;
  dy = std::sin(angle * DEGTORAD) * 6;
  // angle += rand() % 6 - 3;
  x += dx;
  y += dy;

  if (x > W || x < 0 || y > H || y < 0) {
  	life = 0;
  }
}
