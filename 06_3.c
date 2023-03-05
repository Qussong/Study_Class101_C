/*
	난수 이용한 가위바위보 게임 :
	컴퓨터와 사용자가 가위바위보를 내게 하고 누가 이겼는지 파단해 보자

	컴퓨터(computer)의 값 난수
	사용자(user)의 값 입력 값

	가위 0 , 바위 1, 보 2

	승패판단?
	(n+1)%3 한 값의 비교
*/
#include <stdio.h>
#include <stdlib.h>  // rand, srand
#include <time.h>  // time
int main() {
	int user, computer;
	int userwin, comwin;

	srand(time(NULL));
	computer = rand() % 3;  // 나머지 연산에 의해 0, 1, 2 의 값만 나온다
	
	printf("가위(0) 바위(1) 보(2)");
	scanf("%d", &user);  // user의 입력 받기

	userwin = ((computer + 1) % 3 == user);  // computer + 1 == user 이면 user의 값이 더 큰 것이기에 user의 승
	comwin = ((user + 1) % 3 == computer); 

}
