#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*static*/ int g_randnum;
/*
	만약 외부에서 전역변수에 접근하지 못하게 하려면 static 키워드를 붙여주면된다.
	즉, 전역변수에 static 키워드를 붙여주면 외부에서 extern 으로 정보를 끌어가지 못한다.
	"확인할 수 없는 외부 기호 g_randnum" 이라는 오류가 발생한다.

	단, static 이라는 예약어는 전역변수와 지역변수 앞에 사용될 때 용도가 다르다.
*/ 

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
