#include <stdio.h>

int main() 
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	if (a % 2 != 0) {
		printf("홀수");
	}
	else {
		printf("짝수");
	}
	printf("+");
	if (b %2 != 0) {
		printf("홀수");
	}
	else {
		printf("짝수");
	}
	printf("=");
	if ((a + b) % 2 == 0) {
		printf("짝수");
	}
	else {
		printf("홀수");
	}

	return 0;
}
