#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	for (int x = a + 1; x <= 9999; x = x + 1){
		int s1, s2, s3, s4;
		s1 = x % 10;
		s2 = (x % 100 - x % 10) / 10;
		s3 = (x % 1000 - x % 100) / 100;
		s4 = (x % 10000 - x % 1000) / 1000;
		if ((s1 != s2) && (s1 != s3) && (s1 != s4) && (s2 != s3) && (s2 != s4) && (s3 != s4)) {
			cout << x;
			break;
		}
	}
	

	return 0;
}
