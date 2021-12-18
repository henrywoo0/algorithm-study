#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int c, n;
	int sum;
	int score[1000] = { 0, };
	int studentCnt;
	double avg;

	scanf("%d", &c);

	for (int i = 0; i < c; i++)
	{
		scanf("%d", &n);
		sum = 0;

		for (int j = 0; j < n; j++)
		{
			scanf("%d", &score[j]);
			sum += score[j];
		}

		avg = (double)sum / n;
		studentCnt = 0;

		for (int j = 0; j < n; j++)
		{
			if ((double)score[j] > avg)
				studentCnt++;
		}

		printf("%.3lf%%\n", (double)studentCnt / n * 100.0);
	}

	return 0;
}