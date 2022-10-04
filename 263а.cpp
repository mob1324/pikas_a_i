#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	int x, y;
	for (int i = 0; i < 5; i += 1) {
		for (int j = 0; j < 5; j += 1) {
			int a;
			cin >> a;
			if (a == 1) {
				x = j + 1;
				y = i + 1;
			}
		}
	}
	int otvet = abs(x - 3) + abs(y - 3);
	cout << otvet;
	return 0;
}
