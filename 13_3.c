/*
		[ 하노이탑 ]
	
	최소한의 문제해결 = 조건검사
*/
#include <stdio.h>

void Hanoi(char from, char mid, char to, int n) {  
	// from/mid/to : 기둥을 표시하는 3개의 값(출발지/경유지/목적지) n : 원반의 갯수
	// 최소한의 문제해결 (조건 검사) - 해당 조건을 기준으로 재귀호출 종료
	if (n == 1) {
		printf("%d : %c -> %c\n", 1, from, to);
		return;
	}
	// 2번이 재귀호출이 발생한다.
	// 하노이탑 문제를 factorial 과 같이 반복구조로 해결을 하게되면 훨씬 복잡해진다.
	Hanoi(from, to, mid, n - 1);  // n-1개의 원반을 출발지에서 경유지로 옮긴다.
	printf("%d : %c -> %c\n", n, from, to);  // n번째 원반을 출발지에서 목적지로 옮긴다.
	Hanoi(mid, from, to, n - 1);  // n-1개의 원반을 다시 경유지에서 목적지로 옮긴다.
}

void main() {
	Hanoi('A', 'B', 'C', 3);
	/*
		1 : A -> C
		2 : A -> B
		1 : C -> B
		3 : A -> C
		1 : B -> A
		2 : B -> C
		1 : A -> C
	*/
}
