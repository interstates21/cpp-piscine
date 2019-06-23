
#ifndef CLASS_PHONE_BOOK_H
# define CLASS_PHONE_BOOK_H
#include <iostream>

#include "Note.hpp"

class Archive
{
	public:
		Archive(void);
		~Archive(void);
		Note	notes[8];
		int		index;
		void	addNote();
		void	searchNote(int index);
};

#endif
