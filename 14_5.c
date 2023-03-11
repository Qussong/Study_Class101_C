/*
	[ 초기화 안된 변수의 값 ]
	- 스택 영역
		default : 쓰레기 값
		변수종류 : 지역변수
	- 데이터 영역
		default : 0
		전역변수, static 변수
*/
#include <stdio.h>

static int num1;
int num4;
/*
	전역변수는 외부 파일에서 접근을 할 수 있기에 
	프로그램 관리차원에서 좋지 않다.
	때문에 굳이 사용한다면 static 예약어를 붙임으로써 외부에서 접근하지 못하게 해야하며
	가능하다면 static 지역변수를 통해 해결하도록 한다.
*/

void main() {
	int num2;
	static int num3;

	printf("num1 : %d\n", num1);  // 0
	//printf("num2 : %d\n", num2);  
	// ↑ 예외가 발생한다.
	// The variable 'num2' is being used without being initialized.
	printf("num3 : %d\n", num3);  // 0
	printf("num4 : %d\n", num4);  // 0
}
/*
	[ 변수의 유효범위 정리 ]
	1. 전역변수와 지역변수
		특정 블록에 속한 변수는 지역 변수, 속하지 않은 변수 : 전역변수
	2. extern
		다른 파일의 함수, 변수에 대한 선언
		실제 선언이 아니고, 정보만 주는 것
	3. static
		전역변수 : 다른 파일에서 extern 하지 못함
		지역변수 : 데이터영역 (스택 영역 x)에 잡히게된다.
	4. 메모리 영역
		스택영역, 데이터영역 : 초기 값이 다르다.
*/
