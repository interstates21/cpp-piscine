#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string const s) : _name(s)
{
	Weapon bareHands("Bare Hands");
	this->_w = &bareHands;
	return;
}

HumanB::~HumanB() {
	return;
}

void HumanB::setWeapon(Weapon &newWeapon) {
	this->_w = &newWeapon;
}

void HumanB::attack() {
	std::cout << this->_name << " attacks with his " << this->_w->getType() << std::endl; 
}