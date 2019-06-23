#include <iostream>
#include "Tower.class.hpp"

Tower::Tower( char block ) {
    this->block = block;
    return ;
}

Tower::~Tower( ) {
    this->block = '0';
    return ;
}

void    Tower::build( void )
{
    for (int i = 0; i < this->height; i++) {
        std::cout << this->block << std::endl;
    }

    return ;
}
