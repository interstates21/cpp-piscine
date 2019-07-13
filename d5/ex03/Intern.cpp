#include <iostream>
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &i)
{
    *this = i;
}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &i)
{
    (void)i;
    return *this;
}

Form *Intern::makeForm(const std::string &type, const std::string &target)
{

    Form *form = nullptr;

    if (type == "shrubbery")
        form = new ShrubberyCreationForm(target);
    if (type == "robotomy")
        form = new RobotomyRequestForm(target);
    if (type == "presidential")
        form = new PresidentialPardonForm(target);

    if (form)
        std::cout << "Intern creates " << form->getName() << std::endl;
    else
        throw Intern::NoForm();

    return (form);
}
