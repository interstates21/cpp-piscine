#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap;

typedef void (FragTrap::*specialAttack)(std::string const &target);

class FragTrap : public ClapTrap
{
public:
  FragTrap(void);
  FragTrap(std::string);
  FragTrap(FragTrap &);
  FragTrap(const FragTrap &);
  FragTrap &operator=(FragTrap &);
  FragTrap &operator=(const FragTrap &);
  ~FragTrap();

  void rangedAttack(std::string const &target);
  void meleeAttack(std::string const &target);
  void vaulthunter_dot_exe(std::string const &target);
  static unsigned int const specialAttackCost;
  static specialAttack specialAttacks[];

  void specialAttackA(std::string const &target);
  void specialAttackB(std::string const &target);
  void specialAttackC(std::string const &target);
  void specialAttackD(std::string const &target);
  void specialAttackE(std::string const &target);
};

#endif