/*
		[ 재귀함수 작성 방법 ]

	1. 초기작업 : 외부에서 재귀함수 호출시의 인자값
		
	2. 조건변화 : 재귀 호출시의 인자값 변화
		- 변화가 없는 인자값으로 다시 호출을 하게 되면 결국 '스택오버플로우'가 발생하게된다.
	3. 조건검사 : 최소한의 문제일때 재귀호출 없이 반환하기
		- 반드시 넣어야 한다.
*/

/*
// 초기형태 - 스택오버플로우 발생함
#include <stdio.h>

void PrintHello() {
	printf("Hello\n");
	PrintHello();
}

void main() {
	PrintHello();
}
*/

// 제대로 된 재귀함수 형태
#include <stdio.h>

void PrintHello(int count) {
	// 최소한의 문제(조건검사)
	if (count == 0) {  // count = 0 이 되는 순간 재귀함수가 멈춘다.
		return;  
	}
	printf("Hello\n");
	PrintHello(count-1);
}

void main() {
	PrintHello(3);  // 외부호출
	/*
		Hello
		Hello
		Hello
	*/
}
