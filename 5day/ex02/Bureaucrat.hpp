#ifndef BUREAUCRAF_HPP
# define BUREAUCRAF_HPP 
# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class 	Form;

class Bureaucrat {
	const std::string		_name;
	int						_grade;
	class GradeTooHighException : public std::exception	{
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception	{
		virtual const char *what() const throw();
	};
	Bureaucrat();
public:
	Bureaucrat( Bureaucrat const &ref );
	Bureaucrat 	&operator=( Bureaucrat const &ref );
	~Bureaucrat();
	
	Bureaucrat( std::string const &name, int grade );
	int					getGrade(void) const;
	std::string	const	&getName(void) const;
	void				increment();
	void				decrement();
	void				signForm(Form &ref);

};


std::ostream	&operator<<(std::ostream &os, Bureaucrat const &obj);


#endif
