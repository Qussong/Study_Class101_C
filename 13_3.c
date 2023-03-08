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
/*
	[ 재귀 함수와 반복구문 비교 ]

	- 반복구문
		재귀적인 문제 해결 시에 논리가 복잡
		but 재귀함수에 비해 성능적인 이슈가 없음
	- 재귀함수
		재귀적인 문제 해결 시에 논리가 간결
		빈번한 함수 호출/반환으로 인해 성능 떨어짐 (스택에 쌓임)
		스택 오버플로우 발생가능성 있음

	재귀적인 문제라고 하여 무조건 재귀함수를 사용하는것 보단...
	재귀 호출이 2회 이상 필요한 경우에 사용하자
	ex) factorial 의 경우 재귀적인 문제이나 반복구문으로 해결해도 크게 복잡하진 않다.
*/


/*
	[재귀함수 정리]
	1. 재귀함수 자성 방법
	- 초기작업 : 외부에서 재귀함수 호출시의 인자값
	- 조건변화 : 재귀 호출시의 인자값 변화
	- 조건검사 : 최소한의 문제일 떄 재귀호출 없이 반환하기

	2. 재귀함수의 장단점
	- 장점 : 재귀적인 문제에 적용시 논리가 간결
	- 단점 : 빈번한 함수 호출/반환으로 인한 성능 저하와 이에따른 스택오버플로우 발생 가능성

	3. 결론
	반복구조 사용시에도 간단히 해결 가능할 경우에는 사용하지 말자 ex) factorial
*/