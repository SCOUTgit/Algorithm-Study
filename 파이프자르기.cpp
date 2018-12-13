#include <iostream>
#include <algorithm>

int compare1(const void *a, const void *b)    // 내림차순 비교 함수 구현
{
	int num1 = *(int *)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
	int num2 = *(int *)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
	if (num1 >= num2)    // a가 b보다 작을 때는
		return -1;      // -1 반환
	if (num1 < num2)    // a가 b보다 클 때는
		return 1;       // 1 반환
}

int compare2(const void *a, const void *b)    // 오름차순 비교 함수 구현
{
	int num1 = *(int *)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
	int num2 = *(int *)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
	if (num1 < num2)    // a가 b보다 작을 때는
		return -1;      // 1 반환
	if (num1 >= num2)    // a가 b보다 클 때는
		return 1;       // -1 반환
}

int pipe() {


}

int arrM[50], arrN[1023];

int main() {
	int M, N;
	std::cin >> M;
	for (int i = 0; i < M; i++)
		std::cin >> arrM[i];
	std::cin >> N;
	for (int i = 0; i < N; i++)
		std::cin >> arrN[i];

	std::qsort(arrM, M, sizeof(int), compare2);
	std::qsort(arrN, N, sizeof(int), compare1);

	

	return 0;
}