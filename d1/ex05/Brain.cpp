#include "Brain.hpp"
#include <sstream>

Brain::Brain() : _iq(100)
{
	return;
}

std::string Brain::identify() const
{
	std::stringstream s;

	s << this;
	return (s.str());
}

unsigned int Brain::getIq() const
{
	return (this->_iq);
}

void Brain::consumeGlicin()
{
	this->_iq += this->luck;
}
void Brain::consumeBeer()
{
	this->_iq -= this->luck;
}

int Brain::luck = 3;