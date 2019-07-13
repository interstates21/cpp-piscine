#include "span.hpp"
#include <vector>
#include <algorithm>
#include <iostream>

Span::Span(unsigned int n) : _n(n){
	return ;
};

Span::Span() : _n(1){
	return ;
};

Span::~Span(){
	return ;
};


Span::Span(Span & other){
	*this = other;
};


Span::Span(Span const & other){
	*this = other;
};

Span&	Span::operator=(Span & other){
	_container.assign(other._container.begin(), other._container.end());
	_n = other._n;
	return *this;
};


Span&	Span::operator=(Span const & other)
{
	_container.assign(other._container.begin(), other._container.end());
	_n = other._n;
	return *this;
};

void	Span::addNumber(int elem){
    if (_container.size() < _n)
        _container.push_back(elem);
    else
        throw Span::NotEnoughSpace();    
};


int Span::shortestSpan(){
	if (_container.size() <= 1)
		throw Span::NotEnoughElements();
	std::sort(_container.begin(), _container.end());
	std::vector<int>::const_iterator it = _container.begin();
	return *(it + 1) - *(it);
};


int Span::longestSpan(){
	if (_container.size() <= 1)
		throw Span::NotEnoughElements();

	std::sort(_container.begin(), _container.end());
	return _container.back() - _container.front();
};