#include "easyfind.hpp"
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> cont;

    cont.push_back(5);
    cont.push_back(10);
    cont.push_back(15);
    cont.push_back(16);
    cont.push_back(20);
    cont.push_back(25);

    easyfind(cont, 16);
    easyfind(cont, 25);

    try {
        easyfind(cont, 26);
    }
    catch (const std::exception &err) {
        std::cerr << err.what() << std::endl;
    }
}