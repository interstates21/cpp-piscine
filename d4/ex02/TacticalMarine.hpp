#ifndef TACTICAL_MARINE_H
#define TACTICAL_MARINE_H

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
  public:
	TacticalMarine();
	virtual ~TacticalMarine();
	TacticalMarine(const TacticalMarine &);
	TacticalMarine(TacticalMarine &);
	TacticalMarine &operator=(TacticalMarine &);
	TacticalMarine &operator=(const TacticalMarine &);

	virtual TacticalMarine *clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};

#endif
