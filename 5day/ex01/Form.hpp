#ifndef FOUR_HPP
# define FOUR_HPP 
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	std::string const		_name;
	bool					_sign;
	int const				_gradeSign;
	int const				_gradeRequired;

	class GradeTooHighException : public std::exception	{
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception	{
		virtual const char *what() const throw();
	};

	Form();
public:
	Form(std::string name, int gradeToSigned, int gradeToExecute);
	Form( Form const &ref );
	Form 	&operator=( Form const &ref );
	~Form();

	const std::string	getName() const;
	int					getGradeToRequired() const;
	int					getGradeToSigned() const;
	bool				getSign() const;

	void				beSigned( Bureaucrat &ref );
};

std::ostream	&operator<<(std::ostream &os, Form const &ref);

#endif