#include "Note.hpp"

Note::Note (void)
{
    std::cout << "State your FIRSTNAME! " << std::endl;
    std::cin >> this->firstname;
    return ;
}

Note::~Note(void)
{
    return ;
}

void Note::displayContent( void ) {
    std::cout << this->firstname << std::endl;

    return ;
}