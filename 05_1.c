/*
	[ 현재 시간 입력 받기 ]

	현재 시각을 "00:00:00" 형식으로 입력 받아 "0시 0분 0초" 형식으로 출력하시오
*/

#include <stdio.h>

int main() {
	int hour, minute, second;

	printf("현재 시각(00:00:00) : ");
	scanf("%d:%d:%d", &hour, &minute, &second);
	/*
		입력받을 값에 대한 '형식 지정자' 만 있는게 아니라 
		위의 예시의 콜론(:)처럼 형식 지정자 사이에 일반문자가 있으면, 
		값을 입력해줄 때 일반문자를 생략하거나 앞/뒤에 공백을 넣으면 안된다.

		이렇게 정형화된 form 을 입력 받을 수 있다는 건 장점이지만,
		해당 form을 사용하게 되면 일체 다른 형식을 입력 받을 수 없다는 단점이 생긴다.
	*/
	printf("%d시 %d분 %d초\n", hour, minute, second );
}
