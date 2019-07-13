#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

typedef struct s_list
{
	ISpaceMarine *elem;
	struct s_list *next;
} t_list;

class Squad : public ISquad
{
  private:
	int _count;
	t_list *_list;

  public:
	Squad(void);
	virtual ~Squad();
	Squad(const Squad &);
	Squad(Squad &);
	Squad &operator=(Squad &);
	Squad &operator=(const Squad &);

	virtual int getCount() const;
	virtual ISpaceMarine *getUnit(int) const;
	virtual int push(ISpaceMarine *);
};

#endif
