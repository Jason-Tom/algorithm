#include <stdio.h>
#include <iostream>
#include <string.h>
#define mymemset(a) memset(a,0,sizeof(a))
#define mynum 1024
#define myopen if(0)
using namespace std;
struct matrix {
	int row, column;
} Matrix[mynum];
// 通过存起点和终点来进行存储
int min_temp[mynum][mynum];
int main()
{
	myopen
	freopen("test.txt", "r", stdin);
	int t = 0, n = 0;
	scanf("%d", &t);
	while (t--)
	{
		mymemset(Matrix);
		mymemset(min_temp);
		scanf("%d", &n);
		for (int i = 1; i <= n; ++i)
		{
			scanf("%d%d", &Matrix[i].row, &Matrix[i].column);
			// printf("%d\n", Matrix[i].row);
		}
		// 遍历长度
		int l = 0, p = 0, q = 0;
		for (l = 2; l <= n; ++l)
		{
			// 遍历起点
			for (p = 1; p <= n - l + 1; ++p)
			{
				// 遍历切割点
				// printf("%d,%d,%d     %d\n",l,p,q, min_temp[p][p + l - 1] );
				for (q = p; q < p + l - 1; ++q)
				{
					//printf("l:%d,p:%d,q:%d", l, p, q );
					// 更新最小值
					int to = p + l - 1;
					int tmp =  Matrix[p].row * Matrix[q].column * Matrix[to].column + min_temp[p][q] + min_temp[q + 1][to];
					if (min_temp[p][to] == 0 || tmp < min_temp[p][to])
						min_temp[p][to] = tmp;
					myopen
					printf("%d,%d,%d     %d\n", l, p, q, min_temp[p][p + l - 1] );
				}
			}
		}
		printf("%d\n", min_temp[1][n]);
	}
}