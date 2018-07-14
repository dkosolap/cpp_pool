#include <iostream>
#include "Fixed.hpp"
#include "EvalExpr.hpp"


int main( int argc, char *argv[] ) {

	EvalExpr 	start;


	// std::string str = "48";

	// str += '5';
	// std::cout << str << std::endl;
	if (argc != 2) {
		std::cout << "Wrong amount args" << std::endl;
	}
	else {
		std::cout << start.start(argv[1]) << std::endl;
	}
	return 0;
		
}