#include <stdio.h>
#include <string.h>
#define open if(1)
int main() {
	freopen("test.txt", "r", stdin);
	int t = 0;
	scanf("%d", &t);
	while (t--) {
		int n = 0, m = 0, time[1024];
		memset(time,0,sizeof(time));
	// n任务个数，m是机器数量，time每个任务对应的时间
		scanf("%d%d", &n, &m);
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&time[i]);
			printf("time:%d \n",time[i]);
		}
		// printf("%d %d\n", n, m);
	}
}