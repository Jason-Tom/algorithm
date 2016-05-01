#include <stdio.h>
#include <iostream>
#include <string.h>
#define mysort(a) memset(a,0,sizeof(a))
using namespace std;
int node[1024][1024];
// 大小范围
int main()
{
	int n = 0, e = 0, a = 0, b = 0;
	// 给出这个图的顶点数n （ 1 ≤ n ≤ 1000 ）
	// 给出这个有向图的边数 e （ 0 ≤ n ≤ 100000 ）
	// 开始，共e行，每行两个正整数 a b，表示从顶点a发出一条弧到顶点b。
	scanf("%d%d",&n,&e);
	mysort(node);
	for (int i = 0; i < 1024; ++i)
	{
		printf("%d\n",node[i][i]);
	}
	// while (e--)
	// {
	// 	printf("%d\n", e);

	// }
	return 0;
}

