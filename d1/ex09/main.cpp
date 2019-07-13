#include "Logger.hpp"
#include <iostream>

int main(void)
{
	Logger logger("./zen.txt");

	logger.log("file", "Inner Harmony Golden Fish Koi ☯☯☯");
	logger.log("console", "Big Golden Fish Koi ☯☯☯");

	return (0);
}
