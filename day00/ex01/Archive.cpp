#include "Archive.hpp"

Archive::Archive(void)
{
	this->notes = new Note[8];
	this->index = 0;
	return ;
};

Archive::~Archive(void)
{
	delete [] this->notes;
	return ;
};

void	Archive::addNote()
{
	if (this->index > 8)
	{
		std::cout << "The limit of Survivals has been reached. ";
		return ;
	}
	notes[index] = new Note();
};

void	Archive::searchNote(int index)
{
	for (int i = 0; i < 8; i++)
	{
		if (i == index)
			Note[i].displayData;
	}
};
