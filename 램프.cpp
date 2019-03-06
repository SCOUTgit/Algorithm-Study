#include <iostream> 
#include <string>
#include <unordered_map>

std::unordered_map <std::string, int> lamp;	// 책상 위의 램프
std::string table[50];	// 책상
int turnOff[51];		// 꺼져있는 램프
int N, M, K, max;		// 행의 개수, 열의 개수, 스위치 작동 가능 횟수, 최댓값

int main() {
	int turnOffLamp;
	std::cin >> N >> M;
	for (int i = 0; i < N; i++) {
		std::cin >> table[i];
		if (lamp.find(table[i]) == lamp.end())
			lamp.insert(std::make_pair(table[i], 1));
		else
			lamp[table[i]]++;
	}
	std::cin >> K;

	for(std::pair<std::string, int> oneLamp : lamp) {
		turnOffLamp = 0;
		for (int j = 0; j < M; j++) {
			if (oneLamp.first.at(j) == '0')
			{
				turnOffLamp++;
			}
		}
		if (turnOff[turnOffLamp] < oneLamp.second)
			turnOff[turnOffLamp] = oneLamp.second;
	}
	for (int i = 0; i <= M; i++) {
		if (i % 2 == K % 2 && turnOff[i] > max && i <= K)
			max = turnOff[i];
	}

	std::cout << max;
	return 0;
}