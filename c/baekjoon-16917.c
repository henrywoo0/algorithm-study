#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int price = 0;
	int a, b, c, x, y;
	scanf("%d %d %d %d %d", &a, &b, &c, &x, &y);

	if ((a + b) < (c * 2))
		price += a * x + b * y;
	else
	{	
		if (x > y)
		{
			price += (y * 2 * c) + (x - y) * a;
			if (price > c * 2 * x)
				price = c * 2 * x;
		}
		else
		{
			price += (x * 2 * c) + (y - x) * b;
			if (price > c * 2 * y)
				price = c * 2 * y;
		}
	}

	printf("%d", price);

	return 0;
}
