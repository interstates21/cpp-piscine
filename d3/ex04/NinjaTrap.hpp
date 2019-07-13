#ifndef NINJA_TRAP_HPP
#define NINJA_TRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class NinjaTrap;

typedef void (NinjaTrap::*ninjaThing)(std::string const &target);

class NinjaTrap : public virtual ClapTrap
{
public:
  NinjaTrap(void);
  NinjaTrap(std::string);
  NinjaTrap(NinjaTrap &);
  NinjaTrap(const NinjaTrap &);
  NinjaTrap &operator=(NinjaTrap &);
  NinjaTrap &operator=(const NinjaTrap &);
  ~NinjaTrap();

  void rangedAttack(std::string const &target);
  virtual void meleeAttack(std::string const &target);
  virtual void ninjaShoebox(ClapTrap &);
  static unsigned int const ninjaThingCost;
  static ninjaThing ninjaThings[];

  void ninjaThingA(std::string const &target);
  void ninjaThingB(std::string const &target);
  void ninjaThingC(std::string const &target);
  void ninjaThingD(std::string const &target);
  void ninjaThingE(std::string const &target);
};

#endif