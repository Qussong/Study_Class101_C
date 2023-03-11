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
/*
	양수 : 정답! (시도한 횟수)
	-1 : 더 크게
	-2 : 더 작게
*/
int MatchNum(int num) {
	static int s_count = 0;  // 지역변수
	s_count++;
	/*
		count 를 지역변수를 만들게 되면 호출될 때 마다 0으로 초기화가 되어버린다.
		때문에 static 예약어를 붙여준다.
		main 함수가 시작되면 static 키워드가 붙은 지역변수의 영역이 생성되게 되며,
		이는 main 함수가 종료되기전까지 유지된다.
		해당 지역변수가 있는 함수가 처음 실행되는 순간만 수행이되고
		두번째 호출될때부턴 해당 static 지역변수의 선언문은 건너뛰게 된다.

	*/
	if (g_randnum == num)
		return s_count;
	else if (g_randnum < num)
		return -2;
	else if (g_randnum > num)
		return -1;
}
