#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	std::string line;
	std::string filename;

	if (argc < 2)
	{
		while (std::getline(std::cin, line))
			std::cout << line << std::endl;
		::exit(1);
	}
	filename = argv[1];
	for (int i = 1; i < argc; i++)
	{
		std::ifstream file;
		file.open(filename);
		if (!file.is_open())
		{
			std::cout << "cat: ";
			std::cout << filename;
			std::cout << ": No such file or directory" << std::endl;
		}
		else
		{
			while (std::getline(file, line))
				std::cout << line << std::endl;
		}
	}
	return (0);
}