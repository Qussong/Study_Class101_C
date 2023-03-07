/*
		[ 재귀함수의 적용 상황 ]
	"자신보다 한 단계 작은 문제" 의 답이 있을 경우 그것을 이용하여 답을 얻을 수 있는 문제
		- "자신보다 한 단계 작은 문제"는 원래 문제와 규모만 작을 뿐 "같은"문제여야 함
		ex)
			- 1~N 까지의 합을 구하기
			- N! 구하기 (1~N 까지의 곱)
			- 조합의수 구하기
			- 하노이탑 문제
*/
/*
		[ 팩토리얼 문제 ]
	팩토리얼 구하기 재귀함수 :
	n!을 구하는 프로그램을 재귀함수를 이용하여 만들어보자
*/
#include <stdio.h>
/*
	재귀함수 작성방법
	1. 초기작업 : 인자 값 생성
	2. 조건변화 : 반복 잡업이 됨에 따른 인자 값의 변화
	3. 조건검사 : 인자 값에 대한 조건
*/

int factorial(int n) {
	int fact;

	if (n == 1) {
		return 1;
	}
	fact = factorial(n - 1);
	return fact * n;
}

void main() {
	printf("%d\n", factorial(3));
	/*
		factorial(1) = 1
		factorial(2) = factorial(1) * 2 = 1 * 2 = 2
		factorial(3) = factorial(2) * 3 = 2 * 3 = 6
	*/
}
