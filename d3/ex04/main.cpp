#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
    // FragTrap a;
    // FragTrap b("Jeremy");

    // a.takeDamage(20);
    // a.takeDamage(50);
    // a.takeDamage(100);
    // std::cout << std::endl;
    // b.takeDamage(50);
    // b.beRepaired(60);
    // std::cout << std::endl;
    // b.meleeAttack("evil rosyanka");
    // b.rangedAttack("evil rosyanka");
    // b.vaulthunter_dot_exe("evil rosyanka");
    // b.vaulthunter_dot_exe("evil rosyanka");

    // ScavTrap d("Amy");
    // ScavTrap e = d;
    // ScavTrap f(e);
    // d.meleeAttack("big cactus");
    // d.challengeNewcomer("newcommer");
    // d.challengeNewcomer("newcommer");
    // d.challengeNewcomer("newcommer");

    SuperTrap s("Playful Light");
    ScavTrap scap("Pain");
    s.meleeAttack("Darkness");
    s.rangedAttack("Despair");
    s.ninjaShoebox(scap);
    std::cout << std::endl;

    return 0;
}