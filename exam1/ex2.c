// 문제 2 : N 줄인 역삼각형을 출력한다. 단, 사용자로부터 임의의 N을 입력받는다. 
// N=3 일때의 출력 예시
//*****
// ***
//  *

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int  i, j;

	printf("몇 출 출력할 것인가 ? ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {			// 행
		for (j = 0; j < i; j++) {			// 공백 출력
			printf(" ");
		}
		for (j = 0; j <(n-i)*2-1 ; j++) {		// *  출력
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}