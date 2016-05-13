#include <stdio.h>
#include <iostream>
#include <string.h>
#define mymemset(a) memset(a,0,sizeof(a))
#define mynum 1024
#define myopen if(1)
using namespace std;
struct matrix {
	int row, list;
} Matrix[mynum];
int min_temp[mynum][mynum];
int temp[100][100];
int main()
{
	myopen
	freopen("test.txt", "r", stdin);
	int t = 0, n = 0;
	scanf("%d", &t);
	mymemset(Matrix);
	mymemset(min_temp);
	while (t--)
	{
		mymemset(temp);
		scanf("%d", &n);
		for (int i = 1; i <= n; ++i)
		{
			scanf("%d%d", &Matrix[i].row, &Matrix[i].list);
		}
		// 计算第一排长度为二的值
		for (int i = 2; i <= 2; ++i)
		{
			for (int j = 1; j < n + 2 - i; ++j)
			{
				// temp[i][j] = Matrix[j].row * Matrix[j].list * Matrix[j + 1].list;
				min_temp[2][j] = Matrix[j].row * Matrix[j].list * Matrix[j + 1].list;
				// printf("%d\n", min_temp[2][j]);
			}
			// printf("\n");
		}
		// 遍历长度
		int l = 0, m = 0;
		for (l = 3; l <= n; ++l)
		{
			// 遍历起点
			for (m = 1; m < n + 2 - l; ++m)
			{
				int pre = 0, over = 0;
				pre = min_temp[l - 1][m + 1] + Matrix[m].row * Matrix[m].list * Matrix[m + l - 1].list;
				over = min_temp[l - 1][m] + Matrix[m].row * Matrix[m + l - 1].row * Matrix[m + l - 1].list;
				if (pre < over)
				{
					min_temp[l][m] = pre;
				}
				else
				{
					min_temp[l][m] = over;
				}
				// printf("%d\n", min_temp[l][m] );
			}
			// printf("\n");
		}
		printf("%d\n", min_temp[n][1]);
	}
}