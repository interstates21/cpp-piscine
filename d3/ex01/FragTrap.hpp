#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include <iostream>
#include <string>

class FragTrap;

typedef void (FragTrap::*specialAttack)(std::string const &target);

class FragTrap
{
public:
  FragTrap(void);
  FragTrap(std::string);
  FragTrap(FragTrap &);
  FragTrap(const FragTrap &);
  FragTrap &operator=(FragTrap &);
  FragTrap &operator=(const FragTrap &);
  ~FragTrap();

  void die(void);
  void rangedAttack(std::string const &target);
  void meleeAttack(std::string const &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  void vaulthunter_dot_exe(std::string const &target);
  static unsigned int const specialAttackCost;
  static specialAttack specialAttacks[];

  void specialAttackA(std::string const &target);
  void specialAttackB(std::string const &target);
  void specialAttackC(std::string const &target);
  void specialAttackD(std::string const &target);
  void specialAttackE(std::string const &target);

protected:
  std::string _name;
  unsigned int _hitPoints;
  unsigned int _maxHitPoints;
  unsigned int _energyPoints;
  unsigned int _maxEnergyPoints;
  unsigned int _level;
  unsigned int _meleeAttackDamage;
  unsigned int _rangedAttackDamage;
  unsigned int _armorDamageReduction;
};

#endif