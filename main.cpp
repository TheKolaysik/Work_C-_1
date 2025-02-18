#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int number_1();    /*Задание 1*/
void number_2();   /*Задание 2*/
void number_3_1(); /*Задание 3 Задача 1*/
void number_3_2(); /*Задание 3 Задача 2*/
void number_3_3(); /*Задание 3 Задача 3*/
void number_3_4(); /*Задание 3 Задача 4*/
void number_3_5(); /*Задание 3 Задача 5*/
void number_3_6(); /*Задание 3 Задача 6*/
void number_3_7(); /*Задание 3 Задача 7*/
void number_4();   /*Задание 4*/

int main() {
	setlocale(LC_ALL, "RUS");
	int number_command;
	cout << "Выберите исполнямое задание:" << endl;
	cout << "1. Задание 1" << endl;
	cout << "2. Задание 2" << endl;
	cout << "3. Задание 3" << endl;
	cout << "4. Задание 4" << endl;
	cin >> number_command;
	switch (number_command) {
	case 1:
		number_1();
		break;
	case 2:
		number_2();
		break;
	case 3:
		cout << "Задача 1" << endl;
		number_3_1();
		cout << "Задача 2" << endl;
		number_3_2();
		cout << "Задача 3" << endl;
		number_3_3();
		cout << "Задача 4" << endl;
		number_3_4();
		cout << "Задача 5" << endl;
		number_3_5();
		cout << "Задача 6" << endl;
		number_3_6();
		cout << "Задача 7" << endl;
		number_3_7();
		break;
	case 4:
		number_4();
		break;
	default:
		cout << "Команда введена неправильно" << endl;
	}
	return 0;
}

int number_1() {
	double a, b, result;
	cout << "Введите число a" << " > ";
	cin >> a;

	cout << "Введите число b" << " > ";
	cin >> b;

	if (a + b == 0) {
		cout << "Сумма a и b равна 0!" << endl;
		return 0;
	}

	result = pow(sin(a + pow(b, 3)), 2) * sqrt(exp(pow(a, 2) - 9.4) / pow(a + b, 3));
	cout << "Результат вычисления " << result << endl;
	return 0;
}

void number_2() {
	double x, sum = 1;
	double last_r, future_r = 1;
	int n = 1;
	double n_comp = 1, x_comp = 1;
	const double eps_x = 0.001;
	cout << "Введите число x > ";
	cin >> x;
	do {
		last_r = future_r;
		for (int i = 0; i <= n; i++) {
			n_comp *= -1;
			x_comp *= x;
		}
		n++;
		future_r = n_comp * x_comp;
		sum += future_r;
		cout << future_r << endl;
	} while (abs(last_r - future_r) > eps_x);
	cout << "Результат " << sum << endl;
}

void number_3_1() {
	int n, j = 1;
	cout << "Введите значение > ";
	cin >> n;
	while (j < n) {
		if (n % j == 0) {
			cout << j << endl;
		}
		j++;
	}
}

void number_3_2() {
	float a, min, max, res;
	cout << "Введите число > ";
	cin >> a;
	min = max = a;
	for (int i = 1; i < 100; i++) {
		cout << "Введите число > ";
		cin >> a;
		if (min > a) {
			min = a;
		}
		if (max < a) {
			max = a;
		}
	}
	res = max - min;
	cout << "Разность: " << res << endl;
}

void number_3_3() {
	int y = 1, i = 1, n;
	cin >> n;
	if (n % 2 == 0) {
		i = 2;
	}
	for (i; i <= n; i += 2) {
		y *= i;
	}
	cout << y << endl;
}

void number_3_4() {
	int k, x, m, n;
	float s, rez = 0, rezs = 0;
	cout << "(n:, x:) > ";
	cin >> n >> x;
	for (k = 1; k <= n; k++) {
		for (m = k; m <= n; m++) {
			s = (x + k) / m;
			rez += s;
		}
		rezs += rez;
	}
}

void number_3_5() {
	int i, j, n;
	float s = 0;
	cin >> n;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			s += 1 / (i + 2 * j);
		}
	}
	cout << s;
}

void number_3_6() {
	int fac = 1;
	float s = 0, zn = 0;
	for (int k = 1; k <= 10; k++) {
		for (int n = 1; n <= k; n++) {
			zn += sin(n * k);
			fac *= k;
		}
		s += zn / fac;
	}
	cout << s;
}

void number_3_7() {
	cout << "12";
}

void number_4() {
	double i;
	cout << "Введите число > ";
	cin >> i;
	if (i < 0) {
		i *= -1;
	}
	cout << "Модуль числа: " << i << endl;
}