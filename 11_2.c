/*
	[ 여러 문자열을 본관하는 2차원 배열 ]
	- 문자열 자체가 문자(char)의 1차원 배열이다.

	3개 문자열 중 가장 큰 것 찾기 : 
	3개의 문자열을 입력 받아 사전 순으로 가장 큰 문자열을 출력하자

	결과)
	정렬할 문자열 3개 : 
	Kim
	Lee
	Park
	가장 큰 문자열 : Park
*/
#include <stdio.h>
#define STR_COUNT 3

void main() {
	char strs[STR_COUNT][20];
	int i, maxi = 0;

	printf("정렬한 문자열 %d개 : \n", STR_COUNT);
	for (i = 0; i < STR_COUNT; i++) {
		scanf("%s", strs[i]);
		/* strs[i]은 행에대해선 지정을 해줬지만, 열에 대해선 지정해주지 않은 것이기에 
			이 자체로 i행의 열들에 대한 주소값이 된다. */
	}
	/*
	if (strcmp(strs[0], strs[1]) < 0)  // 1번과 2번 문자열의 크기 비교
		maxi = 1;
	if (strcmp(strs[maxi], strs[2]) < 0)  // 1,2번 중 더 큰 문자열과 3번 문자열의 크기 비교
		maxi = 2;
	*/
	// 위의 문장을 아래와 같이 수정할 수 있다.
	for (i = 1; i < STR_COUNT; i++) {
		if (strcmp(strs[maxi], strs[i]) < 0)
			maxi = i;
	}

	printf("가장 큰 문자열 : %s\n", strs[maxi]);
}
