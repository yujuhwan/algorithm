// ���� 2 : N ���� ���ﰢ���� ����Ѵ�. ��, ����ڷκ��� ������ N�� �Է¹޴´�. 
// N=3 �϶��� ��� ����
//*****
// ***
//  *

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int  i, j;

	printf("�� �� ����� ���ΰ� ? ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++) {			// ��
		for (j = 0; j < i; j++) {			// ���� ���
			printf(" ");
		}
		for (j = 0; j <(n-i)*2-1 ; j++) {		// *  ���
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}