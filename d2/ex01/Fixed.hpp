#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed 
{
    private:
        int             _r;
        static int      _f;
    public:
        Fixed(void);
        Fixed(Fixed const&);
        Fixed(const float);
        Fixed(const int);
        Fixed& operator = (Fixed const &);      
        ~Fixed(void);

        void    setRawBits(int const);
        int     getRawBits(void) const;
        int     toInt() const;
        float   toFloat() const;
};

std::ostream&	operator<<(std::ostream& ostream, const Fixed& fixed);
#endif