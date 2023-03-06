/*
	극장 예매 할인 좌석 적용(방법_2) :
	극장 좌석 예매 시에 관람에 불리한 5개 좌석은 "할인" 그 외는 "일반"요금을 받으려 한다.
	할인 좌석 번호를 배열에 입력해 두고 활용하시오.
*/
#include <stdio.h>

int main() {
	//int discount[5] = { 1, 3, 5, 7, 34 };
	int discount[] = { 1, 3, 5, 7, 34 };  
	// 초기화 값을 줄 때 이와 같이 배열의 크기를 입력하지 않아도 자동으로 5가 적용된다.
	int count = sizeof(discount) / sizeof(discount[0]);  // 배열의 크기 / 배열의 첫번째 원소의 크기 = 배열내에 들어 있는 원소의 개수
	// printf("%d", count);  // 5
	// sizeof 는 생긴건 함수 같아도 '연산자' 이다.
	// sizeof의 괄호 안에 변수 또는 타입을 넣으면 그에 해당하는 Byte 수를 반환한다.
	int num, i;

	printf("예매할 좌석 (1~34) : ");
	scanf("%d", &num);

	// 할인 좌석 번호가 저장되어 있는 행렬 discount 와 유저로 부터 입력받은 값을 비교
	for (i = 0; i < count; i++) {
		if (discount[i] == num)
			break;  // 할인 좌석 번호가 발견되면 반복문 탈출
	}
	if (i < count)  // 중간에 탈출하여 count(=5) 보다 작은 i 값을 가지게 되면 할인가 적용
		printf("할인가 적용\n");
	else  // 할인 좌석 번호 비교 결과 위의 루프를 전부 돌게되어 i 값이 count 보다 큰 값을 가지면 정상가 적용
		printf("정상가 적용\n");

	/*
		만약 후에 할인좌석을 추가하고자 한다면 
		해당 하는 좌석번호를 discount 행렬에 추가해주면 된다.
	*/
}
/*
	배열 사용방법...
	아래의 방법 둘 중 하나만 사용 둘을 섞어서 사용하면 헷갈린다.

	방법_1)
	#define ARR_SIZE 10
	int arr[ARR_SIZE] = {0};

	방법_2)
	int discount[] = {1, 2, 3, 4, 5};
	int count = sizeof(discount) / sizeof(discount[0])
*/

/*
	배열이란?
	- 동일한 자료형의 여러 변수들을 일괄 선언
	- 저장장소의 연속된 위치에 저장

	배열관련
	- index 사용 영역과 for문의 반복제어변수 이용한 배열 탐색

	배열 사용의 2가지 방법
	- #define 으로써 배열 원소수 표현
	- sizeof로써 배열 원소수 얻어 사용
*/
