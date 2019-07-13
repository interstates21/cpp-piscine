#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
	return;
};

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back .." << std::endl;
	return;
};

AssaultTerminator::AssaultTerminator(AssaultTerminator &other)
{
	*this = other;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &other)
{
	*this = other;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator &other)
{
	(void)other;
	return *this;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
};

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
};

AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &other)
{
	(void)other;
	return *this;
}

AssaultTerminator *AssaultTerminator::clone() const
{
	return new AssaultTerminator(*this);
};

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT !”" << std::endl;
};
