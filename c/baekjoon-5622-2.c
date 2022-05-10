
#include <stdio.h>
#include <string.h>

int dial(int num);
int main(){
	char input[15];
	int t = 0;

	scanf("%s", input);

	for (int i = 65; i <= 90; i++)
	{
		for (int j = 0; j < strlen(input); j++)
		{
			if( input[j] == i){
				t += dial(i);
			}
		}
	}

	printf("%d", t);

	return 0;
}

int dial(int num){
	switch (num)
	{
	case 'A':
	case 'B':
	case 'C':
		return 3;

	case 'D':
	case 'E':
	case 'F':
		return 4;

	case 'G':
	case 'H':
	case 'I':
		return 5;

	case 'J':
	case 'K':
	case 'L':
		return 6;

	case 'M':
	case 'N':
	case 'O':
		return 7;

	case 'P':
	case 'Q':
	case 'R':
	case 'S':
		return 8;

	case 'T':
	case 'U':
	case 'V':
		return 9;
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
		return 10;

	default:
		break;
	}
}