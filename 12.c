/*
		<< 함수의 이해 >>
		1. 라이브러리 함수
		2. main 함수
		3. 사용자 정의 함수
	
	1,2번의 경우 지금까지 사용하고 있었음
*/
#include <stdio.h>

void PrintHello(void) {  // 매개변수를 받지 않는 함수 
	// 매개변수란의 void 는 생략가능하다.
	printf("안녕하세요.\n");
}

void PrintHello2(int num) {
	printf("아녕하세요 %d번 고객님\n", num);
}

void PrintChar(char ch, int count) {
	int i;
	for (i = 0; i < count; i++) {
		printf("%c ", ch);
	}
	printf("\n");
}

void main() {
	PrintHello();
	PrintHello2(2);
	PrintChar('A', 10);
	PrintChar('B', 20);
}

