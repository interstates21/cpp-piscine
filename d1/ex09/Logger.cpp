#include <fstream>
#include <ctime>
#include <string>
#include <sstream>
#include "Logger.hpp"

Logger::Logger(std::string file) : _file(file)
{
	this->_os.open(this->_file.c_str(), std::ios_base::out);
}

Logger::~Logger()
{
	if (this->_os.is_open())
		this->_os.close();
}

std::string Logger::makeLogEntry(std::string s)
{
	time_t time = std::time(0);
	tm *time_ptr = localtime(&time);
	char data[25];

	strftime(data, 25, "[%G-%m-%d %H:%M:%S]", time_ptr);

	std::string res = std::string(data) + "	" + s;
	return (res);
}

void Logger::log(std::string const &dest, std::string const &message)
{
	std::string arrS[] =
		{
			"console",
			"file"};

	void (Logger::*fp[])(std::string) =
		{
			&Logger::logToConsole,
			&Logger::logToFile};

	for (int i = 0; i < 2; ++i)
		if (dest == arrS[i])
			(this->*fp[i])(message);
}

void Logger::logToConsole(std::string s)
{
	std::cout << this->makeLogEntry(s) << std::endl;
}

void Logger::logToFile(std::string s)
{
	if (this->_os.is_open())
		this->_os << this->makeLogEntry(s) << std::endl;
}
