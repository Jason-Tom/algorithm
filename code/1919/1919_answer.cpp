#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
#define open if(1)
bool complare(int a, int b)
{
	return a > b;
}
int main() {
	freopen("test.txt", "r", stdin);
	int t = 0;
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
		sort(time, time + n, complare);
		// for (int i = 0; i < n; ++i)
		// {
		// 	printf("time:%d \n",time[i]);
		// }
		int my_max_time = 0;
		if (n <= m)
		{
			my_max_time = time[0];
		}
		else
		{
			int machine[m];
			memset(machine,0,sizeof(machine));
			for (int i = 0; i < m; ++i)
			{
				printf("%d\n",machine[i] );
			}
		}
		// printf("%d\n", my_max_time);
		// printf("%d %d\n", n, m);
	}
}