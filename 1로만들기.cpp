#include <iostream>

int arr[1000001];

int main() {
	int n;
	std::cin >> n;
	arr[1] = 0;
	arr[2] = 1;
	arr[3] = 1;
	for (int i = 4; i <= n; i++)
	{
		if (i % 2 == 0 && arr[i / 2] <= arr[i - 1]) {
			if (i % 3 == 0) {
				if (arr[i / 2] <= arr[i / 3])
					arr[i] = arr[i / 2] + 1;
				else
					arr[i] = arr[i / 3] + 1;
			}
			else
				arr[i] = arr[i / 2] + 1;
		}
		else if (i % 3 == 0 && arr[i / 3] <= arr[i - 1]) {
			arr[i] = arr[i / 3] + 1;
		}
		else
			arr[i] = arr[i - 1] + 1;
	}
	std::cout << arr[n];
	return 0;
}