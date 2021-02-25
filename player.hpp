#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "entity.hpp"

class player : public Entity {
public:
  bool thrust;

  player();
  void update() override;
};

#endif
