#include <iostream>

int weight[5001] = { -1,-1,-1,1,-1, 1 };

int main() {
	int n;
	std::cin >> n;
	for (int i = 6; i <= n; i++) {
		if (weight[i - 5] != -1)
			weight[i] = weight[i - 5] + 1;
		else if (weight[i - 3] != -1)
			weight[i] = weight[i - 3] + 1;
		else
			weight[i] = -1;
	}
	std::cout << weight[n];
	return 0;
}