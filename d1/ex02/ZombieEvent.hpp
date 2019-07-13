#ifndef  ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent {
    public:
            ZombieEvent( std::string );
            ZombieEvent( void );
            ~ZombieEvent( void );
        void    setZombieType( std::string );
        Zombie *newZombie( std::string ); 
        Zombie *randomChump( void );
        void   destroyZombie ( Zombie *);

    private:

        std::string _zombieType;

};

#endif