#include "Fixed.hpp"
#include <iostream>

int Fixed::_f = 8;

Fixed::Fixed(void) : _r(0) {
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(Fixed const& other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_r = other.getRawBits();
    return ;
}
    
Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed&  Fixed::operator=(const Fixed& other)
{
    std::cout << "Assignation operator called" << std::endl;
    _r = other.getRawBits();

    return *this;
}

int     Fixed::getRawBits(void) const
{  
	std::cout << "getRawBits member function called" << std::endl;
    return _r;
}
void    Fixed::setRawBits(int const r) { _r = r; }