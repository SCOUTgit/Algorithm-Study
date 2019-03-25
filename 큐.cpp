#include <iostream>
#include <string>
#include <list>

std::list<int> q;

int main() {
	int count, num;
	std::string command;
	std::cin >> count;
	for (int i = 0; i < count; i++) {
		std::cin >> command;
		if (command == "push") {
			std::cin >> num;
			q.push_back(num);
		}
		else if (command == "pop") {
			if (q.size() > 0) {
				std::cout << q.front() << std::endl;
				q.pop_front();
			}
			else
				std::cout << -1<<std::endl;
		}
		else if (command == "size") {
			std::cout << q.size() << std::endl;
		}
		else if (command == "empty") {
			std::cout << q.empty() << std::endl;
		}
		else if (command == "front") {
			if (q.size() > 0) 
				std::cout << q.front() << std::endl;
			else
				std::cout << -1 << std::endl;
		}
		else if (command == "back") {
			if (q.size() > 0)
				std::cout << q.back() << std::endl;
			else
				std::cout << -1 << std::endl;
		}
	}
	return 0;
}