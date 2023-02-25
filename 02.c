#include <stdio.h>

void main() {
	/*내 정보를 말해 볼께
	name = 김철수;
	age = 23;
	weight = 66.7;
	blood type = A;*/
	
	// [(변수)선언문]
	// 선언문은 실행문 보다 위에 있어야 한다.
	// char, int, double 을 타입이라고 한다.
	// 타입 뒤에 오는걸 '식별자' 라고 한다.
	char* name;  // 문자열 변수 
	int age;  // 정수 Integer
	double weight;  // 실수, 소수점 이하의 자리가 있거나 엄청 큰 정수를 표현할 때 사용
	char blood_type;
	// 식별자는 '프로그래머의 작명'을 의미한다.
	// 식별자에는 작명 규칙이 있다. 영문, 숫자, 언더바(_) 로 이루어 진다.
	// 식별자의 첫번째 문자는 숫자형이 될 수 없다.
	//int 1blood;  // 첫 글자가 숫자라 에러가 발생한다.


	// [실행문]
	// 내 정보를 말해 볼께  // 프로그래머에게 보내는 글(설명문)
	// '=' 대입연산자 : 오른쪽에 있는 값을 왼쪽의 영역에 넣는 역할을 한다.
	// 변수라고 불리는 이유 : 그 값을 변경할 수 있음을 의미한다.
	// /*(내용)*/ 여러줄 주석을 만들 때 사용
	// 들여쓰기는 중괄호가 시작될 때 적용된다.
	/* 들여쓰기는 사람을 위한 것이기에 컴파일러에겐 영향이 없다.
	하지만 들여쓰기를 하지 않으면 사람이 코드를 이해하는데 어려움을 겪기 때문에 
	들여쓰기를 필수로 해준다. */
	// 변수명을 작명할 때 성의 있게 작성하기 그리고 주석도 항상 달아주기
	name = "김철수";
	age = 23;
	weight = 66.7;
	blood_type = 'A';
}
/*
*	현재 *.c 형태로 파일을 생성했기에 C 컴파일러가 소스 코드를 정검하고 있다.
*	이 때, C 컴파일러가 해석 할 수 없는 부분은 붉은 줄이 그이게 된다.
*	붉은 줄로 그인 부분은 C 컴파일러에 맞게 수정을 해줘야 한다.
* 
*	- 숫자는 그냥 적어주면 된다.
*	- 문자의 경우 문자 하나만 있는지? 문자열인지? 에 따라 달라진다.
*		1) 한 문자일 경우 : 앞 뒤에 "" 을 붙여야 한다.
		2) 문자열의 경우 : 앞 뒤에 '' 을 붙여야 한다.
	- 이름 앞에 어떠한 형태인지 알려줘야한다.
		1) char* : 문자열
		2) int : 숫자
		3) double : 실수형 
		4) char : 문자하나
		5) // : C컴파일러가 넘어가도록 하기 위한 기호, 설명문, 주석
	- 변수명은 띄어서 쓰면 안된다.

	- Ctrl + B : 솔루션 빌드
	- Ctrl + F5 : 실행
*/