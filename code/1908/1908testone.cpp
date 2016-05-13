#include <stdio.h>
int recursion(int n, int m) {
	if (n == 1 && m == 0)
		return 2;
	if (n == 0 && m >= 0)
		return 1;
	if (n >= 2 && m == 0)
		return n + 2;
	if (n >= 1 && m >= 1)
		return recursion(recursion(n - 1, m), m - 1);
}
int main()
{
	int n = 0, m = 0;
	while (scanf("%d%d", &n, &m) != EOF)
		printf("%d\n", recursion(n, m));
}