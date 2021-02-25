#ifndef BULLET_HPP
#define BULLET_HPP

#include "entity.hpp"

class bullet : public Entity {
public:
  bullet();
  void update() override;
};

#endif
