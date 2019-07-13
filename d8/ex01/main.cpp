#include <algorithm>
#include <vector>
#include "span.hpp"

int main()
{
Span sp = Span(5);
sp.addNumber(5);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);

std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
std::cout << std::endl;
Span sp2 = Span(1500);
for (int i = 0; i < 1500; i++) {
    sp2.addNumber(i);
}

std::cout << sp2.shortestSpan() << std::endl;
std::cout << sp2.longestSpan() << std::endl;

try {
    sp2.addNumber(42);
}
catch (std::exception &err) {
    std::cerr << err.what() << std::endl;
}


}