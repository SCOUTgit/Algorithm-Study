#include <iostream>
#include <string>

int main() {
	std::string str;
	std::cin >> str;
	for (int i = 97; i < 123; i++) {
		if (str.find(char(i)) == std::string::npos)
			std::cout << -1 << " ";
		else
			std::cout << str.find(char(i)) << " ";
	}
	return 0;
}