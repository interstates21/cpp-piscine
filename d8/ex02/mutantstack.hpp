#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <deque>
# include <iostream>
# include <stack>

template<typename T>
class MutantStack: public std::stack<T> {
public:
    typedef typename std::deque<T>::iterator iterator;
	MutantStack(void) {return ;}
	MutantStack(MutantStack const & other) {*this = other;}
	~MutantStack(void) { return ;}
	iterator end(void) {
    return std::end(this->c);
    }
    iterator begin(void) {
        return std::begin(this->c);
    }
};

#endif