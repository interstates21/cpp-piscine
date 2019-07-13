#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
  private:
    std::string _target;

    PresidentialPardonForm();

  public:
    PresidentialPardonForm(std::string &);
    PresidentialPardonForm(std::string const &);
    virtual ~PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm &);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &);

    virtual void execute(Bureaucrat const &executor) const;
};

#endif
