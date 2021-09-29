#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isMultiple(int num, int divnum)
{
	if (num % divnum)
		return 0;
	else
		return 1;
}

int main(void)
{
	int year;

	scanf("%d", &year);

	if (isMultiple(year, 4) && (!isMultiple(year, 100) || isMultiple(year, 400)))
		printf("1");
	else
		printf("0");

	return 0;
}
