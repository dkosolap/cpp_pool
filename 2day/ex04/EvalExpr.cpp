#include "EvalExpr.hpp"


EvalExpr::EvalExpr( void ) {
	this->_res.setRawBits(0);
	return ;
}

EvalExpr::EvalExpr( EvalExpr const &rf ) {
	*this = rf;
	return ;
}

EvalExpr::~EvalExpr( void ) {
	 return ;
}

EvalExpr 	&EvalExpr::operator=( EvalExpr const &ref) {
	if (this != &ref) {
		this->_res = ref.get();
	}
	return *this;
}

float		EvalExpr::get( void ) const {
	return (this->_res.toFloat());
}

std::ostream	&operator<<( std::ostream &os, EvalExpr const &rf ) {
	os << rf.get();
	return (os);
}


// LOGIC

Fixed		EvalExpr::start(std::string input) {	
	std::string	output = GetExpression(input);
	Fixed 		res = Counting(output);

	return (res);
}

std::string		EvalExpr::GetExpression(std::string input) {
	std::string	output = "";
	char		stack[2048] = { 0 };
	int 		count = 0;


	for (int i = 0; i < (int)input.length(); i++) {
	    if (this->IsDelimeter(input[i]))
	         continue;
	    
	    if (isdigit(input[i])) {
	         while (!this->IsDelimeter(input[i]) && !this->IsOperator(input[i])) {
	             output += input[i++];
	             if (!input[i])
		             break;
	         }

	         output += " ";
	         i--;
	    }
	    if (this->IsOperator(input[i])) {
	        if (input[i] == '(')
	            stack[count++] = input[i];
	        else if (input[i] == ')') {
	            char s = stack[count - 1];
	            stack[--count] = 0;

	            while (s != '(') {
	                output += s;
	                output += ' ';
	                s = stack[count - 1];
		            stack[--count] = 0;
	            }
	        }
	        else {
	            if (count > 0)
	                if (GetPriority(input[i]) <= GetPriority(stack[count - 1])) {
	                    output += stack[count - 1];
	                    stack[--count] = 0;
	                    output += " ";
	                }

	            stack[count++] = input[i];
	        }
	    }
	}
	while (--count > -1) {
		output += stack[count];
		output += " ";
	}

	return (output);
}

Fixed			EvalExpr::Counting(std::string input) {
	Fixed *res = new Fixed(0);
	Fixed *stack[2048] = {0};
	int   count = 0;

	for (int i = 0; i < (int)input.length(); ++i) {

		if (isdigit(input[i]))  {
		    std::string a = "";

		    while (!IsDelimeter(input[i]) && !IsOperator(input[i])) {
		        a += input[i];
		        i++;
                if (!input[i])
    	            break;
		    }
		    stack[count++] = new Fixed(stof(a));
		    i--;
		}
		else if (IsOperator(input[i])) {
			Fixed *a = (stack[--count]);
			stack[count] = 0;
			Fixed *b = (stack[--count]);

			switch (input[i]) { 
			    case '+': res = &(*b + *a); break;
			    case '-': res = &(*b - *a); break;
			    case '*': res = &(*b * *a); break;
			    case '/': res = &(*b / *a); break;
			    // case '^': res = double.Parse(Math.Pow(double.Parse(b.ToString()), double.Parse(a.ToString())).ToString()); break;
			}
			stack[count++] = res;
		}
	}
	return (*stack[--count]);
}


bool			EvalExpr::IsDelimeter(char c) {
	if (32 == c)
		return (true);
	return (false);
}

bool			EvalExpr::IsOperator(char c) {
	if (strchr("+-/*^%()", c))
		return (true);
	return (false);
}

int 			EvalExpr::GetPriority(char s) {
	switch (s) {
		case '(': return 0;
		case ')': return 1;
		case '+': return 3;
		case '-': return 3;
		case '*': return 4;
		case '/': return 4;
		default : return 6;
	}
}

