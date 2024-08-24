// 문제1 : N 줄인 삼각형을 출력한다. 단, 사용자로부터 임의의 N을 입력받는다. 
// N=3 일때의 출력 예시
//  *
// ***
//*****

#include <stdio.h>

int main()
{
	int n;		// 몇 줄
	int i, j;	

	printf("몇 출 출력할 것인가 ? ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)			// 행 수
	{
		// // 두 개의 j에 대한 for문은 다른 for문
		for (j = 0; j < (n-1)-i; j++)		// 공백 출력 
		{
			printf(" ");
		}
		for (j = 0; j < 2*i+1; j++)		// * 출력
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}