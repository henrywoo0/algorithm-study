#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	int first, second, third;

	scanf("%d %d", &a, &b);

	first = a * (b / 100);
	second = a * (b % 100 / 10);
	third = a * (b % 10);

	printf("%d\n", third);
	printf("%d\n", second);
	printf("%d\n", first);

	printf("%d\n", third + second * 10 + first * 100);

	return 0;
}
