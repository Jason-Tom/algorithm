#include <stdio.h>
#include <iostream>
#include <string.h>
#include <algorithm>
#define mymemset(a) memset(a,0,sizeof(a))
#define myopen if(1)
#define mynum 1024
using namespace std;
int repeat[mynum], pre[mynum], post[mynum], data = 0;
int len[mynum];
int node[mynum][mynum];
// 大小范围
 bool cmp(int a,int b){
 	return a<b;
 }
void recursion(int d)
{
	int j = 0;
	pre[d - 1] = ++data;
	for (j = 0; node[d - 1][j] != 0; ++j)
	{
		if (repeat[node[d - 1][j] - 1] == 0)
		{
			// printf("经过%d\n", d );
			// printf("经过%d\n", node[d - 1][j] - 1 );
			repeat[d - 1] = 1;
			recursion(node[d - 1][j]);
		}

		// printf("%d\n", node[a-1][j]);

	}
	post[d - 1] = ++data;
	// printf("%d返回\n",a );
}
int main()
{
	myopen
	freopen("test.txt", "r", stdin);
	int n = 0, e = 0, a = 0, b = 0;
	// 给出这个图的顶点数n （ 1 ≤ n ≤ 1000 ）
	// 给出这个有向图的边数 e （ 0 ≤ n ≤ 100000 ）
	// 开始，共e行，每行两个正整数 a b，表示从顶点a发出一条弧到顶点b。
	scanf("%d%d", &n, &e);
	mymemset(node);
	mymemset(repeat);
	mymemset(pre);
	mymemset(post);
	mymemset(len);
	// for (int i = 0; i < 1024; ++i)
	// {
	// 	printf("%d\n",repeat[i] );
	// }
	// 输入数据
	while (e--)
	{
		scanf("%d%d", &a, &b);
		len[a-1]++;
		for (int i = 0; ; ++i)
		{
			if (node[a - 1][i] == 0)
			{
				// printf("之前的a：%d\n", a);
				node[a - 1][i] = b;
				// printf("之后的a：%d\n", a);
				// printf("%d %d\n", a, node[a - 1][i] );
				// printf("\n");
				break;
			}
			// printf("%d\n",node[i][i]);
		}
	}


	// 排序每个节点数据
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

	
	// for(int i=0;i<n;i++)
	// 	sort(node[i],node[i]+len[i],cmp);

	for(int i=0;i<n;i++){
		printf("%d : ",i);
		for(int j=0;;j++){
			if(!node[i][j])break;
			printf("%d ",node[i][j]);
		}
		printf("\n");
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
	printf("\n");
	/*
	// 检测输出数据
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; node[i][j] != 0; ++j)
		{
			printf("节点%d：索引%d %d\n", i + 1, j, node[i][j]);
		}
		printf("\n");
	}
	*/
	return 0;
}

