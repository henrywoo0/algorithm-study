#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int cntArr[26] = { 0, };
	char str[100] = { "", };
	int max[2] = { 0, }; // [0]에는 그 문자가 나온 횟수, [1]에는 문자의 인덱스 값

	scanf("%s", str);

	for (int i = 0; str[i] != NULL; i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
			cntArr[str[i] - 65]++;
		else if (str[i] >= 97 && str[i] <= 122)
			cntArr[str[i] - 97]++;
		else
		{
			printf("입력값이 옳지 않습니다.\n");
			return 1;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (cntArr[i] > max[0])
		{
			max[0] = cntArr[i];
			max[1] = i;
		}
		else if (cntArr[i] == max[0])
			max[1] = -1;
	}

	printf("%c", max[1] == -1 ? '?' : max[1] + 65);

	return 0;
}
