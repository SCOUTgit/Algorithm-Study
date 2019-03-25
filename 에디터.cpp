#include <iostream>
#include <list>
#include <string>

int main() {
	int count;
	char command, alp;
	std::string input;
	std::list<char> str;
	std::list<char>::iterator cursor;

	std::cin >> input;
	for (int i = 0; i < input.size(); i++) {
		str.push_back(input[i]);
	}

	cursor = str.end();
	std::cin >> count;

	for (int i = 0; i < count; i++) {
		std::cin >> command;
		switch (command)
		{
		case 'L':
			if(cursor != str.begin())
				cursor--;
			break;
		case 'D':
			if(cursor != str.end())
			cursor++;
			break;
		case 'B':
			if (cursor != str.begin()) {
				cursor--;
				cursor = str.erase(cursor);
			}
			break;
		case 'P':
			std::cin >> alp;
			str.insert(cursor, alp);
			break;
		}
	}

	for (cursor = str.begin(); cursor != str.end(); cursor++) {
		std::cout<<*cursor;
	}	

	return 0;
}