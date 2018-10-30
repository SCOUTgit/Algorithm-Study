#include <iostream>

int compare(const void *a, const void *b)    // �������� �� �Լ� ����
{
	int num1 = *(int *)a;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������
	int num2 = *(int *)b;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������
	if (num1 < num2)    // a�� b���� ���� ����
		return -1;      // -1 ��ȯ
	if (num1 >= num2)    // a�� b���� Ŭ ����
		return 1;       // 1 ��ȯ
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