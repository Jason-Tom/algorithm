#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
#define open if(0)
#define MAXN 1024

struct ACTION {
	int starttime,endtime;
}actions[MAXN];

bool cmp(ACTION a,ACTION b)
{
	return a.endtime==b.endtime?a.starttime<b.starttime:a.endtime<b.endtime;
}

int main()
{
	open
	freopen("test.txt", "r", stdin);
	int t = 0, l = 0;
	scanf("%d", &t);
	while (t--)
	{
		int n = 0,  num = 0;
		scanf("%d", &n);
		memset(actions,0,sizeof(actions));
		for (int i = 0; i < n; ++i)
			scanf("%d%d", &actions[i].starttime, &actions[i].endtime);
		
		sort(actions,actions+n,cmp);

		int temp = 0;
		for (int i = 0; i < n; ++i)
		{
			if (temp <= actions[i].starttime)
			{
				temp = actions[i].endtime;
				num++;
			}
		}
		printf("Case %d: %d\n", ++l, num );
	}
}
