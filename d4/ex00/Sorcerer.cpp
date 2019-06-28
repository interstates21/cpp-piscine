#include <iostream>
#include <string>
#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
    std::cout << name << ', ' << title << ", is born !";
    return;
}

Sorcerer::~Sorcerer(void)
{
    std::cout << this->_name << ', ' << this->_title << ", is dead. Consequences will never be the same !";
    return;
}

Sorcerer::introduce(void)
{
    std::cout << "I am " << this->_name << ", " << this->_title << ", and I like ponies !";
}

Sorcerer::operator=(Sorcerer &other)
{
    this->_name = other._name;
    this->_title = other._title;
    return (*this);
}

Sorcerer &Sorcerer::operator=(const Sorcerer &other)
{
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