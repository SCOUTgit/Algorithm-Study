#include <iostream>
#include <queue>

char stone[300000];	//�� ����

int MaxLength(int N, int B, int W) {
	int length = 0, BN = 0, WN = 0;	// ����, ���� ���� ����, �Ͼ� ���� ����
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
	int N, B, W;	// ����, �ִ� ����, �ּ� �Ͼ�
	std::cin >> N >> B >> W;
	for (int i = 0; i < N; i++)
		std::cin >> stone[i];

	std::cout << MaxLength(N, B, W);

	return 0;
}