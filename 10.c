/*
		<< 문자열의 이해 >>
	- 끝이 '\0'인 문자의 배열
	- '\0'의 이름 :"NULL character", 코드 값 : 0x00

	문자열이란...
	"Hi!" = 'H' + 'i' + '!' +'\0' -> char str[4] = 문자의 배열 (for문 활용 해줘야 한다.)
	-> C언어 라이브러리를 통해 편하게 문자열을 정의 할 수 있다.

	1) char str[4] = "Hi!";
	2) strcpy(str, "Hi!"); - string copy

	ex)
	문자열 기초 : 
	"Hi!12" 문자열을 %s, %c, %x로써 출력해 보자.
	문자열로 초기화 하는 대신 문자로써, 코드로써 초기화해 보자.

	결과)
	Hi!12
	Hi!12
	48 69 21 31 32
*/
#include <stdio.h>
#include <string.h>  // strlen() 함수 사용

int main() {
	// char str[] = "Hi!12";  // 문자열 초기화 방법_1
	// char str[] = { 'H', 'i', '!', '1', '2', '\0' };  // 문자열 초기화 방법_2
	char str[] = { 0x48, 0x69, 0x21, 0x31, 0x32, 0x00 };  // 문자열 초기화 방법_3
	
	/*
		char 6개가 필요하다.필요 갯수만 잡기 위해서 배열크기를 생략해준다.
		그러면 자동으로 크기에 맞는 값이 설정된다.
	*/
	int i, length;
	
	printf("%s\n", str);
	//length = sizeof(str) / sizeof(str[0]);  // 6
	length = strlen(str);  // 5
	//printf("length = %d\n", length);
	for (i = 0; i < length; i++) 
		printf("%c", str[i]);
	printf("\n");

	for (i = 0; i < length; i++)
		printf("%x ", str[i]);
	printf("\n");
	// 48 69 21 31 32
	// 문자 '1', '2' 를 나타내는 코드는 각각 0x31, 0x32 이다.
	printf("sizeof(str) = %d, strlen(str) = %d", sizeof(str), strlen(str));  
	// sizeof(str) = 6, strlen(str) = 5
	// 참고로 char 형의 크기는 1 Byte
}

