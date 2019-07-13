#ifndef CentralBureaucracy_HPP
#define CentralBureaucracy_HPP

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "OfficeBlock.hpp"
#include "Intern.hpp"


class CentralBureaucracy
{
	OfficeBlock _office[20];
	int _count;
	Intern _intern;
	typedef struct		s_list
{
	std::string		target;
	struct s_list	*next;
}					t_list;
	t_list *_list;

public:
	CentralBureaucracy();
	~CentralBureaucracy();
	CentralBureaucracy(CentralBureaucracy &);
	CentralBureaucracy(CentralBureaucracy const &);
	CentralBureaucracy &operator=(CentralBureaucracy const &);
	CentralBureaucracy &operator=(CentralBureaucracy &);

    void foreachOffice(std::string);

    void deleteList();
	void queueUp(std::string);
	void feedBureaucracy(Bureaucrat&, Bureaucrat&);
	void doBureaucracy();

	struct ExceptionFull : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "CentralBureaucracy is full!";
		}
	};
};

#endif
