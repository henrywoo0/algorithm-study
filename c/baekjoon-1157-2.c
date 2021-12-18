#include <stdio.h>

int main(void)
{
	int check[26] = { 0, }, max = 0, flag = 0;
	char word = 0;
	while (1) {
		word = getchar();
		if (word == '\n') break;
		if (word >= 97)
			word -= 32;
		check[word - 65]++;

		if (check[word - 65] > max) {
			flag = word - 65;
			max = check[word - 65];
		}
	}

	int i;

	for (i = 0; i < 26; i++)
		if (check[i] == check[flag] && i != flag) break;

	if (i != 26) printf("?");
	else printf("%c", flag + 65);

	return 0;
}
