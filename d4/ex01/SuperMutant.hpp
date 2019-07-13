#ifndef SUPER_MUTANT_HPP
#define SUPER_MUTANT_HPP

#include <iostream>
#include <string>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
  SuperMutant(void);
  SuperMutant(const SuperMutant &);
  SuperMutant(SuperMutant &);
  SuperMutant &operator=(SuperMutant &);
  SuperMutant &operator=(const SuperMutant &);
  void takeDamage(int);
  ~SuperMutant();
};

std::ostream &operator<<(std::ostream &ostream, const SuperMutant &w);
#endif