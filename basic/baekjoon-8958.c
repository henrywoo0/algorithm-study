#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	int cnt, score;
	char str[100] = "";

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s", str);
		cnt = 0;
		score = 0;
		for (int j = 0; j < strlen(str); j++)
		{
			if (str[j] == 'O')
			{
				cnt++;
				score += cnt;
			}
			else 
			{
				cnt = 0;
			}
		}
		printf("%d\n", score);
	}

	return 0;
}