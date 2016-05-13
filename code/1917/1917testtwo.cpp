#include <stdio.h>
#include <iostream>
#include <string.h>
#include <algorithm>
#define _open if(1)
#define N 1024
using namespace std;
int w[N];
int main() {
	_open
	freopen("test.txt", "r", stdin);
	int t = 0, n = 0, c = 0, k = 0;
	scanf("%d", &t);
	while (t--)
	{
		k++;
		memset(w, 0, sizeof(w));
		scanf("%d%d", &n, &c);
		for (int i = 1; i <= n; ++i)
			scanf("%d", &w[i]);
		sort(w + 1, w + 1 + n);
		int al = 0, ans = 0, j = 0;
		for (j = 1; j <= n; ++j)
		{
			if (al+w[j] <= c)
			{
				al += w[j];
				ans++;
			}
			else
				break;
		}
		printf("Case %d: %d %d\n", k, ans, al );
	}
}