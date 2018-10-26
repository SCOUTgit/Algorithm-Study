#include <iostream>

bool num[1000001];

int main() {
	long long int min, max;	// min, max
	std::cin >> min >> max;	// min�� max�� �Է¹޴´�.
	
	// �������� max���� Ŀ�� �� ��ŭ ������.
	for (long long i = 2; i * i <= max; i++) 
	{
		long long start = min / (i * i);	// start�� min���� ������������ �������� ���� ���̴�.
		if (start * i * i != min)start++;	// ���� ���� �������� min���� ������ start�� 1�� ���Ѵ�.
		for (long long j = start; i * i * j <= max; j++)	// i�� ������ j�� ���ؼ� �������� ã�Ƽ� true�� ��ȯ���ش�.
			num[i * i * j - min] = true;
	}

	int count = 0;
	for (int i = 0; i < max - min + 1; i++)
		if (!num[i])count++;

	std::cout << count;
	return 0;
}

// ���� �ڷ� : http://deque.tistory.com/76