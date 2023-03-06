/*
		<< 다차원 배열 >>

	[ 2차원 배열 ]
	- 프로그래머의 편의성을 제공하기위해 2차원 배열을 지원한다.
	- 하지만, 실제 메모리에 저장되는 형식은 1차원 배열의 형식이다.
	- 모든 행을 하나의 행 처럼 쭉 나열되어 있는 1차원 배열의 형택인 것을 
		2차원 배열인것 처럼 보이게 만들어준 것 뿐

	- 2차원 배열의 선언 :
		int arr2D[num1][num2] -> num1 : 행(row) num2 : 열(column)
		ex)
			int arr[3][2] = {
				{1, 2},
				{3, 4},
				{5, 6}
			};

	- 1차원 배열의 선언 :
		int arr[num1]
		ex)
			int arr[2] = {1, 2};
*/

/*
	2차원 배열 원소 접근하기 : 
	2차원 배열 (3x4 행렬)을 만들고 출력하시오

	2차원 배열의 모든 원소를 출력하기 위해서는 for문을 중첩해서 사용해줘야 한다.
*/
#include <stdio.h>
#define ROW 3
#define COL 4

void main() {
	int _2D[ROW][COL] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	int row, col;

	for (row = 0; row < ROW; row++) {
		for (col = 0; col < COL; col++) {
			printf("%3d", _2D[row][col]);
		}
		printf("\n");
	}

}
