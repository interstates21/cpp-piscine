#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string &target)
    : Form("RobotomyRequestForm", 72, 45), _target(target)
{
    return;
};

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other)
    : Form(other)
{
    *this = other;
    return;
};

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &b)
{
    _target = b._target;
    return *this;
};

void RobotomyRequestForm::execute(Bureaucrat const &b) const
{
    if (getExecGrade() >= b.getGrade() && getSigned())
        std::cout << "*ZHHHZHZHZZZZIIZIZIIDRRDR* " << _target << "ROBOTOMIZED PROGRESS = [50/100] SUCCESSFULLY" << std::endl;
    else
        throw Form::GradeTooLowException();
};

RobotomyRequestForm::~RobotomyRequestForm()
{
    return;
};