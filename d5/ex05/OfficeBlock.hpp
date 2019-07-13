#ifndef OFFICE_BLOCK_HPP
#define OFFICE_BLOCK_HPP

#include <string>
#include <iostream>
#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class OfficeBlock
{
private:
  Intern *_intern;
  Bureaucrat *_signPerson;
  Bureaucrat *_execPerson;

public:
  OfficeBlock();
  OfficeBlock(Intern *, Bureaucrat *, Bureaucrat *);
  ~OfficeBlock();

  void setSigner(Bureaucrat &);
  void setExecutor(Bureaucrat &);
  void setIntern(Intern &);

  void doBureaucracy(std::string, std::string  &);

  struct MissingPeople : public std::exception
  {
    virtual const char *what() const throw()
    {
      return "Exception Error: You must have 1 Intern and 2 Bureaucrats. ";
    }
  };
};

#endif
