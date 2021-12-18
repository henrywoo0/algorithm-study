#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int startNum = 0;
	int endNum = 0;
	char str[100];
	scanf("%s", str);

	if (atoi(str[0]) == atoi(str[1]) - 1)
	{
		startNum = atoi(str[0]);
	}

	printf("%d", startNum);

	//while (num > 0)
	//{
	//	int first = num / 10;
	//	int second = num / 100 % 10;
	//	int third = num / 1000 % 100;
	//	int fourth = num / 10000 % 1000;
	//	if (first == second - 1) {
	//		startNum = first;
	//	}

	//}

	return 0;
}
