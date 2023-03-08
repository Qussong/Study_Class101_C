/*
	[ 2차원 배열의 인덱스 다루기 ]
	마방진 만들기 : 
	마방진은 가로, 세로, 대각선에 있는 숫자의 합이 모두 똑같은 정방형의 숫자 배열이다.
	배열의 크기를 입력 받아 마방진을 만들어 출력하시오.

	마방진 만들기
		- 맨 윗줄 가운데에서 1로 시작
		- 왼쪽 위 칸으로 이동하면서 1씩 증가된 수로 채우기
		- 새로 채우려는 자리에 이미 숫자가 있으면 기존 위치 바로 아래로 가기
		- 모든 이동 시 '맨 위와 맨 아래', '맨 오른쪽과 맨 왼쪽'은 연결된 것으로 본다.

	형태 : 
		- 마방진 크기 3
			ㅁㅁㅁ
			ㅁㅁㅁ
			ㅁㅁㅁ
*/
#include <stdio.h>

void main() {
	int magic[9][9] = { 0 };
	// 초기화를 해주지 않았기에 빈칸에 0이 들어있다는 보장을 해줄 수 없다.
	// 2차원 배열이지만 값을 하나만 줘도 나머지 다른 원소의 칸에 '0'이 초기값으로 들어간다.
	int size;
	int i, row, col, newrow, newcol;
	printf("마방진 크기(3 / 5 / 7 / 9) : ");
	scanf("%d", &size);
	row = 0;
	col = size / 2;

	for (i = 1; i <= size * size; i++) {
		// 숫자 채우기
		magic[row][col] = i;
		// 다음 위치 정하기
		newrow = (row + size - 1) % size;
		newcol = (col + size - 1) % size;
		if (magic[newrow][newcol] != 0) {
			newrow = (row + 1) % size;
			newcol = col;
		}
		row = newrow;
		col = newcol;
	}

	for (row = 0; row < size; row++) {
		for (col = 0; col < size; col++) {
			printf("%3d", magic[row][col]);
		}
		printf("\n");
	}
}
