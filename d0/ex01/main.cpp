#include <iostream> 
#include <string>
#include "ArchivePBook.hpp"


void			startRecordSession(ArchivePBook *ar)
{
	ArContactRecord			        rec;
	std::string		                line;


    if (!ar->checkIndex()) {
        std::cout << "The limit of Survivals has been reached. ";
		return ;
    }
	std::cout << "State your first name: " << std::endl;
    std::cin >> line;

	rec.setFirstName(line);
	std::cout << "State your last name: " << std::endl;
    std::cin >> line;
    rec.setLastName(line);

	std::cout << "State your nickname: " << std::endl;
    std::cin >> line;
	rec.setNickname(line);

	std::cout << "State your login: " << std::endl;
    std::cin >> line;
	rec.setLogin(line);

	std::cout << "State your postal address: " << std::endl;
    std::cin >> line;
	rec.setAddress(line);

	std::cout << "State your email address: " << std::endl;
    std::cin >> line;;
	rec.setEmail(line);

	std::cout << "State your phone number: " << std::endl;
    std::cin >> line;
	rec.setPhone(line);

	std::cout << "State your birthday date: " << std::endl;
    std::cin >> line;
	rec.setBirthday(line);

	std::cout << "State your favorite meal: " << std::endl;
    std::cin >> line;
	rec.setMeal(line);

	std::cout << "State your underwear color: " << std::endl;
    std::cin >> line;
	rec.setUnderware(line);

	std::cout << "State your darkest secret: " << std::endl;
    std::cin >> line;
	rec.setSecret(line);

	ar->addRec(rec);
    std::cout << "YOUR ($$#CORD HAS BEEN ADDED TO THE ARC^&^VE! " << std::endl << std::endl;
}


void    printInstruction()
{
    std::cout << "@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@" << std ::endl;
    std::cout << "Welcome to the Fthgrth^((*$_()*32138 Secret ArchivePBook Terminal#296" << std::endl;
    std::cout << "Please, enter your Personal Data to" << std::endl <<
    "Notify the other Survivals about your presence! query ADD."<< std::endl;
    std::cout << "There can be up 8 Survivals" << std::endl;
    std::cout << "To 0 the other Survivals, please, query SEARCH" << std::endl;
    std::cout << "To leave the Terminal#296, query EXIT" << std::endl;
    std::cout << "@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@" << std ::endl;

}

int main()
{
    bool                end;
    std::string         q;
    ArchivePBook        ar;

    end = false;
    printInstruction();

    while (!end) {
        std::getline(std::cin, q);
        if (q == "ADD")
        { 
            startRecordSession(&ar);
        }
        else if (q == "SEARCH")
        {
            ar.searchRec();
        }
        else if (q == "EXIT")
        {
            std::cout << "(*$_()*3213843534534t)()$4e230...Unrecognisable noise ... " << std::endl;
            end = true;
        }
    }
}