#include <stdio.h>
#include <string.h>
#define open if(1)
int main() {
	freopen("test.txt", "r", stdin);
	int t = 0, n = 0, m = 0;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &m);
		printf("%d %d\n", n, m);
	}
}