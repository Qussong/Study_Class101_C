/*
	
	[ 시분초 출력 ]
	시, 분, 초를 각각 정수로 입력 받아 00:00:00 형태로 출력하시오
	입력)
	12:05:00
	결과)
	시 : 12
	분 : 5
	초 : 0
*/
#include <stdio.h>

int main() {
	int hour, min, sec;

	printf("시 : "); scanf("%d", &hour);
	printf("분 : "); scanf("%d", &min);
	printf("초 : "); scanf("%d", &sec);

	printf("%2d:%2d:%2d\n", hour, min, sec);
	printf("%02d:%02d:%02d\n", hour, min, sec);  // 빈 자리에 0 입력하기
}
