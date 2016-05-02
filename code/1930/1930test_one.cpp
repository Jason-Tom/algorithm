#include <stdio.h>
#include <iostream>
#include <string.h>
#define mymemset(a) memset(a,0,sizeof(a))
#define myopen if(1)
#define mynum 1024
int mydata[mynum][2];
int main()
{
	myopen
	freopen("test.txt", "r", stdin);
	int t = 0;
	scanf("%d", &t);
	while (t--)
	{
		mymemset(mydata);
		int n = 0, datanum = 0, i = 0;
		scanf("%d", &n);
		// if (n == 0)
		// {
		// 	printf("no\n");
		// 	continue;
		// }
		for (i = 0; i < n; ++i)
		{
			scanf("%d", &datanum);
			++mydata[i][0];
			if (mydata[datanum][0] > n / 2)
				break;
		}
		if (i != n)
			printf("%d\n", datanum);
		else
			printf("no\n");
	}
}