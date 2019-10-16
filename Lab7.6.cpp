#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int a, b, c;
	cin >> a >> b >> c;
	if (c * c == a * a + b * b) {
		cout << "Треугольник со сторонами a, b, c является прямоугольным";
	}
	else
		cout << "Треугольник со сторонами a, b, c не является прямоугольным";
	return 0;
}