#include <iostream>

int main() {
	int N, K, A[10] = {}, coin = 0;	// N : µ¿Àü ´ÜÀ§ °¹¼ö, K : µ·, A : µ¿Àü ´ÜÀ§, coin : µ¿Àü °¹¼ö
	std::cin >> N >> K;
	for (int i = 0; i < N; i++)
		std::cin >> A[i];
	for (int i = N - 1; i >= 0; i--) {
		while (K / A[i] > 0) {
			K -= A[i];
			coin++;
		}
	}
	std::cout << coin;
	return 0;
}