
#include <iostream>
#include <string>

#include "Array.tpp"

int main()
{

    try
    {
        Array<double> a;
        Array<char> b(18);
        Array<char> c;
        b[0] = 'b';

        c = b;
        std::cout << c[0] << std::endl;
        c[0] = 'a';
        std::cout << b[0] << std::endl;
        std::cout << a[0] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    Array<std::string> fireworks(5);

    fireworks[0] = "red";
    fireworks[1] = "blue";
    fireworks[2] = "raibow";
    fireworks[3] = "super dragon";
    fireworks[4] = "black absolute";

    for (size_t i = 0; i < fireworks.size(); i++)
    {
        std::cout << fireworks[i] << std::endl;
    }
    return (0);
}
