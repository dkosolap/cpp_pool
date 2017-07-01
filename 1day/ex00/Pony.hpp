#ifndef PONY_CLASS_H
# define PONY_CLASS_H
# include <iostream>

class	Pony {
public:
	std::string	name;
	int			age;

	Pony		*ponyOnTheHeap(int age, std::string name);
	Pony		ponyOnTheStack(int age, std::string name);
	Pony(int age, std::string name);
	~Pony( void );
private:
	bool	_free;
};

#endif