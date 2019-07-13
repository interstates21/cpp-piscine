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
        Fixed& operator = (Fixed const &);      
        ~Fixed(void);

        void    setRawBits(int const);
        int     getRawBits(void) const;
};

#endif