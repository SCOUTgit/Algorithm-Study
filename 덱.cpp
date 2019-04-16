#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
	int N, num;
	list<int> l;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		if (str == "push_front") {
			cin >> num;
			l.push_front(num);
		}
		else if (str == "push_back") {
			cin >> num;
			l.push_back(num);
		}
		else if (str == "pop_front") {
			if (l.empty())
				cout << -1 << endl;
			else{
				cout << l.front() << endl;
				l.pop_front();
			}
		}
		else if (str == "pop_back") {
			if (l.empty())
				cout << -1 << endl;
			else{
				cout << l.back() << endl;
				l.pop_back();
			}
		}
		else if (str == "size") {
			cout << l.size() << endl;
		}
		else if (str == "empty") {
			cout << (l.empty() ? 1 : 0) << endl;
		}
		else if (str == "front") {
			if (l.empty())
				cout << -1 << endl;
			else
				cout << l.front() << endl;
		}
		else {
		if (l.empty())
				cout << -1 << endl;
			else
				cout << l.back() << endl;
		}
	}
	return 0;
}