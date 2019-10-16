#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int B, a, b, c;
	cin >> B;
	a = B / 100;
	B = B % 100;
	b = B % 10;
	c = B / 10;
	c = b * 10 + c;
	if (a == c) {
		cout << "Данное число читается одинаково слева направо и справа налево";
	}
	else
		cout << "Данное число не читается одинаково слева направо и справа налево";
	return 0;
}