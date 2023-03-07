/*
	[ 함수의 활용 ]
	50 ~ 100 사이의 소수를 모두 출력하시오 
*/
#include <stdio.h>

int IsPrime(int n) {  // 매개변수 n에 대한 소수판별
	int i;
	// 소수 판별
	for (i = 2; i < n; i++) {
		if (n % i == 0)  // 입력된 n 이하의 값 중에서 n을 약분할 수 있는 정수가 있는 경우
			return 0;  // false(0)을 반환
	}
	return 1;  // n 을 약분할 수 있는 n보다 작은 수가 없다면 true(1) 반환
}

void main() {
	int num, i;

	// 50 ~ 100
	for (num = 50; num <= 100; num++) {
		if(IsPrime(num) == 1)  // 해당 조건을 만족하면 '소수'다.
			printf("%d\n", num);
	}
}
/*
	함수를 사용함으로 인해
	첩하여 사용하던 for문이 알아보기 편한 구조로 바꿈 (2중 for문 사용 x)
*/
