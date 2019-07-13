#include <iostream>
#include <sstream>
#include "Fixed.hpp"
#include "eval.hpp"

int     main(int argc, char **argv)
{
    Fixed     f;

	if (argc == 2) {
		f = Eval::eval_expr(argv[1]);
    	std::cout << f << std::endl;
	}
    return (0);
}