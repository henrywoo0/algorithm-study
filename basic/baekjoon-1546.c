#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, m = 0;
	int arr[10000];
	double sum = 0.0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] > m)
			m = arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		sum += (double)arr[i] / m * 100;
	}

	printf("%lf", sum / n);

	return 0;
}
