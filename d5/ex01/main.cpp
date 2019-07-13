#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string>
#include <iostream>

void beSignedTest()
{
    try
    {
        Form f("B12", 20, 20);
        Bureaucrat c("Sarah", 19);
        Bureaucrat b("George", 21);

        f.beSigned(c);
        f.beSigned(b);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void signFormTest()
{
    try
    {
        Form f("B12", 20, 20);
        Bureaucrat c("Sarah", 19);
        Bureaucrat b("George", 21);

        c.signForm(f);
        b.signForm(f);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}
int main()
{

    beSignedTest();
    std::cout << std::endl;
    signFormTest();
    return (0);
}
