/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkosolap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 13:10:59 by dkosolap          #+#    #+#             */
/*   Updated: 2017/08/14 13:11:09 by dkosolap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Эта программа работает корректно.
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class sample {
	char *s;
	public:
	sample(); // обычный конструктор
	sample(const sample &ob); // конструктор копии
	~sample() {
		if(s) delete [] s;
		cout << "Освобождение s-памяти.\n";
	}
	void show() { cout << s << "\n"; }
	void set(char *str);
	sample operator=(sample &ob); // перегруженный операторприсваивания
};
// Обычный конструктор.
sample::sample()
{
	s = new char('\0'); // Член s указывает на null-строку.
}
// Конструктор копии.
sample::sample(const sample &ob)
{
	s = new char[strlen(ob.s)+1];
	strcpy(s, ob.s);
}
// Загрузка строки.
void sample::set(char *str)
{
	s = new char[strlen(str)+1];
	strcpy(s, str);
}
// Перегрузка оператора присваивания.
sample sample::operator=(sample &ob)
{
	/* Если выделенная область памяти имеет недостаточный размер,
	   выделяется новая область памяти. */
	return *this;
}
// Эта функция возвращает объект типа sample.
sample input()
{
	char instr[80];
	sample str;
	cout << "Введите строку: ";
	cin >> instr;
	str.set(instr);
	return str;
}
int main()
{
	sample ob;
	// Присваиваем объект, возвращаемый
	// функцией input(), объекту ob.
	ob = input(); // Теперь здесь все в порядке!
	ob.show();
	return 0;
}
