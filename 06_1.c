/*
	[ 나머지연산자 활용 방법 ]
	
	ex)
	현재 원의 다음 달 알아보기 :
	현재 월을 입력 받아 다음 달의 숫자를 추력해 보자
	
	입력_1)
	현재 월(1~12) : 1
	결과_1)
	다음 달은 2월

	입력_2)
	현재 월(1~12) : 12
	다음 달은 1월

	[ 1항 연산자 ]
	var ++
	++ var
	var --
	-- var
*/
#include <stdio.h>

void main() {
	int month;

	printf("현재 월(1~12) : ");
	scanf("%d", &month);

	//month -= 1;
	month = (month + 1) % 12;
	printf("다음 달은 %d월\n", month);
}
