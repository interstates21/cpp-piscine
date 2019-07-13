#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock() : _intern(0), _signPerson(0), _execPerson(0){};

OfficeBlock::OfficeBlock(Intern *i, Bureaucrat *s, Bureaucrat *e)
    : _intern(i), _signPerson(s), _execPerson(e){};

OfficeBlock::~OfficeBlock()
{
    return;
};

void OfficeBlock::doBureaucracy(std::string type, std::string &target)
{
    if (!_intern || !_signPerson || !_execPerson)
        throw OfficeBlock::MissingPeople();
    else
    {
        try
        {
            Form *f = _intern->makeForm(type, target);
            _signPerson->signForm(*f);
            f->execute(*_execPerson);
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
};

void OfficeBlock::setIntern(Intern &intern)
{
    _intern = &intern;
};
void OfficeBlock::setSigner(Bureaucrat &b)
{
    _signPerson = &b;
};
void OfficeBlock::setExecutor(Bureaucrat &b)
{
    _execPerson = &b;
};
