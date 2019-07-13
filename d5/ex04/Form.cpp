
#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : _name("Another fucking form"), _execGrade(20), _signGrade(20), _signed(false)
{
    return;
}

Form::Form(std::string name, int signGrade, int execGrade)
    : _name(name), _execGrade(execGrade), _signGrade(signGrade), _signed(false)
{
    if (signGrade < 1 || execGrade < 1)
        throw Form::GradeTooHighException();
    else if (signGrade > 150 || execGrade > 150)
        throw Form::GradeTooLowException();
    return;
};

Form::~Form()
{
    return;
};

Form::Form(Form &other)
    : _name(other._name),
      _execGrade(other._execGrade), _signGrade(other._signGrade), _signed(other._signed)
{
    *this = other;
    return;
};

Form &Form::operator=(Form const &rhs)
{
    _signed = rhs._signed;
    return *this;
};

std::string Form::getName() const
{
    return _name;
};

bool Form::getSigned() const
{
    return _signed;
};

int Form::getSignGrade() const
{
    return _signGrade;
};

int Form::getExecGrade() const
{
    return _execGrade;
};

void Form::sign()
{
    this->_signed = true;
}
void Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() <= _signGrade)
    {
        std::cout << "Congratulations." << b.getName() << std::endl;
        this->sign();
    }
    else
        throw Form::GradeTooLowException();
};

std::ostream &operator<<(std::ostream &os, const Form &f)
{
    std::string isSigned = f.getSigned() ? ". Signed" : ". Unsigned.";
    os << "Blank : " << f.getName() << ". Grade to sign : " << f.getSignGrade() << ". Grade to use : " << f.getExecGrade() << isSigned << std::endl;

    return (os);
}
