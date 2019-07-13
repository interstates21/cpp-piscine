#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <string>
#include <iostream>

void requestShrubbery()
{
    try
    {
        Intern someRandomIntern;
        Form *f;

        f = someRandomIntern.makeForm("shrubbery", "Society");
        Bureaucrat b("Destroyer", 100);

        b.signForm(*f);
        f->execute(b);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

int main()
{
    requestShrubbery();
    return (0);
}
