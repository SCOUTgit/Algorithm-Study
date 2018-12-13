#include <stdio.h>

int maze[4][4];

int main() {
	int i, j, n;
	scanf("%d", &n);
	maze[0][0] = n / 1000;
	maze[0][1] = (n % 1000) / 100; 
	maze[0][2] = (n % 100) / 10;
	maze[0][3] = (n % 10);
	 
	return 0;
}