/*
		<< 문자열 관련 함수들 >>
	배열을 다루려면 반복문이 필수다.
	이러한 불편한 점들을 해결 할 수 있도록 지원되는 함수들이 있다.

	- strcpy
		string copy
		strcpy(A, B) : B에 있는 문자열을 A로 복사해준다.
	- strcmp
		string compare
		charcter (char)형에는 비교연산자(==, < , >)를 사용할 수 있다.
		문자열은 char 형의 배열이다.
		문자열은 기본 자료형이 아니기에 비교연산자를 사용할 수 없다.
		strcmp(a, b) : a가 큰 경우 '1', b가 큰 경우 '-1'을 반환한다. 동일할 경우 '0'을 반환한다.
	- strlen
		string length
		문자열의 길이를 반환한다.
	- atoi
		ASCII to Integer = 문자를 정수로 변환함을 의미한다.
		ex_1) int num = atoi("123"); // 정수로 변환이 가능한 문자열을 atoi를 통해 정수형으로 변환할 수 있다.
		ex_2) int num = atoi("xyz"); // 정수로 변환이 불가능하다.
*/

/*
	문자열 관련 함수 사용 예 :
	입금액 또는 출금액을 바복적으로 입력 받으며 잔고를 관리하는 프로그램을 작성하시오

	결과)
	잔고 = 0원
	입금/출금 000원 (종료 = Enter)
	: 입금 1200원

	잔고 = 1200원
	입금/출금 000원 (종료 = Enter)
	: 출금 500원

	잔고 = 700원
	입금/출금 000원 (종료 = Enter)
	: 

	- 한글은 2 Byte를 차지한다.
		ex) 입금 1200원 = 12 Byte (Null Character 포함)

*/
#include <stdio.h>

void main() {
	int amount = 0, newAmount;
	char str[100];
	int i;

	// 값을 입력받는 과정
	while (1) {
		printf("\n잔고 = %d원\n", amount);
		printf("입금 / 출금 000원(종료 = Enter)\n:");
		//scanf(" %s", str);  // 문제를 일으킬 수 있다. scanf는 tab, space, enter 를 모두 문장의 끝으로 인식한다.
		gets(str);  // gets 는 지정해준 매개변수에 입력된 값을 넣어주는데 이때 enter 값 만을 문장의 끝으로 인식한다.

		if (strlen(str) == 0)  // enter 를 입력하면 str 에 아무런 값이 들어가지 않아 배열의 길이가 '0'이 된다.
			break;  // 자기가 속한 반복문을 탈출, while 문 탈출
		for (i = 0; i < strlen(str); i++) {
			if (str[i] == ' ') {
				str[i] = '\0';
				newAmount = atoi(&str[i + 1]);  // str[i+1] : 하나의 char , &str[i+1] : 주소
				break;  // for문 탈출
			}
		}
		// 입금 or 출금 판별
		if (strcmp("입금", str) == 0)
			amount += newAmount;
		else if (strcmp("출금", str) == 0)
			amount -= newAmount;
		else
			printf("\n잘못된 값을 입력하였습니다.\n");
	}
}

