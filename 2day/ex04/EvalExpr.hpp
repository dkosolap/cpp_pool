#ifndef EVALEXPR_CLASS_HPP
# define EVALEXPR_CLASS_HPP 

# include "Fixed.hpp"
# include <cstring>

class EvalExpr
{
	Fixed 			_res;
	std::string		GetExpression(std::string input);
	float			Counting(std::string input);
	bool			IsDelimeter(char c);
	bool			IsOperator(char c);
	int 			GetPriority(char s);

public:
	EvalExpr( void );
	EvalExpr( EvalExpr const &rf );
	~EvalExpr( void );

	EvalExpr 	&operator=( EvalExpr const &ref);
	
	float		start( std::string input );
	float		get( void ) const ;
};

std::ostream	&operator<<( std::ostream &os, EvalExpr const &rf );

#endif