
#include "Archive.hpp"

Archive::Archive(void)
{
	for (int i = 0; i < 8; i++) {
		this->_notes[i] = NULL;
	}
	this->_index = 0;
	return ;
};

Archive::~Archive(void)
{
	// delete [] this->_notes;
	return ;
};

void	Archive::addNote()
{
	if (this->_index >= 8)
	{
		std::cout << "The limit of Survivals has been reached. ";
		return ;
	}
	this->_notes[this->_index] = new Note();
	this->_index++;
	return ;
};

void	Archive::searchNote(int index)
{
	for (int i = 0; i < 8; i++)
	{
		if (i == index)
			this->_notes[i]->displayContent();
	}
};
