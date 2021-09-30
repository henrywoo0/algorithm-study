#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	int a, b, newNum;
	int cnt = 0;

	scanf("%d", &num);

	newNum = num;

	do {
		a = newNum / 10;
		b = newNum % 10;
		newNum = b * 10 + (a + b) % 10;
		cnt++;
	} while (num != newNum);

	printf("%d", cnt);

	return 0;
}