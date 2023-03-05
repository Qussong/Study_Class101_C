/*
	세 수 중 가장 큰 수 :
	세 수를 입력 받아 가장 큰 수를 출력하는 프로그램을 작성하시오

		※ 세 수를 비교하기에 2번 비교 해야한다.

	결과_1)
	세 정수 입력 : 5 7 3
	가장 큰 수는 7

	결과_2)
	세 정수 입력 : 7 3 5
	가장 큰 수는 7

		※ 이와 같은 코드를 테스트 할 땐 가장 큰 수를 제일 처음과 중간에 위치 시켜보자
*/


#include <stdio.h>

int main() {
	int n1, n2, n3, maxNum;

	printf("세 정수입력 : ");
	scanf("%d %d %d", &n1, &n2, &n3);
	/*
	// if문을 중첩하여 사용할 경우 중괄호로 묶어서 잘 구분 지어주기
	if (n1 > n2) {
		if (n1 > n3)
			maxNum = n1;  // n1 이 n2 보다 크고, n3 보다 큰 경우 (n1 > n2 && n1 > n3)
		else
			maxNum = n3;  // n1 이 n2 보다 크고, n3 보다 작은 경우 (n1 > n2 && n1 < n3)
	}
	else {   // n2 와 n3 를 비교하면 된다.
		if (n2 > n3)
			maxNum = n2;  // n2 가 n3 보다 큰 경우 (n2 > n3)
		else
			maxNum = n3;  // n2 가 n3 보다 작은 경우 (n2 < n3)
	}
	printf("가장 큰 수는 %d", maxNum);
	*/

	// 해당 예제 리펙토링 하기

	maxNum = (n1 > n2) ? n1 : n2;  // maxNum 에 n1 과 n2 중 더 큰 수가 대입됨
	if (maxNum < n3)
		maxNum - n3;
	//maxNum = (maxNum > n3) ? maxNum : n3;  // 이것도 되지 않나...?
	printf("가장 큰 수는 %d", maxNum);
}
