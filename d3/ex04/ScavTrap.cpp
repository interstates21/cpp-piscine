#include <ctime>
#include <cstdlib>
#include <iostream>
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

challenge ScavTrap::challenges[] = {
    &ScavTrap::challengeA,
    &ScavTrap::challengeB,
    &ScavTrap::challengeC,
    &ScavTrap::challengeD,
    &ScavTrap::challengeE};

ScavTrap::ScavTrap(void)
{
    this->_name = "Secret Warrior";
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_level = 1;
    this->_meleeAttackDamage = 20;
    this->_rangedAttackDamage = 15;
    this->_armorDamageReduction = 3;
    std::cout
        << this->_name << ":: Booting sequence complete. Hello! I am your new steward bot. Designation: SC4V-TP, Hyperion Robot, Class C. Please adjust factory settings to meet your needs before deployment" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->_name = name;
    this->_hitPoints = 100;
    this->_maxHitPoints = 100;
    this->_energyPoints = 50;
    this->_maxEnergyPoints = 50;
    this->_level = 1;
    this->_meleeAttackDamage = 20;
    this->_rangedAttackDamage = 15;
    this->_armorDamageReduction = 3;
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

void ScavTrap::challengeNewcomer(std::string const &target)
{
    (this->*challenges[rand() % 5])(target);
}

unsigned int const ScavTrap::challengeCost = 25;