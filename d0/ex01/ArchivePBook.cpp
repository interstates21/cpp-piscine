
#include "ArchivePBook.hpp"
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

ArchivePBook::ArchivePBook(void) : _index(0)
{
	return;
};

ArchivePBook::~ArchivePBook(void)
{
	return;
};

void ArchivePBook::addRec(ArContactRecord &rec)
{
	if (this->_index >= 8)
	{
		std::cout << "The limit of Survivals has been reached. " << std::endl;
		return;
	}
	rec.setIndex(this->_index);
	this->_recs[this->_index] = rec;
	this->_index++;
	return;
};

void ArchivePBook::printTable()
{
	std::cout << std::setw(10) << "index" << '|';
	std::cout << std::setw(10) << "first name" << '|';
	std::cout << std::setw(10) << "last name" << '|';
	std::cout << std::setw(10) << "nickname" << std::endl;

	for (int i = 0; i < this->_index; i++)
	{
		std::cout << std::setw(10) << this->_recs[i].getIndex() << '|';
		if (this->_recs[i].getFirstName().size() > 10)
			std::cout << std::setw(10) << this->_recs[i].getFirstName().substr(0, 9) + '.' << '|';
		else
			std::cout << std::setw(10) << this->_recs[i].getFirstName() << '|';
		if (this->_recs[i].getLastName().size() > 10)
			std::cout << std::setw(10) << this->_recs[i].getLastName().substr(0, 9) + '.' << '|';
		else
			std::cout << std::setw(10) << this->_recs[i].getLastName() << '|';
		if (this->_recs[i].getNickname().size() > 10)
			std::cout << std::setw(10) << this->_recs[i].getNickname().substr(0, 9) + '.' << '|';
		else
			std::cout << std::setw(10) << this->_recs[i].getNickname() << std::endl;
	}
}

bool ArchivePBook::checkIndex(void)
{
	return (this->_index < 8);
}
void ArchivePBook::searchRec(void)
{
	if (this->_index == 0)
	{
		std::cout << "No records 43534r($#(I)30294 No survivals" << std::endl;
		return;
	}
	int n;
	this->printTable();
	std::cout << std::endl;

	while (1)
	{
		std::cout << "Please Enter an In35gt45 beetween -0- and -" << this->_index - 1 << "- ..." << std::endl;
		std::cout << "n:>>>>> ";
		std::cin >> n;

		if (std::cin.good() && n >= 0 && n < this->_index)
		{
			this->_recs[n].retrieveData();
			break;
		}
		else
		{
			std::cout << "Invalid input" << std::endl;
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
		}
	}
};
