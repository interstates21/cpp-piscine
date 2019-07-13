#include <iostream>
#include <sstream>
#include <string>
#include "Fixed.hpp"
#include "eval.hpp"

void		trim(char **p) {
	while(**p == ' ')
		(*p)++;
}

float		ft_stof(char **str)
{
    int               countBreak;
    std::string       s;
    float             newStr;

	countBreak = 0;
	while ((**str >= '0' && **str <= '9') || **str == '.')
	{
        if (**str == '.')
            countBreak++;
        if (countBreak == 2)
            ::exit(1);
        s += **str;
		(*str)++;
	}
    std::stringstream sstream(s);
    sstream >> newStr;
    if (sstream.fail())
        ::exit(1);
	return (newStr);
}

Fixed		Eval::findNum(char **e)
{
	Fixed a;

	trim(e);
	if (**e == '(')
	{
		(*e)++;
		a = findSum(e);
		if (**e == ')')
			(*e)++;
		return (a);
	}
	return (ft_stof(e));
}

Fixed		Eval::findFact(char **e)
{
	Fixed		a;
	Fixed		b;
	char	op;

	a = findNum(e);
	while (**e)
	{
		trim(e);
		op = **e;
		if ( op != '*' && op != '/')
			return (a);
		(*e)++;
		b = findNum(e);
		if (op == '*')
			a = (a * b);
		else if (op == '/')
			a = (a / b);
        else
            ::exit(1);
	}
	return (a);
}

Fixed		Eval::findSum(char **e)
{
	Fixed		a;
	Fixed		b;
	char	    op;

	a = findFact(e);
	while (**e)
	{
		while (**e == ' ')
			(*e)++;
		op = **e;
		if (op != '+' && op != '-')
			return (a);
		(*e)++;
		b = findFact(e);
		if (op == '+')
			a = (a + b);
		else
			a = (a - b);
	}
	return (a);
}

Fixed		Eval::eval_expr(char *e)
{
	return (findSum(&e));
}
