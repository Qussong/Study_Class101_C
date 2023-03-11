/*
	[전역변수의 유효범위]
	- 전처리기 명령어 아래에 선언한다.
	- 전역변수를 구분하기 위해 네이밍 'g_'와 같은 구분할 수 있는 키워드를 넣어준다.
*/
#include <stdio.h>
int g_count = 0;  // 전역변수임을 나타내기위해 'g_'키워드를 붙임

void fn1() {
	g_count++;
	printf("fn1 : g_count=%d\n", g_count);
}

void main() {
	g_count++;
	printf("main : g_count=%d\n", g_count);
	fn1();
	printf("main : g_count=%d\n", g_count);
}
