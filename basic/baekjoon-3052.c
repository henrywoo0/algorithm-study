#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input;
	int cnt = 0;
	int arr[42] = { 0, };

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &input);
		arr[input % 42] = 1;
	}

	for (int i = 0; i < 42; i++)
	{
		if (arr[i])
			cnt++;
	}
	
	printf("%d", cnt);

	return 0;
}