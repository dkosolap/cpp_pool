#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
}

Bureaucrat::Bureaucrat( Bureaucrat const &ref ) {
	*this = ref;
}

Bureaucrat 	&Bureaucrat::operator=( Bureaucrat const &ref ) {
	return (*(new Bureaucrat(ref.getName(), ref.getGrade())));
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat( std::string const &name, int grade ) : _name(name), _grade(grade) {
}

int				  Bureaucrat::getGrade(void) const {
	return (_grade);
}

std::string	const &Bureaucrat::getName(void) const {
	return (_name);
}

void				Bureaucrat::increment(){
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= 1;
}

void				Bureaucrat::decrement(){
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;
}

std::ostream		&operator <<(std::ostream &(os), Bureaucrat const &obj) {
	(os) << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (os);
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "0 < grade";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "grade < 151";
}
