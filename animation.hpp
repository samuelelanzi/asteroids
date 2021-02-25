#ifndef ANIMATION_HPP
#define ANIMATION_HPP

#include <SFML/Graphics.hpp>
#include <vector>
#include <cmath>

class Animation {
public:
  float Frame;
  float speed;
  sf::Sprite sprite;
  std::vector<sf::IntRect> frames;

  Animation();
  Animation(sf::Texture &t, int x, int y, int w, int h, int count, float Speed);
  
  void update();
  bool isEnd();
};

#endif
