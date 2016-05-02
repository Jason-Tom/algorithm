#include <stdio.h>
#include <iostream>
#include <string.h>
#define mymemset(a) memset(a,0,sizeof(a))
#define myopen if(0)
#define mynum 100024
int mydata[mynum];
int main()
{
	myopen
	freopen("test.txt", "r", stdin);
	int t = 0;
	scanf("%d", &t);
	while (t--)
	{
		mymemset(mydata);
		int n = 0, datanum = 0,i=0;
		scanf("%d", &n);
		for (i = 0; i < n; ++i)
		{
			scanf("%d", &datanum);
			++mydata[datanum];
			if (mydata[datanum] > n / 2)
			{
				break;
			}
			// printf("%d ", mydata[datanum] );
			// 数据和索引对应
		}
		if (i!=n)
		{
			printf("%d\n", datanum);
		}
		else
		{
			printf("no\n");
		}
		// printf("\n");
		// printf("%d\n", t );
	}
	// for (int i = 0; i < 100024; ++i)
	// {
	// 	printf("%d\n", mydata[i] );
	// }
}