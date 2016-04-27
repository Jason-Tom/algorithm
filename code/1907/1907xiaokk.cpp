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
	int t = 0;
	freopen("test.txt", "r", stdin);
	scanf("%d", &t);

	while (t--) {
		memset(good, 0, sizeof(good));
		memset(dp, 0, sizeof(dp));
		scanf("%d%d", &n, &V);
		for (int i = 1; i <= n; i++)
			scanf("%d%d", &good[i].weight, &good[i].value);
		for (int j = 1; j <= n; j++)
			for (int i = V; i >= 1; i--)
				if (i >= good[j].weight)
					dp[i] = max(dp[i], dp[i - good[j].weight] + good[j].value);
		printf("%d\n", dp[V]);
	}

}
