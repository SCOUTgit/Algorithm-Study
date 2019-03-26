#include <string>
#include <vector>
#include <list>

using namespace std;

int solution(vector<vector<int>> jobs) {
	int answer = 0;
	int time = 0;
	list<pair<int, int>> jobList;
	list<pair<int, int>>::iterator jobListIter;
	list<pair<int, int>>::iterator min;
	int size = jobs.size();
	for (int i = 0; i < size; i++) {
		jobList.push_back(make_pair(jobs[i][0], jobs[i][1]));
	}
	while (!jobList.empty()) {
		min = jobList.begin();
		for (jobListIter = jobList.begin(); jobListIter != jobList.end(); jobListIter++) {
			if (jobListIter->first <= time && jobListIter->second < min->second) {
				min = jobListIter;
			}
		}
		if (time >= min->first) {
			answer += time - min->first + min->second;
			time += min->second;
			jobList.erase(min);
		}
		else
			time++;
	}
	answer /= size;
	return answer;
}