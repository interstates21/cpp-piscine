#ifndef  ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieHorde {
    public:
            ZombieHorde( int n );
            ~ZombieHorde( void );
        void    setZombieType( std::string );
        Zombie *newZombie( std::string ); 
        Zombie *randomChump( void ); 
        void 	announce(void);

    private:

        std::string _zombieType;
        int 		_size;
		Zombie 		*_zombies;

};

#endif

