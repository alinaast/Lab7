#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b > c) {
		if (a + c > b) {
			if (b + c > a) {
				cout << "Существует треугольник со сторонами a, b, c";
			}
			else
				cout << "Треугольник со сторонами a, b, c не существует";
		}
		else
			cout << "Треугольник со сторонами a, b, c не существует";
	}
	else
		cout << "Треугольник со сторонами a, b, c не существует";
	return 0;
}