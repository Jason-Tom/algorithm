#include <stdio.h>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
#define myopen if(1)
#define mynum 10024
#define mymemset(a) memset(a,0,sizeof(a))
int mydata[mynum];
int main()
{
	myopen
	freopen("test.txt", "r", stdin);
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		mymemset(mydata);
		int mymax = 0, mylen = 1;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &mydata[i]);
		}
		sort(mydata, mydata + n);
		// for (int i = 0; i < n; ++i)
		// {
		// 	printf("%d\n", mydata[i] );
		// }
		// 向左边循环
		for (int i = (n + 1) / 2 - 1; i > -1; --i)
		{
			if (mydata[(int)((n + 1) / 2) - 1] == mydata[i])
			{
				mylen++;
				printf("%d\n", mylen );
			}
			else
			{
				break;
			}
			printf("%d\n", i );
		}
		printf("\n");
		// 向右边循环
	}
	return 0;
}