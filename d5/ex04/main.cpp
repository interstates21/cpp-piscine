#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "OfficeBlock.hpp"
#include "Intern.hpp"
#include <iostream>
#include <string>

int main()
{
    Intern idiotOne;
    std::string s = "Pigley";
    Bureaucrat b("Destroyer", 1);
    Bureaucrat c("Destroyer", 1);
    OfficeBlock ob;
    ob.setIntern(idiotOne);
    ob.setSigner(c);
    ob.setExecutor(b);
    try
    {
        ob.doBureaucracy("robotomy", s);
        ob.doBureaucracy("mutant pig termination", s);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}