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

        bool	operator>(const Fixed&) const;
	    bool	operator<(const Fixed&) const;
	    bool	operator>=(const Fixed&) const;
	    bool	operator<=(const Fixed&) const;
	    bool	operator==(const Fixed&) const;
	    bool	operator!=(const Fixed&) const;

	    Fixed	operator+(const Fixed&) const;
	    Fixed	operator-(const Fixed&) const;
	    Fixed	operator*(const Fixed&) const;
	    Fixed	operator/(const Fixed&) const;

	    Fixed&	operator++();
	    Fixed	operator++(int);
	    Fixed&	operator--();
	    Fixed	operator--(int);


        static Fixed&			min(Fixed&, Fixed&);
	    static const Fixed&		min(const Fixed&, const Fixed&);
	    static Fixed&			max(Fixed&, Fixed&);
	    static const Fixed&		max(const Fixed&, const Fixed&);
};

std::ostream&	operator<<(std::ostream& ostream, const Fixed& f);
#endif