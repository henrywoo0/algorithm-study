#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int drum, bell;
	int count = 0; // 반리 = 1, 1리 = 2
	double distance = 0.0;

	scanf("%d %d", &drum, &bell);

	while (drum > 0 || bell > 0) {
		count++;
		if (count % 20 == 0) {
			drum -= 2;
		}
		else if(count % 10 == 0){
			drum--;
		}
		else if (count % 2 == 0) {
			bell -= 2;
		}
		else {
			bell--;
		}
	}

	printf("%.1lf", count / 2.0);

	return 0;
}
