#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream> 
#include <string>

ZombieEvent::ZombieEvent(std::string t): _zombieType(t) {
    std::cout << "@@@@ZombieEvent to your service, sir ! " << std::endl;
    return ;
}

ZombieEvent::ZombieEvent( void ): _zombieType("Mystical Fellow") {
    std::cout << "@@@@ZombieEvent to your service, sir ! " << std::endl;

    return ;
}

ZombieEvent::~ZombieEvent() {
    std::cout <<  "@@@@ZombieEvent destructs ! " << std::endl;

    return ;
}


void ZombieEvent::setZombieType( std::string t ) {
    this->_zombieType = t;

    return ;
}

Zombie *ZombieEvent::newZombie ( std::string n ) {

    Zombie  *z;

    z = new Zombie(n, this->_zombieType);
    return ( z );
} 

Zombie *ZombieEvent::randomChump ( void ) {

    Zombie      *z;
    std::string n;

    std::string pool[5] = {"Ray", "Raven", "Scott", "Matt", "Io"};
    n = pool[rand() % 5];
    z = this->newZombie(n);
    return ( z );
}