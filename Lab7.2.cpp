#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int a, b, c;
	cin >> a >> b >> c;
	if (a < b && b < c && a < c) {
		cout << "Справедливо двойное неравенство А<В<С";
	}
	else
		cout << "Двойное неравенство не справедливо";
	return 0;
}