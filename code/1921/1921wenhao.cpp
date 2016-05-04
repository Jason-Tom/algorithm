#include <stdio.h>
int n, bestw, rest = 0, dw, c1, c2, w[1010];
void back(int i) {
	if (i >= n) {
		if (bestw < dw) {
			bestw = dw;
		}
		return;
	}
	rest = rest - w[i];
	if (dw + w[i] <= c1) {
		dw = dw + w[i];
		back(i + 1);
		dw = dw - w[i];
	}
	if (dw + rest > bestw) {
		back(i + 1);
	}
	rest = rest + w[i];
}
int main() {
	int t, j, i, k, sum;
	scanf("%d", &t);
	for (k = 1; k <= t; k++) {
		scanf("%d", &n);
		scanf("%d%d", &c1, &c2);
		for (i = 0; i < n; i++)
		{
			scanf("%d", &w[i]);
			rest = rest + w[i];
		}
		sum = rest;
		back(0);
		if (sum - bestw > c2) 	{
			printf("Case %d:\n", k);
			printf("No\n");
		}
		else {
			printf("Case %d:\n", k);
			printf("%d\n", bestw);
		}
		bestw = 0;
		rest = 0;
	}
	return 0;
}