/*
	입출력 사용

	printf 와 scanf 뒤의 'f'는 formated 의 약자이다.
	- print formated : 양식에 맞춰서 출력
	- scan formated : 양식에 맞춰서 입력

	scanf 사용하기 전...
	- Standard C Library 에 포함된 함수
	- buffer overflow 라는 취약성이 확인된 함수
	- scanf_s : scanf 함수의 취약성을 보완한 함수

	VS에 있는 C 컴파일러는 scanf_s 의 사용을 권장한다.
	때문에 scanf 함수를 사용하고자 한다면 아래의 설정을 해줘야 한다.
	솔로션 이름 아래 프로젝트명 우클릭 -> 속성 -> C/C++ -> 일반 -> SDL 검사 : No 설정 해주기
	위의 설정을 해주면 scanf 함수를 사용할 수 있다.
	
	[scanf 사용하여 신상 정보 입력 받기]
*/
#include <stdio.h>

/*
	준비사항
	- 장소준비 : 변수선언
	- 타입에 따른 입력
*/
void main() {
	int age;
	float height;
	char bloodType;
	int hexavalue;

	printf("나이를 입력해주세요 : ");  
	// scanf 앞에는 printf 를 통해 입력 받을 값에 대한 설명을 적어줘야 한다.
	scanf("%d", &age);  
	// scanf 로 값 입력을 받으려면 변수 명 앞에 & 기호를 붙여줘야 한다.
	printf("키 : "); 
	scanf("%f", &height);
	printf("혈액형 : "); 
	//scanf("%c", &bloodType);  // 오류 발생
	/*
		위의 scanf 가 입력을 안 받고 넘어가다가 갑자기 입력을 받는 이유 :
		scanf 로 입력을 받게 되면 키보드 입력을 받는 buffer를 2중으로 받게 된다.
		일단은 '시스템버퍼'에 쌓이게 된다. enter(\n) key 를 받아들이는 순간...
		'시스템 버퍼' -> '프로그램 버퍼' 의 과정을 가지게 된다.
		이때 입력 받은 enter 는 다음 입력을 받을 때까지 대기하다가 지워지는게 일반적인데
		%c 서식문자의 경우... 특이하게 앞의 공백문자를 지워주지 않고 
		프로그램 버퍼 안에 남아 있는 문자를 받아들인다.
		그렇게 하지 않게 위해 %c 앞에 공백문자를 추가해준다.
		- 공백문자의 종류 : enter, space, tab (눈에 보이지 않는 문자를 의미한다.)
		공백문자를 하나 추가해주면 버퍼에 남아있던 공백문자들이 제거되는 효과가 있다.
	*/
	scanf(" %c", &bloodType);
	printf("15를 16진수로 : "); 
	scanf("%x", &hexavalue);

	printf("나이 : %d", age);
	printf("키 : %f", height);
	printf("혈액형 : %c", bloodType);
	printf("15를 16진수로 : %x", hexavalue);
}

// 12 : 40
