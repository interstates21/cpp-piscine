#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"


int main(void)
{
    Zombie      *z1;
    Zombie      *z2;
    ZombieEvent factory;

    factory.setZombieType("Flying Y");
    z1 = factory.randomChump();
    z1->announce();
    delete z1;
    factory.setZombieType("Doctor");
    z2 = factory.newZombie("The Leader");
    z2->announce();
    delete z2;
    return (0);
}
