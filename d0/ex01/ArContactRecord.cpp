#include "ArContactRecord.hpp"

ArContactRecord::ArContactRecord (void)
{

    return ;
}

ArContactRecord::~ArContactRecord(void)
{
    return ;
}

void    ArContactRecord::retrieveData( void ) {

    std::cout << "Unrec 45rdddfsgt54fe DAta >>>>" << std::endl;
    std::cout << this->_firstName << std::endl;
    std::cout << this->_lastName << std::endl;
    std::cout << this->_nickname << std::endl;
    std::cout << this->_login << std::endl;
    std::cout << this->_address << std::endl;
    std::cout << this->_email << std::endl;
    std::cout << this->_phone << std::endl;
    std::cout << this->_birthday << std::endl;
    std::cout << this->_meal << std::endl;
    std::cout << this->_underware << std::endl;
    std::cout << this->_secret << std::endl;

    return ;
}

void    ArContactRecord::setFirstName ( std::string s) {
    this->_firstName = s;
}
void    ArContactRecord::setLastName ( std::string s) {
    this->_lastName = s;
}
void    ArContactRecord::setNickname ( std::string s) {
    this->_nickname = s;
}
void    ArContactRecord::setLogin ( std::string s) {
    this->_login = s;
}
void    ArContactRecord::setAddress ( std::string s) {
    this->_address = s;
}
void    ArContactRecord::setEmail ( std::string s) {
    this->_email = s;
}
void    ArContactRecord::setPhone ( std::string s) {
    this->_phone = s;
}
void    ArContactRecord::setBirthday ( std::string s) {
    this->_birthday = s;
}
void    ArContactRecord::setMeal ( std::string s) {
    this->_meal = s;
}
void    ArContactRecord::setUnderware ( std::string s) {
    this->_underware = s;
}
void    ArContactRecord::setSecret ( std::string s ) {
    this->_secret = s;
}

void    ArContactRecord::setIndex ( int i ) {
    this->_index = i;
}


std::string    ArContactRecord::getFirstName ( void) {
    return (this->_firstName);
}
std::string    ArContactRecord::getLastName ( void) {
    return (this->_lastName);
}
std::string    ArContactRecord::getNickname ( void) {
    return (this->_nickname);
}
std::string    ArContactRecord::getLogin ( void) {
    return (this->_login);
}
std::string    ArContactRecord::getAddress ( void) {
    return (this->_address);
}
std::string    ArContactRecord::getEmail ( void) {
    return (this->_email);
}
std::string    ArContactRecord::getPhone ( void) {
    return (this->_phone);
}
std::string    ArContactRecord::getBirthday ( void) {
    return (this->_birthday);
}
std::string    ArContactRecord::getMeal ( void) {
    return (this->_meal);
}
std::string    ArContactRecord::getUnderware ( void) {
    return (this->_underware);
}
std::string    ArContactRecord::getSecret ( void ) {
    return (this->_secret);
}

int    ArContactRecord::getIndex ( void ) {
    return (this->_index);
}