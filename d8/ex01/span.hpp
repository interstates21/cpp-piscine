#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    unsigned int _n;
    std::vector<int> _container;
public:
    Span();
    Span(unsigned int);
    Span(Span &);
    Span(const Span &);
    Span &operator=(Span &);
    Span &operator=(const Span &);
    ~Span();

    void addNumber(int);

   int shortestSpan(void) ;
    int longestSpan(void) ;


    struct NotEnoughSpace : public std::exception {
        virtual const char *what() const throw() {
            return "Not Enough Space";
        }
    };
       struct NotEnoughElements : public std::exception {
        virtual const char *what() const throw() {
            return "Not Enough Elements";
        }
    };

    
};

#endif