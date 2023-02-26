/*
	강의 제목 : 실수 표현의 이해 - float 타입의 표현방법과 장단점
 
		<< 실수 표현의 이해 >>
	실수는 소수점 아래까지 표현할 수 있는 수를 의미한다.

	[ 부동 소수점 ]
	floating point
	소수점 자리를 옮겨가면서 표현 할 수 있음을 의미한다.
	실수를 4개의 byte (= 32개의 bit) 로 표현할 때 3부분으로 나눠서 표현한다.
	(부호 / 지수부 / 정수부)

	- 지수표현 : 실수를 표현할 때 제일 앞의 수를 소숫점 첫째 자리로 옮겨서 표현하는 방법
		ex_1) (10진수) 12.536 = 0.12536 * 10^2
		ex_2) (2진수) 0.0011001 (2)
				유효자리수(0이 아닌 수)를 소수점 첫번째 자리에 둬야한다.
					?.11001 * 2^(-2)
				이 때  11001 을 정수부에 넣고, 승에 해당하는 -2 를 지수부에 넣어준다.

	[ 고정 소수점 vs 부동 소수점 ]
	1. 고정 소수점은 정확하지만 부동 소수점은 오차가 발생 할 수 있다.
	2. 고정 소수점은 표현 영역이 상대적으로 좁다. 그에 비해 부동 소수점은 지수부의 
		수정으로 좀 더 넓은 영역을 표현 할 수 있기에 상대적으로 표현 영역이 넓어진다.
	3. 고정 소수점은 정수만 표현 가능하지만, 부동 소수점은 실수도 표현 가능하다.

*/	

/*
	[ 부동 소수점 연산 실습 ]
	3개의 과제에 대해 각각 0.1~1.0 사이의 점수를 소수점 아래 하 자리까지 부여했다.
	3개 과제의 평균이 0.3 이상이면 "과제 통과" 입니다. 
	통과 여부가 확인되는 프로그램을 작성하자.
*/
#include <stdio.h>

int main() {
	// float : 4byte 로 부동 소수점 표현을 한다.
	// double : 8byte 로 부동 소수점 표현을 한다. 기본값
	double score1 = 0.6, score2 = 0.5, score3 = 0.1;
	double total, avg;
	int ok;

	total = score1 + score2 + score3;
	avg = total / 3;
	ok = (avg >= 0.3); // C언어에서 true = 1 , false = 0

	//printf("scores : %d %d %d\n", score1, score2, score3);
	printf("scores : %lf %lf %lf\n", score1, score2, score3);
	// scores : 0.600000 0.500000 0.100000
	// 원하는 자리수 까지 출력하는 방법도 있으나 뒤에 배운다.
	printf("ok = %d\n", ok);
	// ok = 1

	/*
		'printf' : format string '%d' requires an argument of type 'int', but variadic argument 1 has type 'double'
		위의 에러가 발생한다.
		score 1,2,3 은 double 형태 즉, 실수이기에 실수를 받아주는 서식문자 %f 또는 %lf 를 사용해줘야 한다.
		f 는 float (4byte)
		lf 는 double (8byte)에 사용한다.
	*/

	// 12:05
}


