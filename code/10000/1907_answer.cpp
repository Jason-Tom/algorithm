#include <stdio.h>
#include <string.h>
#define open if(1)
int main() {
	open
	freopen("test.txt", "r", stdin);
	int mymax[100], value[1024], temp[1024], weight[1024], v = 0, time = 0, i = 0;
	scanf("%d%d", &v, &time);
	int count = time;
	memset(mymax, 0, sizeof(mymax));
	// memset(temp, 0, sizeof(temp));
	memset(weight, 0, sizeof(weight));
	memset(value, 0, sizeof(value));
	// printf("%d%d\n",v,time);
	while (time--)
	{
		i = 0;
		scanf("%d%d", &value[i], &weight[i]);
	}
	// printf("%d%d\n", value[time], weight[time]);
	for (i = 0; i < v + 1; ++i)
	{
		memset(temp, 0, sizeof(temp));
		for (int j = 0; j < count; ++j)
		{
			if ((i - weight[j]) >= 0)
				// 少了个等号
			{
				temp[j] = mymax[i - weight[j]] + value[j];
				// 数组中括号里面可以放表达式
				// printf("%d\n", temp[j] );
			}
			else
			{
				;
			}
		}
		for (int j = 0; j < count; ++j)
		{

			if (mymax[i] <= temp[j])
			{
				mymax[i] = temp[j];
				// printf("%d\n", mymax[i] );
			}
		}
	}
	// printf("%d\n", mymax[i] );
	printf("%d\n", mymax[v] );
	// printf("%d\n", mymax[i-1] );
	return 0;
}