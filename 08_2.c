/*
	[ 조건에 의한 반복과 continue ]
	정수를 연속으로 입력 받아 양수들만의 합을 구하여 출력하시오.
	0이 입력되면 종료한다.

	결과_1)
	정수 입력 (0=종료) : -2
	정수 입력 (0=종료) : 2
	정수 입력 (0=종료) : 3
	정수 입력 (0=종료) : 0
	양수의 합 = 5
*/
#include <stdio.h>

int main() {
	int num, sum = 0;  // num = 입력받을 수, sum = 총 합이 저장될 변수(초기값 0)
	while (1) {  // while 문의 조건식에 true(1)이 들어가면 무한루프
		printf("정수 입력(0=종료) : ");
		scanf("%d", &num);
		if (num < 0)
			continue;
		else if (num == 0)
			break;
		else
			sum += num;
	}
	printf("양수의 합 = %d", sum);
}
