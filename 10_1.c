/*
	ex)
	문자열 입력받기 : 
	문자열을 입력 받아 그대로 출력해 보자.

	결과)
	문자열 : HiHi
	HiHi

	'& (주소연산자)' 에 대하여 알아본다


*/
#include <stdio.h>
#include <string.h>

int main() {
	//int num;
	char buffer[100];

	printf("문자열 : ");
	scanf("%s", buffer); // buffer 에는 '&(주소연산자)'을 붙이지 않는다...?
	//scanf("%d", &num);

	printf("%s", buffer);
}
/*
	buffer 의 경우 이름 자체가 주소 값을 나타낸다.
	★ [배열의 이름] 은 그 자체가 주소 값을 나타낸다.
*/
