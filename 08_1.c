/*
	
	[ 반복문 안에 조건문, break ]
	ex)
	소수 판별 :
	정수를 입력 받아 소수인지 판별하시오.

	결과_1)
	소수 판별할 수 : 11
	소수입니다.

	결과_2)
	소수 판별할 수 : 9
	소수가 아닙니다.
*/
#include <stdio.h>

int main() {
	int num, i;

	printf("소수 판별할 수 : ");
	scanf("%d", &num);

	for (i = 2; i < num; i++) {
		if ((num % i) == 0)
			break;
	}
	if (i == num)
		printf("%d는 소수입니다.\n", num);
	else
		printf("%d(은)는 소수가 아닙니다.\n", num);
}
