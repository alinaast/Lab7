#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int A, a, b, c;
	cin >> A;
	a = A / 100;
	A = A % 100;
	b = A / 10;
	c = A % 10;
	if (a < b && b < c && a < c) {
		cout << "Цифры данного числа образуют возрастающую последовательность";
	}
	else
		if (a > b && b > c && a > c) {
			cout << "Цифры данного числа образуют убывающую последовательность";
		}
		else
			cout << "Цифры данного числа не образуют возрастабщую или убывающую последовательность";
	return 0;
}