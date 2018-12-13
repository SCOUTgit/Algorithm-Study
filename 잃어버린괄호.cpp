#include <iostream>
#include <string>

std::string s;

int main() {
	std::cin >> s;
	std::string num;
	bool a = false;
	int total = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '-') {
			if (a) {
				total -= std::stoi(num);
				num.clear();
			}
			else {
				a = true;
				total += std::stoi(num);
				num.clear();
			}
		}
		else if (s[i] == '+') {
			if (a) {
				total -= std::stoi(num);
				num.clear();
			}
			else {
				total += std::stoi(num);
				num.clear();
			}
		}
		else
		{
			num += s[i];
		}
	}
	if (a) {
		total -= std::stoi(num);
	}
	else {
		total += std::stoi(num);
	}

	std::cout << total;
	return 0;
}