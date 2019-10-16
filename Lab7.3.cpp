#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int a;
	cin >> a;
	if (a % 2 == 0) {
		if (a / 100 == 0) {
			cout << "Данное число является четным и двузначным";
		}
		else {
			cout << "Данное число является только четным";
		}
	}
	else
		cout << "Данное число не является четным и двузначным";
	return 0;
}