#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int a, b;
	cin >> a >> b;
	if (a > 2 && b <= 3) {
		cout << "Справедливы неравенства А>2 и B<=3";
	}
	else
		cout << "Неравенства не справедливы";
	return 0;
} 
