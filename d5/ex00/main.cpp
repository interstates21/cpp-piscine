#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

int main()
{
    try
    {
        Bureaucrat a("Larry", 1);
        std::cout << a;
        a.decrementGrade();
        std::cout << a;
        a.incrementGrade();
        std::cout << a;
        a.incrementGrade();
        std::cout << a;
        a.incrementGrade();
        std::cout << a;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat b("sky", 149);
        std::cout << b;
        b.decrementGrade();
        std::cout << b;
        b.incrementGrade();
        std::cout << b;
        b.incrementGrade();
        std::cout << b;
        b.decrementGrade();
        std::cout << b;
        b.decrementGrade();
        std::cout << b;
        b.decrementGrade();
        std::cout << b;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
