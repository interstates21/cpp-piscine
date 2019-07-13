#ifndef ASAULT_TERMINATOR_H
#define ASAULT_TERMINATOR_H

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
  public:
	AssaultTerminator();
	virtual ~AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &);
	AssaultTerminator(AssaultTerminator &);
	AssaultTerminator &operator=(AssaultTerminator &);
	AssaultTerminator &operator=(const AssaultTerminator &);

	virtual AssaultTerminator *clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
};

#endif
