#include <iostream>
#include <list>

int main() {
	std::list<int> nList;
	std::list<int>::iterator nListIter;
	std::list<int> jnList;
	int n, m;
	std::cin >> n >> m;
	for (int i = 0; i < n; i++) {
		nList.push_back(i+1);
	}
	nListIter = nList.begin();
	while (!nList.empty()) {
		for (int i = 0; i < m - 1; i++) {
			if (nListIter == nList.end())
				nListIter = nList.begin();
			nListIter++;
		}
		if (nListIter == nList.end())
			nListIter = nList.begin();
		jnList.push_back(*nListIter);
		nListIter = nList.erase(nListIter);
		if(nListIter == nList.end())
			nListIter = nList.begin();
	}
	std::cout << "<" << *jnList.begin();
	nListIter = jnList.begin();
	nListIter++;
	for (; nListIter != jnList.end(); nListIter++)
		std::cout << ", " << *nListIter;
	std::cout << ">";

	return 0;
}