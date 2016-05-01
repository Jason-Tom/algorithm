#include <stdio.h>

void prn(int num) {
	printf("%d\n", num);
	if (num > 0) prn(--num);
}

int main(void)
{
	prn(9);
	getchar();
	return 0;
}