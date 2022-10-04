#include <iostream>
using namespace std;
int main() {
	int a, b;
	b = 0;
	cin >> a;
	while (a >= 5) {
		a = a - 5;
		b = b + 1;
	} if (a != 0) {
		b = b + 1;
	}

	cout << b;

	return 0;
}
