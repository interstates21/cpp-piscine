#ifndef FORM_HPP
#define FORM_HPP

class Bureaucrat;
class Form;
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
private:
  std::string const _name;
  int const _execGrade;
  int const _signGrade;
  bool _signed;

public:
  Form(void);
  Form(std::string, int, int);
  virtual ~Form();
  Form(Form &);
  Form &operator=(Form const &);

  std::string getName() const;
  bool getSigned() const;
  int getSignGrade() const;
  int getExecGrade() const;

  void beSigned(Bureaucrat &bureaucrat);

  void sign();
  struct GradeTooHighException : public std::exception
  {
  public:
    virtual const char *what() const throw()
    {
      return "Grade is High";
    }
  };
  struct GradeTooLowException : public std::exception
  {
  public:
    virtual const char *what() const throw()
    {
      return "Grade is Low";
    }
  };
};

std::ostream &operator<<(std::ostream &os, const Form &src);

#endif
