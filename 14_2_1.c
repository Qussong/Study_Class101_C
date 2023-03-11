/*
	숫자 맞추기 1단계 : 
	1~100 사이의 임의의 정수를 생성하고 사용자가 반복 시도하여 맞추는 프로그램을 작성하시오
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

void main() {
	int usernum, match;
	initNumber(1, 100);  // mathnum.c 에 있는 함수 -> 위에 함수선언을 해줘야한다.
	while (1) {
		printf("번호맞추기(1~100) : ");
		scanf("%d", &usernum);
		match = MatchNum(usernum);
		if ( match == 0) {
			printf("맞췄습니다!\n");
			break;  // 맞췄으면 프로그램을 종료한다.
		}
		else if ( match < 0 )
			printf("%d보다 작습니다.\n", usernum);
		else
			printf("%d보다 큽니다.\n", usernum);
	}
	printf("\n게임을 종료합니다! ;)\n");
}
