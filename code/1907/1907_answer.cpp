#include <stdio.h>
#include <string.h>
#define mymax(a,b) (a>=b?a:b)
#define swith if(1)
int main() {
	swith
	freopen("test.txt", "r", stdin);
	int max[100], value[1024], weight[1024], c = 0, n = 0, t = 0;
	memset(max, 0, sizeof(max));
	memset(weight, 0, sizeof(weight));
	memset(value, 0, sizeof(value));
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d%d", &n, &c);
		for (int i = 0; i < n; ++i)
		{
			scanf("%d%d", &weight[i], &value[i]);
			// printf("%d%d\n", weight[i], value[i]);
			for (int j = 0; j < n; ++j)
				// 物体
			{
				for (int k = c-1; k >= 0; --k)
					// 质量
				{
					// printf("j:%d k:%d\n", j, k);
				}
				// printf("\n");
			}
		}
	}
	return 0;
}