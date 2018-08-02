#include "Form.hpp"

Form::Form() : _name(""), _gradeSign(0), _gradeRequired(0) {
}

Form::Form( Form const &ref ) : _name(ref.getName()), _gradeSign(ref.getSign()), _gradeRequired(ref.getGradeToRequired()) {
	*this = ref;
}

Form 	&Form::operator=( Form const &ref ) {
	return (*(new Form(ref.getName(), ref.getGradeToSigned(), ref.getGradeToRequired())));
}

Form::~Form() {
}

Form::Form(std::string name, int gradeToSigned, int gradeToRequired) : _name(name), _gradeSign(gradeToSigned), _gradeRequired(gradeToRequired) {
	_sign = false;
	if (_gradeSign < 1 || _gradeSign < 1)
		throw Form::GradeTooHighException();
	else if (_gradeSign > 150 || _gradeSign > 150)
		throw Form::GradeTooLowException();
}

const std::string		Form::getName() const {
	return _name;
}

int						Form::getGradeToRequired() const {
	return _gradeRequired;
}

int						Form::getGradeToSigned() const {
	return _gradeSign;
}

bool					Form::getSign() const {
	return _sign;
}

const char 				*Form::GradeTooHighException::what() const throw() {
	return "Grade Too High Exeption";
}

const char 				*Form::GradeTooLowException::what() const throw() {
	return "Grade Too Low Exception";
}

void					Form::beSigned( Bureaucrat &ref ) {
	if (ref.getGrade() < getGradeToSigned())
		_sign = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream			&operator<<(std::ostream &os, Form const &ref) {
	os << ref.getName() << " are " << (ref.getSign() == true ? " " : " not ") << "signed" << std::endl;;
	return (os);
}
