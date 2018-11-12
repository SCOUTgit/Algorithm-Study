#include <iostream>
#include <algorithm>

struct Meeting
{
	int startTime;
	int endTime;
};

Meeting meeting[100000];

int main() {
	int meetingNumber, sum = 0, end = 0;
	std::cin >> meetingNumber;
	for (int i = 0; i < meetingNumber; i++)
		std::cin >> meeting[i].startTime >> meeting[i].endTime;
	
	std::sort(meeting, meeting + meetingNumber, [](Meeting& a, Meeting& b) {
		if (a.endTime == b.endTime) return a.startTime < b.startTime;
		return a.endTime < b.endTime;
	});
	
	for (int i = 0; i < meetingNumber; i++) {
		if (end <= meeting[i].startTime) {
			end = meeting[i].endTime;
			sum++;
		}
	}
	
	std::cout << sum;

	return 0;
}