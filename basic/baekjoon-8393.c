#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int sum = 0;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}

	printf("%d", sum);

	return 0;
}
