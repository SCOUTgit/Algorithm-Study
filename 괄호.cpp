#include <iostream>
#include <string>

int main() {
	std::string str;
	int n = 0, sum = 0;
	std::cin >> n;
	bool yes;
	for (int i = 0; i < n; i++) {
		std::cin >> str;
		yes = true;
		sum = 0;
		for (int j = 0; j < str.size(); j++) {
			if (str[j] == '(')
				sum++;
			else if (str[j] == ')')
				sum--;
			if (sum < 0) {
				std::cout << "NO" << std::endl;
				yes = false;
				break;
			}
		}
		if (yes && sum != 0) {
			std::cout << "NO" << std::endl;
		}
		else if(yes){
			std::cout << "YES" << std::endl;
		}
	}

	return 0;
}