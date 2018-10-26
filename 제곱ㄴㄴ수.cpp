#include <iostream>

bool num[1000001];

int main() {
	long long int min, max;	// min, max
	std::cin >> min >> max;	// min과 max를 입력받는다.
	
	// 제곱수가 max보다 커질 때 만큼 돌린다.
	for (long long i = 2; i * i <= max; i++) 
	{
		long long start = min / (i * i);	// start는 min에서 완전제곱수로 나눠지는 작은 수이다.
		if (start * i * i != min)start++;	// 가장 작은 제곱수가 min보다 작으면 start에 1을 더한다.
		for (long long j = start; i * i * j <= max; j++)	// i의 제곱과 j를 곱해서 제곱수를 찾아서 true로 변환해준다.
			num[i * i * j - min] = true;
	}

	int count = 0;
	for (int i = 0; i < max - min + 1; i++)
		if (!num[i])count++;

	std::cout << count;
	return 0;
}

// 참조 자료 : http://deque.tistory.com/76