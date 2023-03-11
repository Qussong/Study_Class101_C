/*
	숫자 맞추기 3단계 : 
	1~100 사이의 임의의 정수를 생성하고 사용자가 반복 시도하여 맞추는 프로그램을 작성하시오
	단, main 함수에서 정답을 가져다가 미리 보여줘 보자..!
			+ 시도한 횟수도 마지막에 출력해주자

*/

/*
	main.c 
		mathnum.c 파일에 있는 함수들을 불러서 사용한다.
	mathnum.c
		InitNumber()
		MathNum()
*/
#include <stdio.h>

void initNumber(int min, int max);
int MatchNum(int num);
extern int g_randnum;  // 외부에 있는 전역변수의 정보를 불러올 수 있다.
/*
	전역변수는 변수를 선언한 파일 외에 다른 파일에서도 볼 수 있다.
	전역변수의 선언문을 복사하여 해당 전역변수를 보고자 하는 파일에 붙여넣기를 한다.
	이렇게 하면 한 프로그램안에 동일한 변수명을 가진 전역변수를 두번 선언한게 된다.
	이는 허용되지 않는다.
	떄문에 앞에 extern 이라는 예약어를 붙여준다.
	extern : 이렇게 생긴 함수/변수가 어딘가에 있다.
*/

void main() {
	int usernum, match;
	initNumber(1, 100);  // mathnum.c 에 있는 함수 -> 위에 함수선언을 해줘야한다.
	printf("정답은 %d\n", g_randnum);  // 정답을 알려준다.
	while (1) {
		printf("번호맞추기(1~100) : ");
		scanf("%d", &usernum);
		match = MatchNum(usernum);
		if ( match > 0) {
			printf("%d번만에 맞췄습니다!\n", match);
			break;  // 맞췄으면 프로그램을 종료한다.
		}
		else if ( match < -1 )
			printf("%d보다 작습니다.\n", usernum);
		else
			printf("%d보다 큽니다.\n", usernum);
	}
	printf("\n게임을 종료합니다! ;)\n");
}
