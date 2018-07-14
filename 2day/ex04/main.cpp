#include <iostream>
#include "Fixed.hpp"
#include "EvalExpr.hpp"


int main( int argc, char *argv[] ) {

	EvalExpr 	start;

	if (argc != 2) {
		std::cout << "Wrong amount args" << std::endl;
	}
	else {
		std::cout << start.start(argv[1]) << std::endl;
	}
	return 0;
		
}