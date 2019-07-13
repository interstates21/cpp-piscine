#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
private:
	unsigned int _iq;

public:
	Brain();
	std::string identify() const;
	unsigned int getIq() const;
	void consumeGlicin();
	void consumeBeer();
	static int luck;
};

#endif
