#include <ctime>
#include <cstdlib>
#include <iostream>
#include "ScavTrap.hpp"

challenge ScavTrap::challenges[] = {
    &ScavTrap::challengeA,
    &ScavTrap::challengeB,
    &ScavTrap::challengeC,
    &ScavTrap::challengeD,
    &ScavTrap::challengeE};

ScavTrap::ScavTrap(void) : _name("Secret Warrior"),
                           _hitPoints(100),
                           _maxHitPoints(100),
                           _energyPoints(50),
                           _maxEnergyPoints(50),
                           _level(1),
                           _meleeAttackDamage(20),
                           _rangedAttackDamage(15),
                           _armorDamageReduction(3)
{
    std::cout << this->_name << ":: Booting sequence complete. Hello! I am your new steward bot. Designation: SC4V-TP, Hyperion Robot, Class C. Please adjust factory settings to meet your needs before deployment" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _name(name),
                                       _hitPoints(100),
                                       _maxHitPoints(100),
                                       _energyPoints(50),
                                       _maxEnergyPoints(50),
                                       _level(1),
                                       _meleeAttackDamage(20),
                                       _rangedAttackDamage(15),
                                       _armorDamageReduction(3)
{
    std::cout << this->_name << ":: Booting sequence complete. Hello! I am your new steward bot. Designation: SC4V-TP, Hyperion Robot, Class C. Please adjust factory settings to meet your needs before deployment" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &other)
{
    *this = other;
    std::cout << this->_name << ":: Booting sequence complete. Hello! I am your new steward bot. Designation: SC4V-TP, Hyperion Robot, Class C. Please adjust factory settings to meet your needs before deployment" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    /* = operator used */
    *this = other;
    std::cout << this->_name << ":: Booting sequence complete. Hello! I am your new steward bot. Designation: SC4V-TP, Hyperion Robot, Class C. Please adjust factory settings to meet your needs before deployment" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap &other)
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

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
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

ScavTrap::~ScavTrap()
{
    std::cout << this->_name << ":: SC4V-TP ~~~~~~~ PAIN IS INAVITABLE." << std::endl;
}

/* GAMEPLAY */

void ScavTrap::die(void)
{
    std::cout << this->_name << " :: SC4V-TP HAS BEEN KILLED ;(" << std::endl;
    return;
}
void ScavTrap::takeDamage(unsigned int amount)
{
    int final = this->_hitPoints -= (amount - this->_armorDamageReduction);

    if (final <= 0)
    {
        this->_hitPoints = 0;
        this->die();
        return;
    }

    this->_hitPoints = final;
    std::cout << this->_name << " SC4V-TP takes " << amount
              << " amount of damage. Defence: " << this->_armorDamageReduction << ". Current HitPoint: " << this->_hitPoints << std::endl;
}

void ScavTrap::rangedAttack(std::string const &target)
{
    std::cout << "SC4V-TP " + this->_name + " attacks " + target + " at range, ";
    std::cout << "causing " << this->_rangedAttackDamage << " points of damage !" << std::endl;
}
void ScavTrap::meleeAttack(std::string const &target)
{
    std::cout << "SC4V-TP " + this->_name + " attacks " + target + " with Bare Hands, ";
    std::cout << "causing " << this->_meleeAttackDamage << " points of damage !" << std::endl;
}

void ScavTrap::challengeA(std::string const &target)
{
    const int final = this->_energyPoints - ScavTrap::challengeCost;
    if (final < 0)
    {
        std::cout << "OUT OF ENERGY!" << std::endl;
        return;
    }
    this->_energyPoints = final;
    std::cout << "SC4V-TP " + this->_name + " challenges " + target + " to do homework. " << std::endl;
}

void ScavTrap::challengeB(std::string const &target)
{
    const int final = this->_energyPoints - ScavTrap::challengeCost;
    if (final < 0)
    {
        std::cout << "OUT OF ENERGY!" << std::endl;
        return;
    }
    this->_energyPoints = final;
    std::cout << "SC4V-TP " + this->_name + " challenges " + target + " to go to school. " << std::endl;
}

void ScavTrap::challengeC(std::string const &target)
{
    const int final = this->_energyPoints - ScavTrap::challengeCost;
    if (final < 0)
    {
        std::cout << "OUT OF ENERGY!" << std::endl;
        return;
    }
    this->_energyPoints = final;
    std::cout << "SC4V-TP " + this->_name + " challenges " + target + " to clean his room. " << std::endl;
}

void ScavTrap::challengeD(std::string const &target)
{
    const int final = this->_energyPoints - ScavTrap::challengeCost;
    if (final < 0)
    {
        std::cout << "OUT OF ENERGY!" << std::endl;
        return;
    }
    this->_energyPoints = final;
    std::cout << "SC4V-TP " + this->_name + " challenges " + target + " to clean the dishes. " << std::endl;
}

void ScavTrap::challengeE(std::string const &target)
{
    const int final = this->_energyPoints - ScavTrap::challengeCost;
    if (final < 0)
    {
        std::cout << "OUT OF ENERGY!" << std::endl;
        return;
    }
    this->_energyPoints = final;
    std::cout << "SC4V-TP " + this->_name + " challenges " + target + " to get married. " << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    const unsigned int final = this->_hitPoints + amount;
    const unsigned int oldHitPoints = this->_hitPoints;
    if (final >= this->_maxHitPoints)
        this->_hitPoints = this->_maxHitPoints;
    else
        this->_hitPoints = final;
    std::cout << "SC4V-TP " + _name + " repairs ";
    std::cout << (this->_hitPoints - oldHitPoints) << " Life Points. " << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const &target)
{
    (this->*challenges[rand() % 5])(target);
}

unsigned int const ScavTrap::challengeCost = 25;