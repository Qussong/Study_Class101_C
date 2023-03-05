/*
		<< switch >>
*/
#include <stdio.h>

int main() {
	int num;
	printf("정수 입력(1~3) : ");
	scanf("%d", &num);

	switch (num) {  // 매개변수로 들어온 값과 case 로 가지고 있는 값을 비교하여 1회 jump 시켜준다.
		// jump 가 된다면 해당 case 구문 부터 아래로 쭉 전부 실행된다.
		// 그렇기에 해당 case 외에 다른 case 구문의 실행을 원치 않는다면 'break;' 를 추가해줘야한다.
	case 1:
		printf("1 이에요");
		break;
	case 2:
		printf("2 이에요");
		break;
	case 3:
		printf("3 이에요"); 
		break;
	default:
		// 어떠한 case에도 부합하지 않는 경우 default 를 실행 시킨다. 
		// 일반적으로 default 는 제일 switch문 제일 아래에 위치한다.
		printf("잘못된 값을 입력하였습니다.");
	}
}
