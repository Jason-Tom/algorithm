#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
#define myopen if(1)
#define mynum 10024
#define mymemset(a) memset(a,0,sizeof(a))
int mydata[mynum];
int main()
{
	myopen
	freopen("test.txt", "r", stdin);
	int n = 0, num = 0;
	while (scanf("%d", &n) != EOF)
	{
		mymemset(mydata);
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &mydata[i]);
			printf("%d\n", mydata[i]);
		}
	}
	return 0;
}