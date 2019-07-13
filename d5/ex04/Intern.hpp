#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include "Form.hpp"

class Intern
{

public:
  Intern();
  Intern(const Intern &intern);
  ~Intern();

  Intern &operator=(const Intern &intern);

  Form *makeForm(const std::string &formType, std::string &formTarget);

  struct NoForm : public std::exception
  {
    virtual const char *what() const throw()
    {
      return "Exception Error: Form Doesn't exist ";
    }
  };
};

#endif