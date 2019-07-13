#ifndef POWER_FIST_HPP
#define POWER_FIST_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
  PowerFist(void);
  PowerFist(const PowerFist &);
  PowerFist(PowerFist &);
  PowerFist &operator=(PowerFist &);
  PowerFist &operator=(const PowerFist &);
  void attack() const;
  ~PowerFist();
};

std::ostream &operator<<(std::ostream &ostream, const PowerFist &w);
#endif