#include <iostream>
#include <string>

int arr1[50][50];
int arr2[50][50];

void changeArr(int x, int y) {
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			arr1[x + i][y + j] = 1 - arr1[x + i][y + j];
		}
	}
}

int compare(int n, int m) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (arr1[i][j] != arr2[i][j])
				return 0;
		}
	}
	return 1;
}

int main() {
	int i, j, n, m, total = 0;
	std::string num;
	std::cin >> n >> m;
	for (i = 0; i < n; i++) {
		std::cin >> num;
		for (j = 0; j < m; j++) {
			arr1[i][j] = num.at(j) - '0';
		}
	}
	for (i = 0; i < n; i++) {
		std::cin >> num;
		for (j = 0; j < m; j++) {
			arr2[i][j] = num.at(j) - '0';
		}
	}

	for (i = 0; i < n - 2; i++) {
		for (j = 0; j < m - 2; j++) {
			if (compare(n, m))
				break;

			if (arr1[i][j] != arr2[i][j]) {
				total++;
				changeArr(i, j);
			}
		}
	}

	if (compare(n, m))
		printf("%d", total);
	else
		printf("-1");

	return 0;
}