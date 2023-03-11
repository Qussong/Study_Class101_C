#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int g_randnum;

// 1~100 사이의 범위에서 난수를 하나 생성한다.
void initNumber(int min, int max) {
	//int randnum;
	srand(time(NULL));
	//randnum = rand() % (max - min + 1) + min;
	g_randnum = rand() % (max - min + 1) + min;
	
}

// 유저가 입력한 값을 인자로 가지며 맞춰야 하는 숫자와의 대소를 비교하는 함수
int MatchNum(int num) {
	if (g_randnum == num)
		return 0;
	else if (g_randnum < num)
		return -1;
	else if (g_randnum > num)
		return 1;
}
