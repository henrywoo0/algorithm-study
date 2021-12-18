#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long sum(int* a, int n)
{
	long long sum = 0;
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", *(a + i));
		sum += *(a + i);
	}

	return sum;
}

int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	printf("%lld", sum(arr, 5));

	return 0;
}
