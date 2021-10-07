#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char words[100][50] = { "" };

int compareString(char s1[], char s2[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (s1[i] != s2[i])
			return s1[i] > s2[i] ? 1 : 0;
	}
}

void swap(int a, int b)
{
	char temp[50] = "";
	strcpy(temp, words[a]);
	strcpy(words[a], words[b]);
	strcpy(words[b], temp);
}

void bubbleSort(int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 1; j < n - i; j++)
		{
			if (strlen(words[j - 1]) > strlen(words[j]))
				swap(j - 1, j);
			else if (strlen(words[j - 1]) == strlen(words[j]))
				if (compareString(words[j - 1], words[j], strlen(words[j - 1])))
					swap(j - 1, j);
		}
	}
}

int main(void)
{
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%s", words[i]);
	
	bubbleSort(n);

	for (int i = 0; i < n; i++)
	{
		if (!strcmp(words[i], words[i + 1]))
			continue;
		printf("%s\n", words[i]);
	}

	return 0;
}
