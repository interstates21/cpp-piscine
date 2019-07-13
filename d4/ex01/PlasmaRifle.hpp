#ifndef PLASMA_RIFLE_HPP
#define PLASMA_RIFLE_HPP

#include <iostream>
#include <string>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
  PlasmaRifle(void);
  PlasmaRifle(const PlasmaRifle &);
  PlasmaRifle(PlasmaRifle &);
  PlasmaRifle &operator=(PlasmaRifle &);
  PlasmaRifle &operator=(const PlasmaRifle &);
  void attack() const;
  ~PlasmaRifle();
};

std::ostream &operator<<(std::ostream &ostream, const PlasmaRifle &w);
#endif