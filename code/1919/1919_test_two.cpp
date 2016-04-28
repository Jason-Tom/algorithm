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
		scanf("%d%d", &n, &m);
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &time[i]);
		}
		sort(time, time + n, compare);
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
				machine[i] = time[i];
			}
			for (i = m; i < n; ++i)
			{
				int temp = machine[0], index = 0;
				for (j = 0; j < m - 1; ++j)
				{
					if (temp > machine[j + 1])
					{
						temp = machine[j + 1];
						index = j + 1;
					}
				}
				machine[index] += time[i];
			}
			sort(machine, machine + m, compare);
			my_min_time = machine[0];
		}
		printf("Case %d: %d\n", ++l, my_min_time);
	}
}