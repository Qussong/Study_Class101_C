/*
		<< 주소연산자와 문자열 >>
	'문자 배열 원소의 주소값'을 문자열로 사용
	ex)
		char buffer[] = "abc";
		printf("%s", &buffer[1]);  // 'a'를 제외한 나머지 값 출력, bc

*/

/*
#include <stdio.h>

int main() {
	char buffer[] = "abc";
	printf("%s\n", &buffer[0]);  // abc
	printf("%s\n", &buffer[1]);  // bc
	printf("%s\n", &buffer[2]);  // c
}
*/

/*
	ex)
	연월일 입력 받아 연, 월, 일로 분할 : 
	"2020/12/2" 형식으로 날짜를 입력 받아 %s로써 연원일 출력하기

	결과)
	연월일(year/month/day)
	: 2020/12/2
	연=2020 월=12 일=2
*/
#include <stdio.h>

int main() {
	char buffer[100];  // 유저의 입력값을 받을 행렬
	int pos[3] = { 0 };
	int i, idxPos = 1;

	printf("연월일(year/month,day)\n:");
	scanf("%s", buffer);  // buffer 자체가 주소값을 나타낸다.

	i = 0;
	// buffer 이 원소 값이 Null character 가 아닐때 까지 진행하는 반복문
	while (buffer[i] != '\0') {  
		if (buffer[i] == '/') {  // '/'를 만나면 해당 값을 Null Character로 변환
			buffer[i] = '\0';
			pos[idxPos] = i + 1;  // 또한 Null Character 로 변환된 원소의 다음 인덱스값을 pos 행력에 저장
			idxPos++;  // pos 행렬의 인덱스를 나타내는 idxPos 값을 증가시켜준다
		}
		i++;
	}
	/*
	연월일(year / month, day)
	:2023 / 03 / 06
	*/
	printf("pos[0] = %d, pos[1] = %d, pos[2] = %d\n", pos[0], pos[1], pos[2]);
	// pos[0] = 0, pos[1] = 5, pos[2] = 8
	printf("연=%s 월=%s 일=%s\n", &buffer[pos[0]], &buffer[pos[1]], &buffer[pos[2]]);
	// 연=2023 월=03 일=06

	char sample[] = { '1', '2', '\0', '3', '4', '\0', '5', '6' };
	printf("%s\n", sample);  // 12
	//printf("%s\n", sample[0]);  // error 발생
	printf("%s\n", &sample[0]);  // 12
	printf("%s\n", &sample[3]);  // 34

	/*
		[ %s와%c의 차이 ]
		- %s : char* 형을 필요로 한다. 즉, 문자열 포인터가 입력으로 들어가야 한다.
				출력할 때는 지정된 주소부터 '\0 (Null Character)'이 나올때까지 출력한다.
		- %c : char형을 필요로 한다.
	*/
}

