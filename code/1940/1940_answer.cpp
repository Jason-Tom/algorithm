#include <stdio.h>
#include <iostream>
#include <string.h>
#define mymeset(a) memset(a,0,sizeof(a))
#define myopen if(1)
using namespace std;
// bool themax(int a, int b) {
//     return a > b;
// }
int node[1024][1024];
// 大小范围
int main()
{
	myopen
	freopen("test.txt", "r", stdin);
	int n = 0, e = 0, a = 0, b = 0;
	// 给出这个图的顶点数n （ 1 ≤ n ≤ 1000 ）
	// 给出这个有向图的边数 e （ 0 ≤ n ≤ 100000 ）
	// 开始，共e行，每行两个正整数 a b，表示从顶点a发出一条弧到顶点b。
	scanf("%d%d", &n, &e);
	mymeset(node);
	while (e--)
	{
		scanf("%d%d", &a, &b);
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
	for (int i = 0; i < n; ++i)
	{
		int temp = 0, j = 0, k = 0;
		for (j = 0; node[j][k] != 0; ++j)
		{
			for (k = j + 1; node[j][k] != 0; ++k)
			{
				if (node[j][k] > node[j][k + 1])
				{
					temp = node[i][j];
					node[i][j] = node[i][j + 1];
					node[i][j + 1] = temp;
				}

			}
		}
	}

	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; node[i][j] != 0; ++j)
		{
			printf("节点%d： %d\n", i + 1, node[i][j]);
		}
		printf("\n");
	}
	return 0;
}

