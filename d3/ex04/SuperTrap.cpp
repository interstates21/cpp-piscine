#include <iostream>
#include "SuperTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

SuperTrap::SuperTrap()
{
    this->_name = "Sup";
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_level = 1;
    this->_meleeAttackDamage = 60;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;

    std::cout << this->_name + " says hey! " << std::endl;
}

SuperTrap::SuperTrap(std::string name)
{
    this->_name = name;
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_level = 1;
    this->_meleeAttackDamage = 60;
    this->_rangedAttackDamage = 20;
    this->_armorDamageReduction = 5;

    std::cout << this->_name + " says hey! " << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &superTrap)
{
    *this = superTrap;
    std::cout << this->_name + " says hey! " << std::endl;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &superTrap)
{
    this->_name = superTrap._name;
    this->_hitPoints = superTrap._hitPoints;
    this->_maxHitPoints = superTrap._maxHitPoints;
    this->_energyPoints = superTrap._energyPoints;
    this->_maxEnergyPoints = superTrap._maxEnergyPoints;
    this->_level = superTrap._level;
    this->_meleeAttackDamage = superTrap._meleeAttackDamage;
    this->_rangedAttackDamage = superTrap._rangedAttackDamage;
    this->_armorDamageReduction = superTrap._armorDamageReduction;

    return *this;
}

SuperTrap &SuperTrap::operator=(SuperTrap &superTrap)
{
    this->_name = superTrap._name;
    this->_hitPoints = superTrap._hitPoints;
    this->_maxHitPoints = superTrap._maxHitPoints;
    this->_energyPoints = superTrap._energyPoints;
    this->_maxEnergyPoints = superTrap._maxEnergyPoints;
    this->_level = superTrap._level;
    this->_meleeAttackDamage = superTrap._meleeAttackDamage;
    this->_rangedAttackDamage = superTrap._rangedAttackDamage;
    this->_armorDamageReduction = superTrap._armorDamageReduction;

    return *this;
}

SuperTrap::~SuperTrap()
{
    std::cout << this->_name << " Sayonara! " << std::endl;
}

void SuperTrap::meleeAttack(std::string const &target)
{
    FragTrap::meleeAttack(target);
}

void SuperTrap::rangedAttack(std::string const &target)
{
    NinjaTrap::rangedAttack(target);
}
