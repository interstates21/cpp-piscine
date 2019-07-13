#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
private:
	Weapon 				&_w;
	std::string const	_name;
public:
	HumanA(std::string const, Weapon &);
	~HumanA();
	void	attack();
};

#endif