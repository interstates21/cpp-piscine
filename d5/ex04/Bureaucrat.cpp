#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

Bureaucrat::Bureaucrat() : _grade(0), _name("Another")
{
    return;
};

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
    _name = a._name;
    this->setGrade(a._grade);
    return *this;
};

Bureaucrat &Bureaucrat::operator=(Bureaucrat &a)
{
    _name = a._name;
    this->setGrade(a._grade);
    return *this;
};

std::string const Bureaucrat::getName() const
{
    return this->_name;
};

void Bureaucrat::signForm(Form &f)
{
    f.beSigned(*this);
    if (f.getSigned())
        std::cout << _name << " signs " << f.getName() << std::endl;
    else
        std::cout << _name << " cannot signs " << f.getName() << " because your grade is not valid." << std::endl;
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