#include <iostream>

long long count[1000001] = { 0, 2, 7, 22 };

int main() {
	int sqaure;
	long long sum = 1;
	std::cin >> sqaure;
	for (int i = 4; i <= sqaure; i++) {
		sum += count[i-3] % 1000000007;
		count[i] = count[i - 1] * 2 % 1000000007 + count[i - 2] * 3 % 1000000007 + sum * 2 % 1000000007;
	}
	std::cout << count[sqaure] % 1000000007;
	return 0;
}