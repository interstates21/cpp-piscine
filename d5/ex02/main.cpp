#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include <string>
#include <iostream>

void requestRobotomy()
{
    std::string you = "You";
    try
    {
        RobotomyRequestForm f(you);
        Bureaucrat b("Destroyer", 10);

        f.beSigned(b);
        f.execute(b);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

int main()
{
    requestRobotomy();
    std::cout << std::endl;
    return (0);
}
