#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap;

typedef void (ScavTrap::*challenge)(std::string const &target);

class ScavTrap : public ClapTrap
{
public:
  ScavTrap(void);
  ScavTrap(std::string);
  ScavTrap(ScavTrap &);
  ScavTrap(const ScavTrap &);
  ScavTrap &operator=(ScavTrap &);
  ScavTrap &operator=(const ScavTrap &);
  ~ScavTrap();

  void rangedAttack(std::string const &target);
  void meleeAttack(std::string const &target);
  void challengeNewcomer(std::string const &target);
  static unsigned int const challengeCost;
  static challenge challenges[];

  void challengeA(std::string const &target);
  void challengeB(std::string const &target);
  void challengeC(std::string const &target);
  void challengeD(std::string const &target);
  void challengeE(std::string const &target);
};

#endif