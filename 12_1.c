#include <stdio.h>

int add(int x, int y) {
	int sum = x + y;
	return sum;// 반환값이 있기에...
}

void add2(int x, int y);  // 함수의 선언만 따로 때서 위에 올려두고 정의는 따로 해줄 수 있다.

void main() {
	int num;
	num = add(3, 5);
	printf("sum = %d\n", num);
	add2(3, 5);
}

void add2(int x, int y) {
	int sum = x + y;
	printf("sum = %d", sum);
}
/*
	- 함수정의
	- 함수선언
	- 함수호출
	위의 3가지 요소가 어우러져서 함수가 돌아간다.
*/
