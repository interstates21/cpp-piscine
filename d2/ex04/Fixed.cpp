#include "Fixed.hpp"
#include <iostream>
#include <cmath>
int Fixed::_f = 8;

Fixed::Fixed(void) : _r(0) {
    // std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(Fixed const& other)
{
    // std::cout << "Copy constructor called" << std::endl;
    this->_r = other.getRawBits();
    return ;
}
    
Fixed::~Fixed(void)
{
    // std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(const float n)
{
	// std::cout << "Float constructor called" << std::endl;

	this->_r = std::roundf(n * (1 << this->_f));
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;

	this->_r = n << this->_f;
}

Fixed&  Fixed::operator=(const Fixed& other)
{
    // std::cout << "Assignation operator called" << std::endl;
    _r = other.getRawBits();

    return *this;
}

int     Fixed::getRawBits(void) const
{  
	// std::cout << "getRawBits member function called" << std::endl;
    return _r;
}
void    Fixed::setRawBits(int const r) { _r = r; }

float Fixed::toFloat() const
{
	return ((float)this->_r / (1 << this->_f));
}

int Fixed::toInt() const
{
	return (this->_r >> this->_f);
}

bool Fixed::operator>(const Fixed &other) const
{
	return (this->_r > other.getRawBits());
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->_r < other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->_r >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->_r <= other.getRawBits());
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->_r == other.getRawBits());
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->_r != other.getRawBits());
}

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed	f;

	f.setRawBits(this->_r + other.getRawBits());

	return (f);
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed	f;

	f.setRawBits(this->_r - other.getRawBits());

	return (f);
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed	f;

	f.setRawBits((this->_r * other.getRawBits()) >> this->_f);

	return (f);
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed	f;

	f.setRawBits((this->_r << this->_f) / other.getRawBits());

	return (f);
}

Fixed& Fixed::operator++()
{
	this->_r++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	tmp;

	tmp = *this;
	this->_r++;

	return (tmp);
}

Fixed& Fixed::operator--()
{
	this->_r--;

	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp;

	tmp = *this;
	this->_r--;

	return (tmp);
}

Fixed& Fixed::min(Fixed &n, Fixed &m)
{
    return (n.getRawBits() > m.getRawBits() ? m : n);
}

const Fixed& Fixed::min(const Fixed& n, const Fixed& m)
{
	return (n.getRawBits() > m.getRawBits() ? m : n);
}


Fixed& Fixed::max(Fixed &n, Fixed &m)
{
    return (n.getRawBits() > m.getRawBits() ? n : m);
}

const Fixed&	Fixed::max(const Fixed& n, const Fixed& m)
{
	return (n.getRawBits() > m.getRawBits() ? n : m);
}


std::ostream&	operator<<(std::ostream& ostream, const Fixed& f)
{
	ostream << f.toFloat();

	return (ostream);
}
