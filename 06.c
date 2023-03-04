/*
		<< 연산자의 이해 >>
		C언어의 기본과 논리구조 만들기

		[ 산술, 대입, 형변환연산자 ]
		- 산술 : 사칙연산자 + 나머지 연산자
		- 대입 : = (equal)
		- 형변환 연산자 : ...?

		ex)
		두 수의 가감승제 : 
		두 수를 입력 받아 가감승제(+,-,*,/) 한 결과를 출력하시오.

		- "num1 = num1 + num2" = "num1 += num2"
*/

#include <stdio.h>

int main() {
	int num1, num2;

	printf("2개의 정수입력 : ");
	scanf("%d %d", &num1, &num2);

	printf("num1 = %d num2 = %d 가 = %d\n", num1, num2, num1 + num2);
	printf("num1 = %d num2 = %d 감 = %d\n", num1, num2, num1 - num2);
	printf("num1 = %d num2 = %d 승 = %d\n", num1, num2, num1 * num2);
	printf("num1 = %d num2 = %d 제 = %d\n", num1, num2, num1 / num2);

	/*
		정수 값을 실수 타입으로 표현하고자 하면 제대로 된 결과 값이 나오지 않는다.
		num1 / num2 는 '이항연산자' 이다. 피연산자를 2개 가진다는 의미이다.
		★ 사칙연산에서 두개의 피연산자 중 하나라도 실수의 형태라면 결과 값은 실수의 형태가 된다.
		★ 양쪽이 모두 정수인 경우에만 결과값이 정수의 형태가 된다.
	*/
	printf("\n- test -\n");
	printf("num1 = %d num2 = %d 제 = %f\n", num1, num2, num1 / 3);  // 정상적인 값이 나오지 않는다.
	printf("num1 = %d num2 = %d 제 = %f\n", num1, num2, num1 / 3.0);
	printf("\n- 형변환 연산자 사용 -\n");
	printf("num1 = %d num2 = %d 제 = %f\n", num1, num2, num1 / (float)num2);
	printf("num1 = %d num2 = %d 제 = %f\n", num1, num2, (float)num1 / num2);
	

}
