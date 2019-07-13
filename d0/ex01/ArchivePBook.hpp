
#ifndef CLASS_ARCHIVE_P_BOOK_H
# define CLASS_ARCHIVE_P_BOOK_H
#include <iostream>
#include <cmath>
#include <string>
# include <iomanip>

#include "ArContactRecord.hpp"

class ArchivePBook
{
	public:
		ArchivePBook( void );
		~ArchivePBook( void );
		void			addRec(ArContactRecord &rec);
		void			searchRec( void );
		void			printTable( void );
		bool			checkIndex ( void );

	private: 
		ArContactRecord	_recs[8];
		int				_index;
};

#endif
