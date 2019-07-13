#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <string>
#include <iostream>

#include "Form.hpp"

class Bureaucrat
{
private:
  int _grade;
  std::string const _name;

public:
  Bureaucrat(std::string, int);
  virtual ~Bureaucrat();
  Bureaucrat(Bureaucrat &);
  Bureaucrat &operator=(Bureaucrat const &);

  std::string const getName() const;
  int getGrade() const;
  void setGrade(int);
  void incrementGrade();
  void decrementGrade();
  void signForm(Form &);

  struct GradeTooLowException : public std::exception
  {
  public:
    virtual const char *what() const throw()
    {
      return "Exception :: Grade is Too Low";
    }
  };

  struct GradeTooHighException : public std::exception
  {
  public:
    virtual const char *what() const throw()
    {
      return "Exception :: Grade is Too High";
    }
  };
};
std::ostream &operator<<(std::ostream &os, const Bureaucrat &src);

#endif
