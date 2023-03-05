/*
		<< 반복문 >>

	- while
	- for

*/
#include <stdio.h>

void main() {
	int num, i;
	srand(time(NULL));

	// while 사용
	printf("[ while문 활용 ]\n");
	i = 0;
	while (i < 3) {
		num = (rand() % 11) + 10;
		printf("10~20 사이의 난수_%d : %d\n", i+1, num);

		i++;
	}

	// for 사용
	printf("\n[ for문 활용 ]\n");
	for (i = 0; i < 3; i++) {
		num = (rand() % 3) + 10;
		printf("10~20 사이의 난수_%d : %d\n", i + 1, num);
	}
}
