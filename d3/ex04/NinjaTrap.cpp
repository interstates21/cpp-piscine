#include <ctime>
#include <cstdlib>
#include <iostream>
#include "NinjaTrap.hpp"

ninjaThing NinjaTrap::ninjaThings[] = {
    &NinjaTrap::ninjaThingA,
    &NinjaTrap::ninjaThingB,
    &NinjaTrap::ninjaThingC,
    &NinjaTrap::ninjaThingD,
    &NinjaTrap::ninjaThingE};

NinjaTrap::NinjaTrap(void)
{
    this->_name = "Invinsible";
    this->_hitPoints = 60;
    this->_maxHitPoints = 60;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_level = 1;
    this->_meleeAttackDamage = 60;
    this->_rangedAttackDamage = 5;
    this->_armorDamageReduction = 0;
    std::cout << this->_name << " I WILL BE HOKAGE! " << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
{
    this->_name = name;
    this->_hitPoints = 60;
    this->_maxHitPoints = 60;
    this->_energyPoints = 120;
    this->_maxEnergyPoints = 120;
    this->_level = 1;
    this->_meleeAttackDamage = 60;
    this->_rangedAttackDamage = 5;
    this->_armorDamageReduction = 0;
    std::cout << this->_name << " I WILL BE HOKAGE!" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap &other)
{
    *this = other;
    std::cout << this->_name << " I WILL BE HOKAGE!" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &other)
{
    /* = operator used */
    *this = other;
    std::cout << this->_name << " I WILL BE HOKAGE!" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << this->_name << ":: ~~~~~~~ The Tale of Jiraiya the Gallant. Now it'll end a bit better, I hope. The final chapter... I'll call it: Frog at the bottom of the well drifts of into the great ocean. Just barely glorious... But glorious indeed. Now I suppose it's about time I put down my pen. Oh, right... What should I name the sequel? I wonder... Let's see: The Tale of Naruto Uzumaki. Yes... That has a nice ring to it. " << std::endl;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap &other)
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

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &other)
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

void NinjaTrap::rangedAttack(std::string const &target)
{
    std::cout << "Ninja " + this->_name + " attacks " + target + " at range, ";
    std::cout << "causing " << this->_rangedAttackDamage << " points of damage !" << std::endl;
}
void NinjaTrap::meleeAttack(std::string const &target)
{
    std::cout << "Ninja " + this->_name + " attacks " + target + " with Bare Hands, ";
    std::cout << "causing " << this->_meleeAttackDamage << " points of damage !" << std::endl;
}

void NinjaTrap::ninjaThingA(std::string const &target)
{
    const int final = this->_energyPoints - NinjaTrap::ninjaThingCost;
    if (final < 0)
    {
        std::cout << "OUT OF ENERGY!" << std::endl;
        return;
    }
    this->_energyPoints = final;
    std::cout << "" + this->_name + " feeds " + target + " with Bring Me The Horizon, causing enormous damage!!! " << std::endl;
}

void NinjaTrap::ninjaThingB(std::string const &target)
{
    const int final = this->_energyPoints - NinjaTrap::ninjaThingCost;
    if (final < 0)
    {
        std::cout << "OUT OF ENERGY!" << std::endl;
        return;
    }
    this->_energyPoints = final;
    std::cout << "Ninja " + this->_name + " feeds " + target + " with Poisonous Ramen :() " << std::endl;
}

void NinjaTrap::ninjaThingC(std::string const &target)
{
    const int final = this->_energyPoints - NinjaTrap::ninjaThingCost;
    if (final < 0)
    {
        std::cout << "OUT OF ENERGY!" << std::endl;
        return;
    }
    this->_energyPoints = final;
    std::cout << "Ninja " + this->_name + " feeds " + target + " with Poisonous IceCream :()" << std::endl;
}

void NinjaTrap::ninjaThingD(std::string const &target)
{
    const int final = this->_energyPoints - NinjaTrap::ninjaThingCost;
    if (final < 0)
    {
        std::cout << "OUT OF ENERGY!" << std::endl;
        return;
    }
    this->_energyPoints = final;
    std::cout << "Ninja " + this->_name + " feeds " + target + " with Poisonous Rice Balls :()" << std::endl;
}

void NinjaTrap::ninjaThingE(std::string const &target)
{
    const int final = this->_energyPoints - NinjaTrap::ninjaThingCost;
    if (final < 0)
    {
        std::cout << " OUT OF ENERGY!" << std::endl;
        return;
    }
    this->_energyPoints = final;
    std::cout << "Ninja " + this->_name + " feeds " + target + " Poisonous Sake :()" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &targetInstance)
{
    std::string target;

    target = targetInstance.getName();
    (this->*ninjaThings[rand() % 5])(target);
    targetInstance.die();
}

unsigned int const NinjaTrap::ninjaThingCost = 25;