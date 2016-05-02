#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
#define myopen if(0)
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
		for (; mylen <= n;)
		{
			if (mylen == 1)
			{
				for (int i = 0; i < n; ++i)
				{
					if (mymax < mydata[i])
					{
						mymax = mydata[i];
					}
				}
			}
			else if (mylen == n)
			{
				int temp = 0;
				for (int i = 0; i < n; ++i)
				{
					temp += mydata[i];
				}
				if (mymax < temp)
				{
					mymax = temp;
				}
			}
			else
			{
				for (int i = 0; i < n - mylen; ++i)
				{
					int temp = 0, inlen = 0;
					for (int j = i; inlen < mylen; ++inlen)
					{
						temp += mydata[j];
						j++;
					}
					if (mymax < temp)
					{
						mymax = temp;
					}
				}
			}
			mylen++;
		}
		printf("%d\n", mymax );
	}
	return 0;
}