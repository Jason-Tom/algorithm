#include <stdio.h>
int recursion(int a);
int main()
{
	printf("%d\n", recursion(5));
	// recursion(6);
	return 0;
}
int recursion(int a) {
	if (a == 1)
	{
		// printf("%d\n", a );
		return 1;
	}
	// printf("%d\n", a );
	return recursion(a - 1) * a;
}
