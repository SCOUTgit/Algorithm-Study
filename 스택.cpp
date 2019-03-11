#include <iostream>
#include <string>

class stack {
private:
	int size;
	int arr[10000] = { 0 };
	int top;
public:
	stack() {
		top = 0;
		size = 0;
	}
	~stack() {
	}
	void Push(int num) {
		size++;
		arr[size - 1] = num;
		top = arr[size - 1];
	}
	int Pop() {
		if (size == 0)
			return -1;
		int num = top;
		size--;
		if (size > 0) {
			top = arr[size - 1];
		}
		return num;
	}
	int GetSize() {
		return size;
	}
	int GetTop() {
		return size > 0 ? top : -1;
	}
	int GetEmpty() {
		return size > 0 ? 0 : 1;
	}
};

int main() {
	stack *s = new stack();
	int N, num;
	std::string str;
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		std::cin >> str;
		if (!str.compare("push")) {
			std::cin >> num;
			s->Push(num);
		}
		else if (!str.compare("pop")) {
			std::cout<<s->Pop()<<std::endl;
		}
		else if (!str.compare("size")) {
			std::cout<<s->GetSize()<<std::endl;
		}
		else if (!str.compare("top")) {
			std::cout<<s->GetTop()<<std::endl;
		}
		else if (!str.compare("empty")) {
			std::cout<<s->GetEmpty()<<std::endl;
		}
	}
	
	return 0;
}