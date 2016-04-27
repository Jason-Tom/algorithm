#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
#define open if(1)
int main()
{
	// printf("asfdasdfa\n");
	open
	freopen("test.txt", "r", stdin);
	int t = 0, l = 0;
	scanf("%d", &t);
	while (t--)
	{
		int n = 0, star[1024], end[1024], num = 0, temp = 0, temp_max = 0;
		scanf("%d", &n);
		memset(star, 0, sizeof(star));
		memset(end, 0, sizeof(end));
		for (int i = 1; i <= n; ++i)
		{
			scanf("%d%d", &star[i], &end[i]);
			// printf("%d %d\n",star[i],end[i]);
		}
		// sort(star, star + n);
		// sort(end, end + n);
		for (int i = 0; i < n; ++i)
		{
			for (int j = i + 1; j < n; ++j)
			{
				if (end[i] > end[j])
				{
					temp_max = end[i];
					end[j] = end[i];
					end[j] = temp_max;
				}

			}
		}
		// for (int i = 0; i < n; ++i)
		// {
		// 	printf("%d\n", end[i]);
		// }
		// for (int i = 1; i <= n; ++i)
		// {
		// 	// printf("%d\n",i);
		// 	if (temp <= star[i])
		// 	{
		// 		temp = end[i];
		// 		num++;
		// 		// printf("%d\n",i);
		// 	}
		// }
		// for (int i = 1; i <= n; ++i)
		// {
		// 	printf("%d %d\n", star[i], end[i]);
		// }
		// printf("%d\n",t);
		l++;
		printf("Case %d: %d\n", l, num );
	}
}
