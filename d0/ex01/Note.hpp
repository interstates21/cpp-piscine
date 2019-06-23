#ifndef NOTE_H
#define NOTE_H

#include <iostream>
#include <string>

class Note {

public:
	Note( void );
	~Note( void );
	void displayContent( void );
private:
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string login;
	std::string adress;
	std::string email;
	std::string meal;
    std::string phone;
	std::string birth;
	std::string underware;
	std::string darkSecret;

};

#endif