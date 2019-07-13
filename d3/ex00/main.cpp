#include <iostream>
#include "FragTrap.hpp"

int main(void)
{
    FragTrap a;
    FragTrap b("Jeremy");

    a.takeDamage(20);
    a.takeDamage(50);
    a.takeDamage(100);
    std::cout << std::endl;
    b.takeDamage(50);
    b.beRepaired(60);
    std::cout << std::endl;
    b.meleeAttack("evil rosyanka");
    b.rangedAttack("evil rosyanka");
    b.vaulthunter_dot_exe("evil rosyanka");
    b.vaulthunter_dot_exe("evil rosyanka");
    return 0;
}