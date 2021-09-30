#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, x;
	int a[10000] = { 0, };

	scanf("%d %d", &n, &x);

	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (int i = 0; i < n; i++)
	{
		if (a[i] < x)
			printf("%d ", a[i]);
	}

	return 0;
}