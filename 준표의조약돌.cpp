#include <iostream>
#include <queue>

char stone[300000];	//돌 패턴

int MaxLength(int N, int B, int W) {
	int length = 0, BN = 0, WN = 0;	// 길이, 검은 돌의 개수, 하얀 돌의 개수
	std::queue<char> q;
	for (long i = 0; i < N; i++) {
		if (stone[i] == 'W')
			WN++;
		else
			BN++;

		q.push(stone[i]);
		
		if (length < q.size() && WN >= W && BN <= B)
			length = q.size();
		while (BN > B) {
			if (q.front() == 'W')
				WN--;
			else
				BN--;
			q.pop();
		}
	}

	return length;
}

int main() {
	int N, B, W;	// 갯수, 최대 검정, 최소 하양
	std::cin >> N >> B >> W;
	for (int i = 0; i < N; i++)
		std::cin >> stone[i];

	std::cout << MaxLength(N, B, W);

	return 0;
}