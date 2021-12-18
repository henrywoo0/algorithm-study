#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Rev(int n)
{
	int returnNum = 0;

	while (n > 0)
	{
		returnNum *= 10;
		returnNum += n % 10;
		n /= 10;
	}

	return returnNum;
}

int main(void)
{
	int n1, n2;

	scanf("%d %d", &n1, &n2);

	printf("%d", Rev(Rev(n1) + Rev(n2)));

	return 0;
}
