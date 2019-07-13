#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"


int main(void)
{
    Zombie      *z1;
    Zombie      *z2;
    ZombieEvent factory;

    factory.setZombieType("Doctor");
    z1 = factory.randomChump();
    z1->announce();
    factory.destroyZombie(z1);
    factory.setZombieType("The Leader");
    z2 = factory.newZombie("J");
    z2->announce();
    factory.destroyZombie(z2);
    return (0);
}
