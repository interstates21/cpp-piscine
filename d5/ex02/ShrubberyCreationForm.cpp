#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target)
    : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
    return;
};

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other)
    : Form(other)
{
    *this = other;
    return;
};

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &b)
{
    _target = b._target;
    return *this;
};

void ShrubberyCreationForm::drawTree() const
{
    std::ofstream tree(_target + "_shrubbery");
    tree << "   888   " << std::endl;
    tree << "  88888  " << std::endl;
    tree << "  77777  " << std::endl;
    tree << "  8&&88  " << std::endl;
    tree << "    1    " << std::endl;
    tree << "    1    " << std::endl;
    tree.close();
}

void ShrubberyCreationForm::execute(Bureaucrat const &b) const
{
    if (getExecGrade() >= b.getGrade() && getSigned())
        this->drawTree();
    else
        throw Form::GradeTooLowException();
};

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    return;
};