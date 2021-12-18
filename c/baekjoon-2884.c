#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int h, m;

	scanf("%d %d", &h, &m);

	if (m - 45 < 0 && h == 0) {
		h = 23;
		m = m - 45 + 60;
	}
	else if(m - 45 < 0) {
		h--;
		m = m - 45 + 60;
	}
	else {
		m -= 45;
	}

	printf("%d %d", h, m);

	return 0;
}
