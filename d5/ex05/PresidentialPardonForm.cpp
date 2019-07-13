#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string &target)
    : Form("PresidentialPardonForm", 25, 5), _target(target)
{
    return;
};

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other)
    : Form(other)
{
    *this = other;
    return;
};

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &b)
{
    _target = b._target;
    return *this;
};

void PresidentialPardonForm::execute(Bureaucrat const &b) const
{
    if (getExecGrade() >= b.getGrade() && getSigned())
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    else
        throw Form::GradeTooLowException();
};

PresidentialPardonForm::~PresidentialPardonForm()
{
    return;
};