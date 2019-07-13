#ifndef ROBOTOMY_HPP
#define ROBOTOMY_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
  private:
    std::string _target;

    RobotomyRequestForm();

  public:
    RobotomyRequestForm(std::string &);
    virtual ~RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm &);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &);

    virtual void execute(Bureaucrat const &executor) const;
};

#endif
