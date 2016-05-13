#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
#define meme(a) memset(a,0,sizeof(a))
using namespace std;
int temp[1300000], ansx = 0, ans = 0, mycount = 1,n = 0;
int main()
{
	scanf("%d", &n);
	meme(temp);
	for (int i = 1; i <= n; ++i)
		scanf("%d", &temp[i]);
	sort(temp + 1, temp + 1 + n);
	ansx = temp[1];
	for (int i = 2; i <= n; ++i)
	{
		if (temp[i] == temp[i - 1])
			mycount++;
		else
			mycount = 1;
		if (mycount > ans) {
			ans = mycount;
			ansx = temp[i];
		}
	}
	printf("%d\n%d", ansx , ans);
}