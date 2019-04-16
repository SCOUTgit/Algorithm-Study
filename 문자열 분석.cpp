#include <iostream>
#include <string>

int main() {
	std::string str;
	while (std::getline(std::cin, str)) {
		int small = 0, big = 0, num = 0, space = 0;

		for (char c : str) {
			if (c == ' ')
				space++;
			else if ((int)c >= 48 && (int)c <= 57)
				num++;
			else if ((int)c >= 65 && (int)c <= 90)
				big++;
			else
				small++;
		}
		std::cout << small << " " << big << " " << num << " " << space << std::endl;
	}

	return 0;
}