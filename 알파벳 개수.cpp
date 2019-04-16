#include <iostream>
#include <string>

int main() {
	int a[26] = { 0 };
	std::string str;
	std::cin >> str;
	for (int i = 0; i < str.size(); i++) {
		a[int(str[i]) - 97]++;
	}
	for (int i = 0; i < 26; i++)
		std::cout << a[i] << " ";
	return 0;
}