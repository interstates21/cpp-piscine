#ifndef SHRUB_HPP
#define SHRUB_HPP

#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
  private:
    std::string _target;

    ShrubberyCreationForm();

  public:
    ShrubberyCreationForm(std::string &);
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm &);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);
    void drawTree() const;
    virtual void execute(Bureaucrat const &executor) const;
};

#endif
