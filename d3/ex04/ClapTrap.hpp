#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
public:
  ClapTrap(void);
  ClapTrap(ClapTrap &);
  ClapTrap(const ClapTrap &);
  ~ClapTrap();
  ClapTrap &operator=(const ClapTrap &);
  ClapTrap &operator=(ClapTrap &);

  virtual void rangedAttack(std::string const &target) = 0;
  virtual void meleeAttack(std::string const &target) = 0;
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  void die(void);
  std::string getName(void);

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
