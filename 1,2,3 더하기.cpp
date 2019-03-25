#include <iostream>

int main() {
	int T, n, x, y, z;
	std::cin >> T;
	for (int i = 0; i < T; i++) {
		std::cin >> n;
		x = 1;
		y = 2;
		z = 4;
		for (int j = 4; j <= n; j++) {
			int tx = x, ty = y, tz = z;
			x = ty;
			y = tz;
			z += tx + ty;
		}
		switch (n)
		{
		case 1:
			std::cout << x << std::endl;
			break;
		case 2:
			std::cout << y << std::endl;
			break;
		default:
			std::cout << z << std::endl;
			break;
		}
	}
	return 0;
}