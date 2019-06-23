#include <iostream> 
#include "Archive.hpp"


void    printInstruction()
{
    std::cout << "@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@" << std ::endl;
    std::cout << "Welcome to the Fthgrth^((*$_()*32138 Secret Archive Terminal#296" << std::endl;
    std::cout << "Please, enter your Personal Data to" << std::endl <<
    "Notify the other Survivals about your presence! query ADD."<< std::endl;
    std::cout << "There can be up 8 Survivals" << std::endl;
    std::cout << "To 0 the other Survivals, please, query SEARCH" << std::endl;
    std::cout << "To leave the Terminal#296, query EXIT" << std::endl;
    std::cout << "@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@" << std ::endl;

}

int main()
{
    bool            end;
    std::string     q;
    Archive         archive;

    end = false;
    printInstruction();

    while (!end) {
        std::getline(std::cin, q);
        if (q == "ADD")
        { 
            archive.addNote();
        }
        else if (q == "SEACH")
        {
            archive.searchNote();
        }
        else if (q == "EXIT")
        {
            std::cout << "(*$_()*3213843534534t)()$4e230...Unrecognisable noise ... " << std::endl;
            end = true;
        }
        else
        {
             std::cout << "Secret Archive Terminal#296 Doesn't know this query" << std::endl;
        }
    }
}