#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    setGrade(grade);
    return;
};

Bureaucrat::~Bureaucrat()
{
    return;
};

Bureaucrat::Bureaucrat(Bureaucrat &a)
{
    *this = a;
};

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &a)
{
    _grade = a._grade;
    return *this;
};

std::string const Bureaucrat::getName() const
{
    return this->_name;
};

void Bureaucrat::incrementGrade()
{
    if (_grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    else
        _grade -= 1;
};

void Bureaucrat::decrementGrade()
{
    if (_grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade += 1;
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &src)
{
    os << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
    return (os);
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
};

void Bureaucrat::setGrade(int grade)
{

    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        _grade = grade;
};