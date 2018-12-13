#include <iostream>

int arr[2187][2187];
int nm1 = 0;
int n0 = 0;
int n1 = 0;

void checkPaper(int N, int x, int y) {
	for (int i = x; i < N + x; i++) {
		for (int j = y; j < N + y; j++) {
			if (arr[x][y] != arr[i][j]) {
				checkPaper(N / 3, x, y);
				checkPaper(N / 3, x + N / 3, y);
				checkPaper(N / 3, x + (N / 3) * 2, y);
				checkPaper(N / 3, x, y + N / 3);
				checkPaper(N / 3, x + N / 3, y + N / 3);
				checkPaper(N / 3, x + N / 3 * 2, y + N / 3);
				checkPaper(N / 3, x, y + (N / 3) * 2);
				checkPaper(N / 3, x + N / 3, y + (N / 3) * 2);
				checkPaper(N / 3, x + N / 3 * 2, y + (N / 3) * 2);
				return;
			}
		}
	}
	switch (arr[x][y])
	{
	case -1:
		nm1++;
		break;
	case 0:
		n0++;
		break;
	case 1:
		n1++;
		break;
	}
}

int  main() {
	int a = 0, b = 0, c = 0, k = 0;
	int N;
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			std::cin >> arr[i][j];
		}
	}
	
	checkPaper(N, 0, 0);

	printf("%d\n%d\n%d", nm1, n0, n1);

	return 0;
}