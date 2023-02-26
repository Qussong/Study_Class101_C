/*
	15:10

	[ 연습문제 - 부동소수점 연산 시 유의사항2 ]
	10분의 1 확률로 2번 연속 뽑힐 확률은 100분의 1과 같은지 프로그램으로 확인해보자
	
	즉, 0.1*0.1 과 0.01 의 확률이 같은지 확인해보는 문제
*/

/*
#include <stdio.h>

int main() {
	double percentage = 0.1 * 0.1;
	int same;

	same = (percentage == 0.01);  // '=='

	printf("0.1 * 0.1 == 0.01\n");
	printf("same = %d", same);  // same = 0 = false
}
*/

/*
	비교해야하는 두 실수 A, B 의 크기 비교를 할 때...
	(A - B)의 절대값 < 입실론 값 
	위의 비교가 true 이면 A와 B를 같다고 표현할 수 있다.

	입실론 값? : 무시할 수 있을 정도로 작은 값
*/

#include <stdio.h>
#include <float.h>  // 입실론 값을 제공해준다.(FLT_EPSILON)
#include <math.h>  // 절대값을 구할 수 있게 해준다. (fabs)

int main() {
	double percentage = 0.1 * 0.1;
	int same;

	//same = fabs(percentage - 0.01) < FLT_EPSILON;
	// FLT_EPSILON 은 1에 비해 작은 값을 나타낸다. 때문에 정확성의 기준에 따라 조정을 해줘야한다.
	same = fabs(percentage - 0.01) < (0.01 * FLT_EPSILON);
	printf("0.1 * 0.1 == 0.01\n");
	printf("same = %d", same);  // same = 1 = true
}
