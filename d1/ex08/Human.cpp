#include "Human.hpp"
#include <iostream>
#include <string>

Human::Human()
{
    return;
};
Human::~Human()
{
    return;
};

void Human::meleeAttack(std::string const &target)
{
    std::cout << "KIIIIAIIAIIA!! at " << target << std::endl;
}
void Human::rangedAttack(std::string const &target)
{
    std::cout << "WUIWUIWUIWUIWUI at " << target << std::endl;
}
void Human::intimidatingShout(std::string const &target)
{
    std::cout << "AAAAARGHHHHHH at " << target << std::endl;
}
void Human::action(std::string const &action_name, std::string const &target)
{
    /* Commands buff */
    static std::string typeNames[] = {
        "meleeAttack",
        "rangedAttack",
        "intimidatingShout"};

    /* Functions buff */
    static void (Human::*arrF[])(std::string const &) = {
        &Human::meleeAttack,
        &Human::rangedAttack,
        &Human::intimidatingShout};

    int l = sizeof(typeNames) / sizeof(std::string);

    /* Find and Apply */
    for (int i = 0; i < l; i++)
        if (action_name == typeNames[i])
        {
            (this->*arrF[i])(target);
            return;
        }
}