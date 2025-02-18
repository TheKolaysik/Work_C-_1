#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int number_1();    /*������� 1*/
void number_2();   /*������� 2*/
void number_3_1(); /*������� 3 ������ 1*/
void number_3_2(); /*������� 3 ������ 2*/
void number_3_3(); /*������� 3 ������ 3*/
void number_3_4(); /*������� 3 ������ 4*/
void number_3_5(); /*������� 3 ������ 5*/
void number_3_6(); /*������� 3 ������ 6*/
void number_3_7(); /*������� 3 ������ 7*/
void number_4();   /*������� 4*/

int main() {
	setlocale(LC_ALL, "RUS");
	int number_command;
	cout << "�������� ���������� �������:" << endl;
	cout << "1. ������� 1" << endl;
	cout << "2. ������� 2" << endl;
	cout << "3. ������� 3" << endl;
	cout << "4. ������� 4" << endl;
	cin >> number_command;
	switch (number_command) {
	case 1:
		number_1();
		break;
	case 2:
		number_2();
		break;
	case 3:
		cout << "������ 1" << endl;
		number_3_1();
		cout << "������ 2" << endl;
		number_3_2();
		cout << "������ 3" << endl;
		number_3_3();
		cout << "������ 4" << endl;
		number_3_4();
		cout << "������ 5" << endl;
		number_3_5();
		cout << "������ 6" << endl;
		number_3_6();
		cout << "������ 7" << endl;
		number_3_7();
		break;
	case 4:
		number_4();
		break;
	default:
		cout << "������� ������� �����������" << endl;
	}
	return 0;
}

int number_1() {
	double a, b, result;
	cout << "������� ����� a" << " > ";
	cin >> a;

	cout << "������� ����� b" << " > ";
	cin >> b;

	if (a + b == 0) {
		cout << "����� a � b ����� 0!" << endl;
		return 0;
	}

	result = pow(sin(a + pow(b, 3)), 2) * sqrt(exp(pow(a, 2) - 9.4) / pow(a + b, 3));
	cout << "��������� ���������� " << result << endl;
	return 0;
}

void number_2() {
	double x, sum = 1;
	double last_r, future_r = 1;
	int n = 1;
	double n_comp = 1, x_comp = 1;
	const double eps_x = 0.001;
	cout << "������� ����� x > ";
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
	cout << "��������� " << sum << endl;
}

void number_3_1() {
	int n, j = 1;
	cout << "������� �������� > ";
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
	cout << "������� ����� > ";
	cin >> a;
	min = max = a;
	for (int i = 1; i < 100; i++) {
		cout << "������� ����� > ";
		cin >> a;
		if (min > a) {
			min = a;
		}
		if (max < a) {
			max = a;
		}
	}
	res = max - min;
	cout << "��������: " << res << endl;
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
	cout << "������� ����� > ";
	cin >> i;
	if (i < 0) {
		i *= -1;
	}
	cout << "������ �����: " << i << endl;
}