#include <iostream>
#include <math.h>
#include <time.h>

int num[1000000];
int prime[100000];


int sqr(int n) { return n*n; }

int main() {
	long long int min, max, total;			// max, min
	int pn = 0; // 模熱偎熱, 薯培中中熱曖 偎熱
	int overlap=0;

	std::cin >> min >> max;
	total = max - min + 1;
	
	for (int i = 0; i < sqrt(max); i++)
		num[i] = i + 1;

	for (int i = 1; i < sqrt(max); i++) {
		if (num[i] == 0) { continue; }
		for (int j = num[i]*2; j <= sqrt(max)+10; j+=num[i]) {	num[j-1] = 0; }
	}
	for (int i = 1; i < sqrt(max); i++) {
		if (num[i] != 0) {prime[pn++] = num[i];}
	}

	std::cout << pn << std::endl;
	
	for (int i = 0; i < pn; i++) {
		overlap = 0;
		for (int j = i+1; j < pn; j++) {
			if (prime[i] * prime[j] <= sqrt(max)) {
				overlap += (max / sqr(prime[j])) / sqr(prime[i]);
				overlap -= (min / sqr(prime[i])) / sqr(prime[i]);
			}
			else{break;}
		}
		std::cout << total << "-" << max / sqr(prime[i]) << "+" << (min - 1) / sqr(prime[i]) << "+" << overlap << std::endl;

		total = total - max / sqr(prime[i]) + (min-1)/sqr(prime[i]) + overlap;
	}

	std::cout << total << std::endl;

	return 0;
}