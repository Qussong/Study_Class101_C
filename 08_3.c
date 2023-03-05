/*
		<< 이중반복구조 >>

	반복문 안에 반복문 (2중 반복) : 
	50~100 사이의 소수를 모두 출력하시오.
*/
#include <stdio.h>

int main() {
	int num=50, i;

	// for문 활용
	printf("[ for문 활용 ]\n");

	for(num = 50; num <= 100; num++) {
		for (i = 2; i < num; i++)
			if (num % i == 0)
				break;
		if (i == num)
			printf("%d\n", num);
	}

	num = 50;
	// while문 활용
	printf("\n[ while문 활용 ]\n");

	while (num <= 100) {
		i = 2;  // 새로운 num의 값에 대한 소수판별을 할때마다 i 값 초기화
		while (i <= num) {
			if (num % i == 0)
				break;
			i++;
		}
		if (i == num)
			printf("%d\n", num);

		num++;
	}


	
}
