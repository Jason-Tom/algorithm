#include <stdio.h>
#include <iostream>
#include <string.h>
#define mymemset(a) memset(a,0,sizeof(a))
#define NUM 1024
#define myopen if(0)
using namespace std;
struct Matrix {
	int row, column;
} matrix[NUM];
int temp[NUM][NUM];
int main()
{
	myopen
	freopen("test.txt", "r", stdin);
	int t = 0, n = 0;
	scanf("%d", &t);
	while (t--)
	{
		mymemset(matrix);
		mymemset(temp);
		scanf("%d", &n);
		for (int i = 1; i <= n; ++i)
			scanf("%d%d", &matrix[i].row, &matrix[i].column);
		int l = 0, p = 0, q = 0;
		for (l = 2; l <= n; ++l)
			for (p = 1; p <= n - l + 1; ++p)
				for (q = p; q < p + l - 1; ++q)
				{
					int to = p + l - 1;
					int tmp =  matrix[p].row * matrix[q].column * matrix[to].column + temp[p][q] + temp[q + 1][to];
					// 由小到大递归实现所有长度不同个起点的最优值
					if (temp[p][to] == 0 || tmp < temp[p][to])
						temp[p][to] = tmp;
				}
		printf("%d\n", temp[1][n]);
	}
}