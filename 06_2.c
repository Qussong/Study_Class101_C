/*
	[ 난수 사용 ]
	- 난수 : '아무거나' 를 의미한다.
	- 컴퓨터의 입장에선 처리할 수 없는 연산
	- 의사 난수를 사용해서 처리한다.
	- rand() : 0 ~ 0x7FFF 범위의 수를 랜덤으로 생성한다.
	- srand() :
		rand 함수는 srand 함수에 의존적이다.
		seed + rand 를 의미하며 seed 값에 따라 rand()의 반환 값도 달라지게된다.
		만약 해당 함수를 호출 하지 않고 rand 함수를 사용하면 자동으로 srand(1)의 효과가 적용된다.

	순서 : srand() -> rand() 

	ex)
	난수생성 방법 : 
	10 ~ 20  사이의 난수를 3번 연속 생성하시오.
	
	- 10 ~ 20 사이의 난수 구하는 법 : 
		1단계 : n = rand();  // 0 ~ 0x7FFF 범위의 난수 생성
		2단계 : n = n % 11;  // 0 ~ 10 범위의 난수 구하기
		3단계 : n = n + 10;  // 베이스 넘버를 증가 시켜 10 ~ 20 범위의 난수 구하기
		최종 : n = (rand() % 11) + 10;
*/
#include <stdio.h>
#include <stdlib.h>  // srand, rand
#include <time.h>  // time

void main() {
	int num;

	srand(time(NULL));  // srand 에 time(NULL) 을 통해 매번 다른 매개변수를 넣어줌

	num = (rand() % 11) + 10;  // 10 ~ 20
	printf("10 ~ 20 사이의 난수_1 : %d\n", num);
	num = (rand() % 11) + 10;
	printf("10 ~ 20 사이의 난수_2 : %d\n", num);
	num = (rand() % 11) + 10;
	printf("10 ~ 20 사이의 난수_3 : %d\n", num);
}
// 26:20
