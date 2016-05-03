#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
#define mymemset(a) memset(a,0,sizeof(a))
#define myopen if(1)
#define mynum 1024
using namespace std;
int repeat[mynum], pre[mynum], post[mynum],len[mynum], data = 0;
int node[mynum][mynum];
bool cmp(int a,int b){
	return a<b;
}
void recursion(int d)
{
	int j = 0;
	repeat[d] = 1;
	pre[d] = ++data;
	for(j=0;j<len[d];j++){

		int to = node[d][j];
		if (repeat[to] == 0)
		{
			recursion(to);
		}
	}
	post[d] = ++data;
}
int main()
{
	int n = 0, e = 0, a = 0, b = 0;
	scanf("%d%d", &n, &e);
	mymemset(len);
	mymemset(node);
	mymemset(repeat);
	mymemset(pre);
	mymemset(post);
	while (e--)
	{
		scanf("%d%d", &a, &b);
		node[a][len[a]]=b;
		len[a]++;
	}
	 for(int i=1;i<=n;i++)
	 	sort(node[i],node[i]+len[i],cmp);
	recursion(1);
	for (int i = 1; i <=n; ++i)
		printf("%d ", pre[i]);
	printf("\n");
	for (int i = 1; i <=n; ++i)
		printf("%d ", post[i]);
	return 0;
}
