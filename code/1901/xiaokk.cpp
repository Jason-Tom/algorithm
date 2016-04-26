#include <stdio.h>
#include <string.h>
#define max(A,B) (A>=B?A:B)
char a[1100], b[1100];
int dp[1100][1100], w;
int main()
{
	freopen("test.txt", "r", stdin);
	scanf("%d", &w);
	while (w--)
	{
		memset(dp, 0, sizeof(dp));
		scanf("%s%s", a, b);
		int strlena = strlen(a), strlenb = strlen(b);
		for (int i = 1; i <= strlena; i++)
			for (int j = 1; j <= strlenb; j++)
				if (a[i - 1] == b[j - 1])dp[i][j] = dp[i - 1][j - 1] + 1;
				else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		printf("%d\n", dp[strlena][strlenb]);
	}
}