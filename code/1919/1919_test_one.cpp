#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
#define open if(0)
bool compare(int a, int b)
{
	return a > b;
}
int main() {
	freopen("test.txt", "r", stdin);
	int t = 0, l = 0;
	scanf("%d", &t);
	while (t--) {
		int n = 0, m = 0, time[1024];
		memset(time, 0, sizeof(time));
		// n任务个数，m是机器数量，time每个任务对应的时间
		scanf("%d%d", &n, &m);
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &time[i]);
			// printf("time:%d \n",time[i]);
		}
		sort(time, time + n, compare);
		// for (int i = 0; i < n; ++i)
		// {
		// 	printf("time:%d \n",time[i]);
		// }
		int my_min_time = 0;
		if (n <= m)
		{
			my_min_time = time[0];
		}
		else
		{
			int i = 0, j = 0;
			int machine[m];
			memset(machine, 0, sizeof(machine));
			for (i = 0; i < m; ++i)
			{
				// printf("%d\n",machine[i] );
				machine[i] = time[i];
			}

			for (i = m; i < n; ++i)
				// 大于机器数量的循环
			{
				int temp = machine[0], index = 0;
				for (j = 0; j < m - 1; ++j)
					// 求机器最小值
				{
					if (temp > machine[j + 1])
					{
						temp = machine[j + 1];

						index = j + 1;
						// printf("%d \n",j );
					}
					// printf("%d \n",j );
				}
				machine[index] += time[i];
				// printf("%d \n",time[i] );
				// printf("\n");
				// printf("%d \n",machine[index]);
			}
			sort(machine, machine + m, compare);
			my_min_time = machine[0];
			// printf("%d\n", machine[0] );
		}
		printf("Case %d: %d\n", ++l, my_min_time);
		// printf("%d %d\n", n, m);
	}
}