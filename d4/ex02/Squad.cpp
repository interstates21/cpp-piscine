#include "Squad.hpp"
#include <iostream>

Squad::Squad() : _count(0), _list(NULL)
{
	return;
};

Squad::~Squad()
{

	while (this->_list)
	{
		t_list *tmp = this->_list;
		delete this->_list->elem;
		delete this->_list;
		this->_list = tmp->next;
	}
	return;
};

Squad::Squad(Squad &other)
{
	*this = other;
}

Squad::Squad(const Squad &other)
{
	*this = other;
}

Squad &Squad::operator=(Squad &other)
{
	this->_count = other._count;
	this->_list = other._list;

	return *this;
}

Squad &Squad::operator=(const Squad &other)
{
	this->_count = other._count;
	this->_list = other._list;

	return *this;
}

int Squad::getCount() const
{
	return this->_count;
};

int Squad::push(ISpaceMarine *elem)
{
	if (this->_list == NULL)
	{
		this->_list = new t_list;
		this->_list->elem = elem;
		this->_list->next = NULL;
		this->_count += 1;
	}
	else
	{
		t_list *tmp = this->_list;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new t_list;
		tmp->next->elem = elem;
		tmp->next->next = NULL;
		this->_count += 1;
	}
	return this->_count;
};

ISpaceMarine *Squad::getUnit(int id) const
{

	if (id > this->_count)
		return NULL;
	int i = -1;
	t_list *tmp = this->_list;
	while (id < this->_count && ++i < id)
		tmp = tmp->next;
	return tmp->elem;
};
