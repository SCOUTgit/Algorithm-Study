#include <iostream>

int compare(const void *a, const void *b)    // 오름차순 비교 함수 구현
{
	int num1 = *(int *)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
	int num2 = *(int *)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
	if (num1 < num2)    // a가 b보다 작을 때는
		return -1;      // -1 반환
	if (num1 >= num2)    // a가 b보다 클 때는
		return 1;       // 1 반환
}

int main() {
	int N, arr[10000] = {}, sum = 0, a = 0;
	std::cin >> N;
	for (int i = 0; i < N; i++)
		std::cin >> arr[i];
	std::qsort(arr, N, sizeof(int), compare);

	for (int i = 0; i < N && arr[i] <= 0; i += 2) 
	{
		if (i < N - 1 && arr[i + 1] <= 0) {
			sum += arr[i] * arr[i + 1];
		}
		else {
			sum += arr[i];
			break;
		}
	}
	for (int i = N - 1; i >= 0 && arr[i] > 0; i -= a) {
		if (i > 0 && arr[i] * arr[i - 1] > arr[i] + arr[i - 1]) {
			a = 2;
			sum += arr[i] * arr[i - 1];
		}
		else {
			a = 1;
			sum += arr[i];
		}
	}
	std::cout << sum;
	return 0;
}