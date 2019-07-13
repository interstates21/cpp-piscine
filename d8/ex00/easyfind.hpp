#ifndef EASY_FIND_HPP
#define EASY_FIND_HPP

#include <iostream>
#include <list>

template <typename T>
void easyfind(T const & container, int n) {
    for (typename T::const_iterator it = container.begin() ; it != container.end(); ++it) {
        if (*it == n) {
            std::cout << "here: " << *it << std::endl;
            return ;
        }
    }
    throw std::range_error("Not found");
}
#endif
