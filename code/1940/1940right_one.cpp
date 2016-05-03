#include <stdio.h>
#include <iostream>
#include <string.h>
#include <algorithm>
#define mymemset(a) memset(a,0,sizeof(a))
#define myopen if(0)
#define mynum 1024
using namespace std;
int repeat[mynum], pre[mynum], post[mynum], data = 0;
int node[mynum][mynum];
void recursion(int d)
{
	int j = 0;
	pre[d - 1] = ++data;
	// 每次进来都要标记说明该节点已经走过
	repeat[d - 1] = 1;
	for (j = 0; node[d - 1][j] != 0; ++j)
	{
		if (repeat[node[d - 1][j] - 1] == 0)
		{
			recursion(node[d - 1][j]);
		}
	}
	post[d - 1] = ++data;
}
int main()
{
	myopen
	freopen("test.txt", "r", stdin);
	int n = 0, e = 0, a = 0, b = 0;
	scanf("%d%d", &n, &e);
	mymemset(node);
	mymemset(repeat);
	mymemset(pre);
	mymemset(post);
	while (e--)
	{
		scanf("%d%d", &a, &b);
		for (int i = 0; ; ++i)
		{
			if (node[a - 1][i] == 0)
			{
				node[a - 1][i] = b;
				break;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		int temp = 0, j = 0, k = 0;
		for (j = 0; node[i][j] != 0; ++j)
		{
			for (k = j + 1; node[i][k] != 0; ++k)
			{
				if (node[i][j] > node[i][k])
				{
					temp = node[i][j];
					node[i][j] = node[i][k];
					node[i][k] = temp;
				}

			}
		}
	}
	recursion(1);
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", pre[i]);
	}
	printf("\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", post[i]);
	}
	// printf("\n");
	// for (int i = 0; i < 8; ++i)
	// {
	// 	for (int j = 0; node[i][j] != 0; ++j)
	// 	{
	// 		printf("节点%d：索引%d %d\n", i + 1, j, node[i][j]);
	// 	}
	// 	printf("\n");
	// }
	return 0;
}

