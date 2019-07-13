#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <fstream>
#include <iostream>
#include <string>

class Logger
{
public:
	Logger(std::string file);
	~Logger();
	void log(std::string const &dest, std::string const &message);

private:
	std::string _file;
	std::ofstream _os;

	void logToConsole(std::string s);
	void logToFile(std::string s);
	std::string makeLogEntry(std::string s);
};

#endif
