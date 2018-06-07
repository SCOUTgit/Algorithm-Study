#include <iostream>

class stone {
private:
	int Bn;
	int Wn;
	char *color;
public:
	stone(char *CA,int nb,int nw) {
		this->color = CA;
		this->Bn = nb;
		this->Wn = nw;
	}

};

int main() {
	int N, B, W;

	std::cin >> N >> B >> W;

	char *ca = new char[N];	//돌 패턴

	int nb = 0, nw = 0, Sn = 0;	//흑돌 개수, 백돌 개수, 총 길이

	for (int i = 0; i < N; i++) {
		std::cin >> ca[i];
		switch (ca[i])
		{
		case 'B':
			nb++;
			break;
		case 'W':
			nw++;
			break;
		default:
			break;
		}
	}

	stone *st = new stone(ca, nb, nw);

	for (int i = 0; i < N; i++) {
		
	}

	std::cout << Sn << std::endl;

	delete[] ca;
	delete st;

	return 0;
}