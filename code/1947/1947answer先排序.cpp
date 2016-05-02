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
		sort(mydata,mydata+n);
		for (int i = 0; i < n; ++i)
		{
			printf("%d\n", mydata[i] );
		}
		// printf("%d\n", mymax );
	}
	return 0;
}