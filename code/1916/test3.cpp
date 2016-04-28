#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
#define open if(0)
int main()
{
	open
	freopen("test.txt", "r", stdin);
	int t = 0, l = 0;
	scanf("%d", &t);
	while (t--)
	{
		int n = 0, star[1024], end[1024], num = 0, temp = 0, temp_max_one = 0, temp_max_two = 0;
		scanf("%d", &n);
		memset(star, 0, sizeof(star));
		memset(end, 0, sizeof(end));
		for (int i = 0; i < n; ++i)
		{
			scanf("%d%d", &star[i], &end[i]);
		}
		for (int i = 0; i < n; ++i)
		{
			for (int j = i + 1; j < n; ++j)
			{
				if (end[i] > end[j])
				{
					temp_max_one = end[i];
					end[i] = end[j];
					end[j] = temp_max_one;
					temp_max_two = star[i];
					star[i] = star[j];
					star[j] = temp_max_two;
				}
			}
		}
		for (int i = 0; i < n; ++i)
		{
			if (temp <= star[i])
			{
				temp = end[i];
				num++;
			}
		}
		l++;
		printf("Case %d: %d\n", l, num );
	}
}
