/*
		20:50
		<< 부동 소수점 사용을 피하는 방법 >>

	이유 :
		1. 오차가 있기 때문에
		2. 연산 속도가 정수에 비해 현저하게 떨어진다.

	부동 소수점이 꼭 필요한 경우 : 
		1. 소수점 아래의 값을 가지고 있을 때 - 해당 경우는 피할 수 있다.
		2. 영역이 매우 큰 값을 표현 하고자 할 때 - 해당 경우는 피할 수 없다.

	[ 피하는 방법 ]
	- 입력은 실수로 받아서 10의 n승을 곱하여 정수로 보관
		사용자로 하여금 소수점 아래의 값을 다루고 있음으로 느끼게 해야하기에
		입력과 출력은 모두 소수점 아래 값의 형태가 되도록 해야한다.
	- 연산은 모두 정수형으로 진행
	- 보여줄 때는 다시 실수로 바꿔서 보여주기

	ex)
		12.34 입력받음
		내부적으로는 * 10^2 를 해줌으로써 1234 로 저장
		정수의 형태로 저장한 값으로 연산

			1. 출력할 땐 * 10^(-2) 를 해준다.
			2. 나눗셈(/)과 나머지 연산자(%)를 활용해서 보여주기
				2468/100 + "," + 2468%100 = 24 + "." + 68 = "24.68"

		위의 두 방법을 사용하면 사용자 입장에선 24.68 로 보이게 된다.
*/

/*
// 원본
#include <stdio.h>

int main() {
	double score1 = 0.6, score2 = 0.5, score3 = 0.1;
	double total, avg;
	int ok;

	total = score1 + score2 + score3;
	avg = total / 3;
	ok = (avg >= 0.3); 

	printf("scores : %lf %lf %lf\n", score1, score2, score3);
	printf("ok = %d\n", ok);
}
*/
#include <stdio.h>

int main() {
	double _score1 = 0.6, _score2 = 0.5, _score3 = 0.1;  // 입력은 실수형으로 받고
	int score1 = _score1 * 10, score2 = _score2 * 10, score3 = _score3 * 10;  // 내부적으론 정수로 연산
	//double total, avg;
	int total, avg;  // total 과 avg 도 정수 값으로 변경
	int ok;

	total = score1 + score2 + score3;
	avg = total / 3 + 0.5;  // 반올림을 해줘야 정확한 값을 얻을 수 있다.
	//ok = (avg >= 0.3);
	ok = (avg >= 3);

	printf("scores : %lf %lf %d.%d\n", 
		score1 * 0.1, score2 * 0.1, score3 / 10, score3 % 10);
	// scores : 0.600000 0.500000 0.1
	printf("ok = %d\n", ok);
}

/*
	[ 배운 내용 요약 ]
	- 부동소수점 표현
	- 부동소수점 사용 시 유의할 점
	- 부동소수점 사용을 피하는 방법
*/
