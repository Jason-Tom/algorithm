#include <stdio.h>
#include <string.h>
#define mymax(a,b) (a>=b?a:b)
#define swith if(1)
int main() {
	swith
	freopen("test.txt", "r", stdin);
	int max_temp[1024], value[1024], weight[1024], c = 0, n = 0, t = 0;
	scanf("%d", &t);
	while (t--)
	{
		memset(max_temp, 0, sizeof(max_temp));
		memset(weight, 0, sizeof(weight));
		memset(value, 0, sizeof(value));
		scanf("%d%d", &n, &c);
		for (int i = 0; i < n; ++i)
		{
			scanf("%d%d", &weight[i], &value[i]);
		}
		for (int j = 0; j < n; ++j)
		{
			for (int k = c; k >= 0; --k)
			{
				if (weight[j] <= k)
				{
					max_temp[k] = mymax(max_temp[k], max_temp[k - weight[j]] + value[j]);
				}
			}
		}
		printf("%d\n", max_temp[c]);
	}
	return 0;
}