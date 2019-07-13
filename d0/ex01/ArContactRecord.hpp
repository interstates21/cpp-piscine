#ifndef NOTE_H
#define NOTE_H

#include <iostream>
#include <string>

class ArContactRecord {

public:
	ArContactRecord( void );
	~ArContactRecord( void );
	void retrieveData( void );

	void    setFirstName ( std::string );
	void    setLastName ( std::string );
	void    setNickname ( std::string );
	void    setLogin ( std::string );
	void    setAddress ( std::string );
	void    setEmail ( std::string );
	void    setPhone ( std::string );
	void    setBirthday ( std::string );
	void    setMeal ( std::string );
	void    setUnderware ( std::string );
	void    setSecret ( std::string  );
	void    setIndex ( int i );

	std::string    getFirstName ( void);
	std::string    getLastName ( void);
	std::string    getNickname ( void);
	std::string    getLogin ( void);
	std::string    getAddress ( void);
	std::string    getEmail ( void) ;
	std::string    getPhone ( void);
	std::string    getBirthday ( void) ;
	std::string    getMeal ( void);
	std::string    getUnderware ( void);
	std::string    getSecret ( void );
	int			   getIndex ( void );


private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _login;
	std::string _address;
	std::string _email;
	std::string _meal;
    std::string _phone;
	std::string _birthday;
	std::string _underware;
	std::string _secret;
	int			_index;

};

#endif