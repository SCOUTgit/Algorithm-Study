#include <iostream>

int map[100][100];	// 지도
int N, L, road;		// N : 지도의 한변의 길이, L : 경사로의 길이, road : 지나갈 수 있는 길의 갯수

int CountLength(int line[100], int first) {
	int count = 0;
	for (int i = first; line[first] == line[i]&&i<N; i++) {
		count++;
	}
	return count;
}

int CheckRoad(char D, int A) {	// D : 방향, A : 위치
	int line[100] = {};
	int length = 1, now = 0;
	if (D == 'X') {
		for (int i = 0; i < N; i++)
			line[i] = map[A][i];
	}
	else if (D == 'Y') {
		for (int i = 0; i < N; i++)
			line[i] = map[i][A];
	}

	for (int i = 1; i < N; i++) {
		if (line[now] == line[i]) {
			now = i;
			length++;
		}
		else if (line[now] - line[i] == 1) {
			if (CountLength(line, i) >= L) {
				now = i;
				length = -L + 1;
			}
			else
				return 0;
		}
		else if (line[now] - line[i] == -1) {
			if (length >= L) {
				now = i;
				length = 1;
			}
			else
				return 0;
		}
		else
			return 0;
	}

	return 1;
}


int main() {
	std::cin >> N >> L;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			std::cin >> map[i][j];

	for (int i = 0; i < N; i++) {
		road += CheckRoad('X', i);
		std::cout << CheckRoad('X', i) << "\t" << i << std::endl;
	}
	for (int i = 0; i < N; i++) {
		road += CheckRoad('Y', i);
		std::cout << CheckRoad('Y', i) << "\t" << i << std::endl;
	}
	
	std::cout << road;

	return 0;
}