#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
private:
	Weapon 			*_w;
	std::string const	_name;
public:
	HumanB(std::string const);
	~HumanB();
	void	setWeapon(Weapon &newWeapon);
	void	attack();
};

#endif