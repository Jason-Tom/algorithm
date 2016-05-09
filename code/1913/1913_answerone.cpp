#include <stdio.h>
#include <iostream>
#include <string.h>
#include <math.h>
#define mymemset(a) memset(a,'0',sizeof(a))
#define myopen if(0)
char chess[300][300];
void recursion(int x, int y, int sx, int sy, double size)
{
	// x,y定位坐标，sx，sy特殊点坐标，size尺寸
	if (size == 1)
		return;
	int t = (int)(size / 2);
	// 左上角
	if (sx < x + t && sy < y + t)
	{
		chess[x + t - 1][y + t] = 'd';
		chess[x + t][y + t - 1] = 'd';
		chess[x + t][y + t] = 'd';
		//右下角
		recursion(x + t, y + t, x + t, y + t, t);
		//左下角
		recursion(x + t, y, x + t, y + t - 1, t);
		// 右上角
		recursion(x, y + t, x + t, y + t - 1, t);
		// 左上角
		recursion(x, y, sx, sy, t);
	}
	// 左下角
	if (sx > x + t - 1 && sy < y + t)
	{
		chess[x + t - 1][y + t - 1] = 'b';
		chess[x + t - 1][y + t] = 'b';
		chess[x + t][y + t] = 'b';
		//右下角
		recursion(x + t, y + t, x + t, y + t, t);
		//左下角
		recursion(x + t, y, sx, sy, t);
		// 右上角
		recursion(x, y + t, x + t - 1, y + t, t);
		// 左上角
		recursion(x, y, x + t - 1, y + t - 1, t);
	}
	// 右上角
	if (sx < x + t && sy > y + t - 1)
	{
		chess[x + t - 1][y + t - 1] = 'c';
		// chess[sx][sy] = '*';
		chess[x + t][y + t - 1] = 'c';
		chess[x + t][y + t] = 'c';
		recursion(x, y, x + t - 1, y + t - 1, t);
		recursion(x, y + t, sx, sy, t);
		recursion(x + t, y, x + t, y + t - 1, t);
		recursion(x + t, y + t, x + t, y + t, t);
	}
	// 右下角
	if (sx > x + t - 1 && sy > y + t - 1)
	{
		chess[x + t - 1][y + t - 1] = 'a';
		chess[x + t - 1][y + t] = 'a';
		chess[x + t][y + t - 1] = 'a';
		recursion(x, y, x + t - 1, y + t - 1, t);
		recursion(x, y + t, x + t - 1 , y + t , t);
		recursion(x + t, y, x + t, y + t - 1, t);
		recursion(x + t, y + t, sx, sy, t);
	}
}
int main()
{
	myopen
	freopen("test.txt", "r", stdin);
	int t = 0;
	scanf("%d", &t);
	// 字符数组初始化测试
	// for (int i = 0; i < 300; ++i)
	// {
	// 	for (int j = 0; j < 300; ++j)
	// 	{
	// 		printf("%c ", chess[i][j]);
	// 	}
	// 	printf("\n");
	// }
	while (t--)
	{
		int sx = 0, sy = 0;
		double size = 0;
		mymemset(chess);
		scanf("%lf%d%d", &size, &sx, &sy);
		chess[sx][sy] = '*';
		recursion(1, 1, sx, sy, pow(2, size));
		for (int i = 1; i <= pow(2, size); ++i)
		{
			for (int j = 1; j <= pow(2, size); ++j)
			{
				printf("%c", chess[i][j] );
			}
			printf("\n");
		}
	}
	return 0;
}
