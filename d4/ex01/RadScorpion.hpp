#ifndef RAD_SCORPION_HPP
#define RAD_SCORPION_HPP

#include <iostream>
#include <string>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
  RadScorpion();
  RadScorpion(const RadScorpion &);
  RadScorpion(RadScorpion &);
  RadScorpion &operator=(RadScorpion &);
  RadScorpion &operator=(const RadScorpion &);
  ~RadScorpion();
};

std::ostream &operator<<(std::ostream &ostream, const RadScorpion &w);
#endif