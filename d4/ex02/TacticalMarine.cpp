#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
	return;
};

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ..." << std::endl;
	return;
};

TacticalMarine::TacticalMarine(TacticalMarine &other)
{
	*this = other;
}

TacticalMarine::TacticalMarine(const TacticalMarine &other)
{
	*this = other;
}

TacticalMarine &TacticalMarine::operator=(TacticalMarine &other)
{
	(void)other;
	return *this;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with bolter *" << std::endl;
};

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with chainsword *" << std::endl;
};

TacticalMarine &TacticalMarine::operator=(const TacticalMarine &other)
{
	(void)other;
	return *this;
}

TacticalMarine *TacticalMarine::clone() const
{
	return new TacticalMarine(*this);
};

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT !" << std::endl;
};
