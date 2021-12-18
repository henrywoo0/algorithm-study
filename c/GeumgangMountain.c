#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int from, count, target, temp;
	int findCnt = 0;
	int i = 1;

	scanf("%d %d %d", &from, &count, &target);

	while (1)
	{
		if (i > 12000)
		{
			i -= 12000 - count;
		}
		temp = i + count;
		for (; i < temp; i++)
		{
			findCnt++;
			if (target == i)
				break;
		}
		if (target == i)
			break;
		i += from - count;
	}

	printf("%d", findCnt);

	return 0;
}
