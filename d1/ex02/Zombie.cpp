#include "Zombie.hpp"
#include <iostream> 
#include <string>

Zombie::Zombie(std::string n, std::string t) : _name(n), _type(t) {
    std::cout << this->_name << " is waking up! " << std::endl;

    return ;
}

Zombie::~Zombie() {
    std::cout << this->_name << " is collapsing! " << std::endl;

    return ;
}

void Zombie::announce( void ) {
    std::cout << "<" << this->_name << " ( " << this->_type
    << " )>" << " Braaaaaaaaaaiiiiinss..." << std::endl;
}

void Zombie::setName( std::string n ) {
    this->_name = n;
}
void Zombie::setType( std::string t ) {
    this->_type = t;
}

std::string Zombie::getName ( void ) {
    return (this->_name);
}

std::string Zombie::getType ( void ) {
    return (this->_type);
}