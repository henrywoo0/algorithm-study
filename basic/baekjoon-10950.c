#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int t;
	int a, b;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}

	return 0;
}
