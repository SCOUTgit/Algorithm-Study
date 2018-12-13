#include <iostream>
#include <algorithm>

int compare1(const void *a, const void *b)    // �������� �� �Լ� ����
{
	int num1 = *(int *)a;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������
	int num2 = *(int *)b;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������
	if (num1 >= num2)    // a�� b���� ���� ����
		return -1;      // -1 ��ȯ
	if (num1 < num2)    // a�� b���� Ŭ ����
		return 1;       // 1 ��ȯ
}

int compare2(const void *a, const void *b)    // �������� �� �Լ� ����
{
	int num1 = *(int *)a;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������
	int num2 = *(int *)b;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������
	if (num1 < num2)    // a�� b���� ���� ����
		return -1;      // 1 ��ȯ
	if (num1 >= num2)    // a�� b���� Ŭ ����
		return 1;       // -1 ��ȯ
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