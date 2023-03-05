/*
		[ 구구단 출력 ]
		2단~9단을 출력하시오
*/
#include <stdio.h>

int main() {
	int i, j;

	printf("[ 구구단 출력 ]\n");

	for (int i = 2; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			printf("%d x %d = %d ", i, j, i*j);
		}
		printf("\n");
	}
}
