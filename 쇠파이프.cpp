#include <iostream>
#include <string>

std::pair<int, int> pipe[50000], checkPipe[50000];
int razor[50000];

int main() {
	std::string str;
	int checkPipeNum = 0, pipeNum = 0, razorNum = 0, count, total = 0, i = 0;
	std::cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(') {
			checkPipeNum++;
			checkPipe[checkPipeNum - 1].first = i;
		}
		else {
			if (str[i - 1] == '(')
			{
				checkPipeNum--;
				razor[razorNum++] = i - 1;
			}
			else
			{
				checkPipe[checkPipeNum - 1].second = i;
				pipe[pipeNum++] = checkPipe[checkPipeNum-- - 1];
			}
		}
	}

	for (i = 0; pipe[i].second != 0; i++) {
		count = 0;
		for (int j = 0; j < razorNum; j++) {
			if (razor[j] >= pipe[i].first && razor[j] < pipe[i].second)
				count++;
		}
		total += count + 1;
	}

	std::cout << total;

	return 0;
}