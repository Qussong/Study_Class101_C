/*
		<< 조건문 >>

	[ if - else ]
	
	ex)
	합격 판정 :
	점수를 입력 받아 60점 이상이면 "합격" 판정해 보자
*/
#include <stdio.h>

int main() {
	int score;

	printf("점수 : ");
	scanf("%d", &score);

	/*printf("합격입니다!\n");
	printf("판정 완료!\n");*/
	
	if (score >= 60)
		printf("합격입니다!\n");  // 입력되는 score 의 점수에 따라 skip 되기도 하고 실행되기도 한다.
	printf("판정 완료!\n");
}
