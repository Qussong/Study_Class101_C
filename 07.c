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
        /*
            if 가 이끄는 구문이 한줄이면 블록 처리를 안해도 되지만
            두줄 이상이 되면 블록처리를 해줘야 한다.
            블록 = 증괄호로 묶어준 영역
            ex)
                if (score >= 60) {
                    printf("합격입니다!\n");
                    printf("축하합니다!\n");
                }
        */
    printf("판정 완료!\n");
}
// 07:40
