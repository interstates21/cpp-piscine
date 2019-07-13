#include <ctime>
#include <cstdlib>
#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Fabric for your Service!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
    *this = clapTrap;

    std::cout << "ClapTrap Copy Fabric for your Service!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "~~~~~~~~ClapTrap Fabric is out of Service! " << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap &other)
{
    /* = operator described */
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_maxHitPoints = other._maxHitPoints;
    this->_energyPoints = other._energyPoints;
    this->_maxEnergyPoints = other._maxEnergyPoints;
    this->_level = other._level;
    this->_meleeAttackDamage = other._meleeAttackDamage;
    this->_rangedAttackDamage = other._rangedAttackDamage;
    this->_armorDamageReduction = other._armorDamageReduction;

    return *this;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    /* = operator described */
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_maxHitPoints = other._maxHitPoints;
    this->_energyPoints = other._energyPoints;
    this->_maxEnergyPoints = other._maxEnergyPoints;
    this->_level = other._level;
    this->_meleeAttackDamage = other._meleeAttackDamage;
    this->_rangedAttackDamage = other._rangedAttackDamage;
    this->_armorDamageReduction = other._armorDamageReduction;

    return *this;
}

void ClapTrap::die(void)
{
    std::cout << this->_name << ":: has been exterminated ;(" << std::endl;
    return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    int final = this->_hitPoints -= (amount - this->_armorDamageReduction);

    if (final <= 0)
    {
        this->_hitPoints = 0;
        this->die();
        return;
    }

    this->_hitPoints = final;
    std::cout << this->_name << " takes " << amount
              << " amount of damage. Defence: " << this->_armorDamageReduction << ". Current HitPoint: " << this->_hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    const unsigned int final = this->_hitPoints + amount;
    const unsigned int oldHitPoints = this->_hitPoints;
    if (final >= this->_maxHitPoints)
        this->_hitPoints = this->_maxHitPoints;
    else
        this->_hitPoints = final;
    std::cout << this->_name + " repairs ";
    std::cout << (this->_hitPoints - oldHitPoints) << " Life Points. " << std::endl;
}