#include<stdio.h>
#include<string.h>
#define swith if(1)
int main() {
	swith
	freopen("test.txt", "r", stdin);
	int max[100], value[1024], weight[1024], v = 0, time = 0;
	scanf("%d%d", &v, &time);
	memset(max, 0, sizeof(max));
	memset(weight, 0, sizeof(weight));
	memset(value, 0, sizeof(value));
	// printf("%d%d\n",v,time);
	while (time--)
	{
		scanf("%d%d", &value[time], &weight[time]);
		printf("%d%d\n", value[time], weight[time]);
	}
	return 0;
}