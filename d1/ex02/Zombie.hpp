#ifndef  ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
    public:

        Zombie( std::string, std::string );
        ~Zombie();
        void announce( void );
        void setName( std::string );
        void setType ( std::string );
        
        std::string getName( void );
        std::string getType( void );
    
    private:

        std::string _name;
        std::string _type;
};

#endif