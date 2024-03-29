#ifndef HUMAN_CPP
#define HUMAN_CPP

#include <iostream>
#include <string>
class Human
{
private:
    void meleeAttack(std::string const &target);
    void intimidatingShout(std::string const &target);
    void rangedAttack(std::string const &target);

public:
    void action(std::string const &action_name, std::string const &target);
    Human();
    ~Human();
};

#endif