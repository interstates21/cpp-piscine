#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char const **argv)
{
    std::string needle;
    std::string haystack;
    std::string out;
    std::string file;
    std::string b;

    if (argc != 4)
    {
        std::cout << "Invalid Input" << std::endl;
        return (0);
    }
    needle = argv[2];
    haystack = argv[3];
    file = argv[1];
    out = file + ".replace";
    std::ifstream readFile(file);
    if (readFile.fail())
    {
        std::cout << "Open failed" << std::endl;
        exit(1);
    }
    std::ofstream createdFile(out);
    if (createdFile.fail())
    {
        std::cout << "Creation failde" << std::endl;
        exit(1);
    }
    while (std::getline(readFile, b))
    {
        while (b.find(needle) != std::string::npos)
        {
            b.replace(b.find(needle), needle.length(), haystack);
        }
        createdFile << b;
        createdFile << std::endl;
    }
    if (b == "")
    {
        createdFile << std::endl;
    }
    createdFile.close();
    readFile.close();
    return (0);
}
