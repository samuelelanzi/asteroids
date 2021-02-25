#ifndef ASTEROID_HPP
#define ASTEROID_HPP

#include "entity.hpp"

class asteroid : public Entity {
public:
  asteroid();
  void update() override;
};

#endif
