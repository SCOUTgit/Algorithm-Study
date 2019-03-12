#include <iostream>
#include <cmath>

int main() {
	long long X, Y, Zx;	// °ÔÀÓÀÇ ÃÑ È½¼ö, °ÔÀÓÀ» ÀÌ±ä È½¼ö
	std::cin >> X >> Y;
	Zx = 100 * Y / X + 1;
	if ((long long)((long long)99 * X - (long long)100 * Y) <= 0)
		std::cout << -1;
	else 
		std::cout << (long long)ceil((double)(X * Zx - 100 * Y) / (double)(100 - Zx));
	return 0;
}