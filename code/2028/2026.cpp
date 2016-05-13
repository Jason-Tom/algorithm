#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
#define myopen if(1)
#define meme(a) memset(a,0,sizeof(a))
#define NUM 256
using namespace std;
int r [NUM][NUM], you[NUM][NUM], n = 0;
int main()
{
	myopen
	freopen("test.txt", "r", stdin);
	meme(r);
	meme(you);
	scanf("%d", &n);
	// 初始化检测
	// for (int i = 0; i < 5; ++i)
	// {
	// 	for (int j = 0; j < 5; ++j)
	// 	{
	// 		printf("r:%d ", r[i][j]);
	// 		printf("you:%d ", you[i][j]);
	// 	}
	// 	printf("\n");
	// }
	for (int i = 1; i < n; ++i)
	{
		for (int j = i + 1; j <= n; ++j)
		{
			scanf("%d", &r[i][j]);
			// printf("%d ", r[i][j]);
			// printf("i:%d j:%d %d ", i, j, r[i][j]);
		}
		// printf("\n");
	}
	// 初始化长度为2的最优解
	for (int i = 1; i < n; ++i)
	{
		you[i][i + 1] = r[i][i + 1];
		// printf("%d\n",you[i][i+1] );
		// printf("i:%d i+1:%d %d\n", i, i + 1, you[i][i + 1] );
	}
	// 长度遍历,对应相应的段
	for (int i = 2; i <= n; ++i)
	{
		// printf("%d\n", i);
		// _start和_end对应相应的点
		// 起点遍历
		for (int _start = 1; _start <= n - i + 1; ++_start)
		{
			int _end = _start + i - 1;
			int _new = 0;
			// 切割点遍历,对应点的数目，最后一种情况和第一种情况相同，可以省略一种
			for (int k = _start; k < _end; ++k)
			{
				int temp = 0;
				int to = k;
				temp = you[_start][to] + you[to][_end];
				if (_new == 0 || _new > temp)
				{
					_new = temp;
					// printf("%d\n", _new );
				}
				printf("_start:%d to:%d _end:%d temp:%d\n", _start, to, _end, temp );
				// printf("%d\n", you[_start][_end]);
			}
			you[_start][_end] = _new;
			// printf("%d\n", _new );
			printf("\n");
		}
		// printf("\n");
	}
	printf("%d\n", you[1][n]);
}