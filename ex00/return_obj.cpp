#include <iostream>
using namespace std;
class three_d {
	int x, y, z; // 3-мерные координаты
	public:
	three_d() { x = y = z = 0; cout << "Конструктор!\n";}
    ~three_d() {cout << "Деструктор!\n";}
	three_d(int i, int j, int k) {x = i; y = j; z = k; cout << "Конструктор!\n";}
	three_d operator+(three_d op2); // Операнд op1 передаетсянеявно.
	three_d operator=(three_d op2); // Операнд op1 передаетсянеявно.
	void show();
};
// Перегрузка оператора "+".
three_d three_d::operator+(three_d op2)
{
	three_d temp;
	temp.x = x + op2.x; // Операции сложения целочисленных
	temp.y = y + op2.y; // значений сохраняют оригинальный
	temp.z = z + op2.z; // смысл.
	return temp;
}
// Перегрузка оператора присваивания.
three_d three_d::operator=(three_d op2)
{
	x = op2.x; // Операции присваивания целочисленных
	y = op2.y; // значений сохраняют оригинальный
	z = op2.z; // смысл.
	return *this;
}
// Отображение координат X, Y, Z.
void three_d::show()
{
	cout << x << ", ";
	cout << y << ", ";
	cout << z << "\n";
}
int main()
{
	three_d a(1, 2, 3);
    three_d b(10, 10, 10);
    three_d c;
	a.show();
	b.show();
	c=a+b; // сложение объектов а и b
    cout << "1!\n";
	c.show();
	c=a+b+c; // сложение объектов a, b и с
	c.show();
	c=b=a; // демонстрация множественного присваивания
	c.show();
	b.show();
	return 0;
}
