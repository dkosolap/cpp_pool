#include "Bureaucrat.hpp"

int		main(){
	Bureaucrat * Jonny;
	try{
		Jonny = new Bureaucrat("Jonny", 4);
		std::cout << *Jonny << std::endl;
		Jonny->increment();
		Jonny->increment();
		Jonny->increment();
		Jonny->increment();
		Jonny->increment();
		Jonny->increment();
		Jonny->increment();
		Jonny->increment();
		Jonny->increment();
		Jonny->increment();
		Jonny->increment();
		Jonny->increment();
		Jonny->increment();
		Jonny->increment();
		Jonny->increment();
		Jonny->increment();
		Jonny->increment();
		Jonny->increment();
		Jonny->increment();
		Jonny->increment();
		Jonny->increment();
		Jonny->increment();
		Jonny->increment();
		std::cout << *Jonny << std::endl;
	}
	catch (const std::exception & ex){
		std::cout << "Wrong: \"" << ex.what() << "\"" << std::endl;
	}
	return 0;
}
