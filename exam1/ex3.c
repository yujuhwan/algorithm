// 문제3 : 1000 이하의 3 또는 5의 배수인 자연수들의 합을 구한다。

#include <stdio.h>

int main(void)
{
	int i, j, sum = 0;			// 변수 0으로 초기화

	for (i = 1; i <= 1000; i++) {			// 1~1000까지의 범위
		if ((i % 3 == 0) || (i % 5 == 0)) {		// 3이나 5로 나누어 떨어지면
			sum += i;								// 변수 sum에 누적 합산
		}
	}
	printf("%d", sum);

}