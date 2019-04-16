#include <iostream>

long long arr[31] = { 0, 0, 3 };

int main() {
	int n;
	long long sum = 0;
	std::cin >> n;

	for (int i = 4; i <= n; i += 2) {
		arr[i] = arr[i - 2] * 3 + sum * 2 + 2;
		sum += arr[i - 2];
	}

	std::cout << arr[n];
	return 0;
}