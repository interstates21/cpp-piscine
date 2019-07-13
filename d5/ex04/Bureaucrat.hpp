#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <string>
#include "Form.hpp"

class Bureaucrat
{
private:
  int _grade;
  std::string _name;

public:
  Bureaucrat(void);
  Bureaucrat(std::string, int);
  virtual ~Bureaucrat();
  Bureaucrat(Bureaucrat &);
  Bureaucrat &operator=(Bureaucrat const &);
  Bureaucrat &operator=(Bureaucrat &);

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
