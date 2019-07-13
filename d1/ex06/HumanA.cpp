#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string const s, Weapon &w) :  _w(w), _name(s)
{
	return;
}

HumanA::~HumanA() {
	return;
}

void HumanA::attack() {
	std::cout << this->_name << " attacks with his " << this->_w.getType() << std::endl; 
}