/*
		<< 변수의 유효범위 >>

	[지역변수의 유효 범위]
	- 지역변수 : 중괄호 안에 선언된 변수
	- 유효범위 : 선언한 변수를 사용할 수 있는 영역
	- 파라미터로 전달된 인자값은 함수내의 전역변수역할을 한다.
	- 함수단위의 지역변수 외에 더 작은 범위의 지역변수가 있다.
		ex) for문
		아래의 for문의 변수 i 도 지역변수이다.
		for (int i = 0; i < 3; i++) {
		printf("Hello\n");
		}

*/
#include <stdio.h>
/*
	main 함수와 fn1 함수의 내부에 선언된 num1 은 선언된 중괄호 영역 내에서만 접근 가능하다.
	fn1_1 함수의 파라미터로 들어간 변수 n은 fn1_1함수 범위내의 전역변수 역할을 한다.
*/

void fn1();
void fn1_1(int n);

void main() {
	int num1 = 10;
	printf("main : %d\n", num1);
	fn1();
	fn1_1(10);  // fn1_1함수의 전역변수 10
	for (int i = 0; i < 3; i++) {  // for문의 지역변수 i
		printf("Hello\n");
	}
}

void fn1() {
	int num1 = 11;
	printf("fn1 : %d\n", num1);
}

void fn1_1(int n) {
	int num1 = 11;
	printf("fn1 : %d\n", n);
}
