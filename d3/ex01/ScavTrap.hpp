#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <iostream>
#include <string>

class ScavTrap;

typedef void (ScavTrap::*challenge)(std::string const &target);

class ScavTrap
{
public:
  ScavTrap(void);
  ScavTrap(std::string);
  ScavTrap(ScavTrap &);
  ScavTrap(const ScavTrap &);
  ScavTrap &operator=(ScavTrap &);
  ScavTrap &operator=(const ScavTrap &);
  ~ScavTrap();

  void die(void);
  void rangedAttack(std::string const &target);
  void meleeAttack(std::string const &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  void challengeNewcomer(std::string const &target);
  static unsigned int const challengeCost;
  static challenge challenges[];

  void challengeA(std::string const &target);
  void challengeB(std::string const &target);
  void challengeC(std::string const &target);
  void challengeD(std::string const &target);
  void challengeE(std::string const &target);

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