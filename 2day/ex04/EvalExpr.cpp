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

float		EvalExpr::start(std::string input) {
	std::string	output = GetExpression(input);
	// float 		res = Counting(output);

	std::cout << "Here " << output << std::endl;
	return (22.5f);
}

std::string		EvalExpr::GetExpression(std::string input) {
	std::string	output = "";
	char		stack[2048] = { 0 };
	int 		count = 0;


	for (int i = 0; i < (int)input.length(); i++) //Для каждого символа в входной строке
	{
	    if (this->IsDelimeter(input[i]))
	         continue;
	    
	    if (isdigit(input[i]))
	    {
	         while (!this->IsDelimeter(input[i]) && !this->IsOperator(input[i]))
	         {
	             output += input[i]; //Добавляем каждую цифру числа к нашей строке
	             i++; //Переходим к следующему символу

	             if (input[i]) break; //Если символ - последний, то выходим из цикла
	         }

	         output += " "; //Дописываем после числа пробел в строку с выражением
	         i--; //Возвращаемся на один символ назад, к символу перед разделителем
	    }

	    //Если символ - оператор
	    if (this->IsOperator(input[i])) //Если оператор
	    {
	        if (input[i] == '(') //Если символ - открывающая скобка
	            stack[count++] = input[i]; //Записываем её в стек
	        else if (input[i] == ')') //Если символ - закрывающая скобка
	        {
	            //Выписываем все операторы до открывающей скобки в строку
	            char s = stack[count];
	            stack[count--] = 0;

	            while (s != '(')
	            {
	                output += s;
	                output += ' ';
	                s = stack[count];
		            stack[count--] = 0;
	            }
	        }
	        else //Если любой другой оператор
	        {
	            if (count > 0) //Если в стеке есть элементы
	                if (GetPriority(input[i]) <= GetPriority(stack[count])) {
	                    output += stack[count];
	                    stack[count--] = 0;
	                    output += " "; //То добавляем последний оператор из стека в строку с выражением
	                }

	            stack[count++] = input[i];
	        }
	    }
	}
	return (output);
}

float			EvalExpr::Counting(std::string input) {
	(void)input;
	return (22.5f);
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
		case '%': return 4;
		case '^': return 5;
		default : return 6;

	}
}

