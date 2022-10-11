#include <iostream>

int main() {
	int n, k;
	std::cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; i ++) {
	std::cin >> arr[i];
}
	bool insthere = false;
	int min;
		for (int i = 0; i < n; i ++) {
			if (k % arr[i] == 0) {
				if (insthere == false) {
					if (min == k / arr[i]);
					insthere = true;
					else {
						if (k / arr[i] < min) {
							min == k / arr[i];
						}
					}
				}
			}
		}
	std::cout << min;
}
