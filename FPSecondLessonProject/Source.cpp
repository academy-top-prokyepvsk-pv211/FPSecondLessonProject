#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	/*
	const float PI{ 3.14 };
	const int size{ 100 };

	int a;
	a = 0x10;
	cout << a << " " << sizeof(a) << endl;

	double x;
	x = 123e-2;
	cout << x << " " << sizeof(x) << "\n";
	

	const float PI{ 3.14 };

	float radius;
	cout << "введите радиус: ";
	cin >> radius;

	cout << "длина окружности = " << 2 * PI * radius << "\n";
	

	int a{ 49 };
	int b{ 24 };

	cout << a << " + " << b << " = " << a + b << "\n";
	cout << a << " - " << b << " = " << a - b << "\n";
	cout << a << " * " << b << " = " << a * b << "\n";
	cout << a << " / " << b << " = " << a / b << "\n";
	cout << a << " % " << b << " = " << a % b << "\n";

	*/

	int number;
	cout << "введите четырехзначное число: ";
	cin >> number;

	int numberCopy{ number };

	int amount{};
	amount = amount + number % 10;
	number = number / 10;

	amount = amount + number % 10;
	number = number / 10;

	amount = amount + number % 10;
	number = number / 10;

	amount += number % 10;
	number /= 10;

	cout << "сумма цифр числа " << numberCopy << " = " << amount << "\n";

}