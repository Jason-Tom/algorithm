#include <stdio.h>
#include <string.h>
#define max(A,B) (A>=B?A:B)
#define MAXN 1100

struct GOOD {
	int weight, value;
} good[MAXN];

int dp[MAXN], V, n;

int main()
{
	freopen("test.txt", "r", stdin);
	memset(good, 0, sizeof(good));
	memset(dp, 0, sizeof(dp));

	scanf("%d%d", &V, &n);
	for (int i = 1; i <= n; i++)
		scanf("%d%d", &good[i].value, &good[i].weight);

	for (int i = 1; i <= V; i++)
		for (int j = 1; j <= n; j++)
			if (i >= good[j].weight)
				dp[i] = max(dp[i], dp[i - good[j].weight] + good[j].value);
			else
				dp[i] = max(dp[i], dp[i - 1]);

	printf("%d\n", dp[V]);
}
