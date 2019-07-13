#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class Human
{
private:
	const Brain _brain;

public:
	Human();
	const Brain &getBrain() const;
	std::string identify() const;
};

#endif
