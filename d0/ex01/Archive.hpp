
#ifndef CLASS_PHONE_BOOK_H
# define CLASS_PHONE_BOOK_H
#include <iostream>

#include "Note.hpp"

class Archive
{
	public:
		Archive( void );
		~Archive( void );
		void	addNote( void );
		void	searchNote( int );

	private: 
		Note	*_notes[8];
		int		_index;;
};

#endif
