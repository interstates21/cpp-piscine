#ifndef  ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

#include <iostream> 
#include <string>

class ZombieEvent {
    public:
            ZombieEvent( std::string );
            ZombieEvent( void );
            ~ZombieEvent( void );
        void    setZombieType( std::string );
        Zombie *newZombie( std::string ); 
        Zombie *randomChump( void ); 

    private:

        std::string _zombieType;

};

#endif