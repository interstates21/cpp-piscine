#include <ctime>
#include <cstdlib>
#include <iostream>
#include "FragTrap.hpp"

specialAttack FragTrap::specialAttacks[] = {
	&FragTrap::specialAttackA,
	&FragTrap::specialAttackB,
	&FragTrap::specialAttackC,
	&FragTrap::specialAttackD,
	&FragTrap::specialAttackE};

FragTrap::FragTrap(void)
{
	this->_name = "Mystical Ass";
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 2;
	std::cout << this->_name << ":: FR4G-TP loading... Directive one: Protect humanity! Directive two: Obey Alex at all costs. Directive three: Dance!" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 2;
	std::cout << this->_name << ":: FR4G-TP loading... Directive one: Protect humanity! Directive two: Obey Alex at all costs. Directive three: Dance!" << std::endl;
}

FragTrap::FragTrap(FragTrap &other)
{
	*this = other;
	std::cout << this->_name << ":: FR4G-TP loading... Directive one: Protect humanity! Directive two: Obey Alex at all costs. Directive three: Dance!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	/* = operator used */
	*this = other;
	std::cout << this->_name << ":: FR4G-TP loading... Directive one: Protect humanity! Directive two: Obey Alex at all costs. Directive three: Dance!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << this->_name << ":: FR4G-TP ~~~~~~~ O-KAY! Thanks for giving me a second chance, God. I really appreciate it." << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap &other)
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

FragTrap &FragTrap::operator=(const FragTrap &other)
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

/* GAMEPLAY */

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " + this->_name + " attacks " + target + " at range, ";
	std::cout << "causing " << this->_rangedAttackDamage << " points of damage !" << std::endl;
}
void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " + this->_name + " attacks " + target + " with Bare Hands, ";
	std::cout << "causing " << this->_meleeAttackDamage << " points of damage !" << std::endl;
}

void FragTrap::specialAttackA(std::string const &target)
{
	const int final = this->_energyPoints - FragTrap::specialAttackCost;
	if (final < 0)
	{
		std::cout << "OUT OF ENERGY!" << std::endl;
		return;
	}
	this->_energyPoints = final;
	std::cout << "FR4G-TP " + this->_name + " attacks " + target + " with Bring Me The Horizon, causing enormous damage!!! " << std::endl;
}

void FragTrap::specialAttackB(std::string const &target)
{
	const int final = this->_energyPoints - FragTrap::specialAttackCost;
	if (final < 0)
	{
		std::cout << "FR4G-TP OUT OF ENERGY!" << std::endl;
		return;
	}
	this->_energyPoints = final;
	std::cout << "FR4G-TP " + this->_name + " attacks " + target + " with Johny Cash, causing enormous damage!!! " << std::endl;
}

void FragTrap::specialAttackC(std::string const &target)
{
	const int final = this->_energyPoints - FragTrap::specialAttackCost;
	if (final < 0)
	{
		std::cout << "FR4G-TP OUT OF ENERGY!" << std::endl;
		return;
	}
	this->_energyPoints = final;
	std::cout << "FR4G-TP " + this->_name + " attacks " + target + " with My Chemical Romance, causing enormous damage!!! " << std::endl;
}

void FragTrap::specialAttackD(std::string const &target)
{
	const int final = this->_energyPoints - FragTrap::specialAttackCost;
	if (final < 0)
	{
		std::cout << "FR4G-TP OUT OF ENERGY!" << std::endl;
		return;
	}
	this->_energyPoints = final;
	std::cout << "FR4G-TP " + this->_name + " attacks " + target + " with The Green Day, causing enormous damage!!! " << std::endl;
}

void FragTrap::specialAttackE(std::string const &target)
{
	const int final = this->_energyPoints - FragTrap::specialAttackCost;
	if (final < 0)
	{
		std::cout << " FR4G-TP OUT OF ENERGY!" << std::endl;
		return;
	}
	this->_energyPoints = final;
	std::cout << "FR4G-TP " + this->_name + " attacks " + target + " with 30 Seconds to Mars, causing enormous damage!!! " << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	(this->*specialAttacks[rand() % 5])(target);
}

unsigned int const FragTrap::specialAttackCost = 25;