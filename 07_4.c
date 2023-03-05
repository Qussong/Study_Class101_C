/*
        학점 판정 :
        점수를 입력 받아 90점 이상이면 A학점을, 80점 이상이면 B학점을,
        70점 이상이면 C 학점을, 그 외는 F 학점을 부여한다.

        결과_1)
        점수 : 90
        A학점 입니다
        판정 완료!

        결과_2)
        점수 : 59
        F학점입니다.
        판정 완료!

        위의 문제를 switch 문을 활용하여 해결하자
*/

#include <stdio.h>

int main() {
        int score;

        printf("점수 : ");
        scanf("%d", &score);
    
        switch (score / 10) {
        // switch 의 매개변수로 scroe 를 넣게되면 100의 경우에 대한 case 문을 작성해야한다.
        case 10 :
            //printf("만점입니다.\n"); break;
        case 9 :
            printf("A학점입니다.\n"); break;  // 10일 경우에도 해당 구문이 실행된다.
        case 8:
            printf("B학점입니다.\n"); break;
        case 7:
            printf("C학점입니다.\n"); break;
        default : 
            printf("F학접입니다.\n");
        }
        printf("판정 완료!");
}
