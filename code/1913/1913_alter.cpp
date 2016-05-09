#include <stdio.h>
#include <iostream>
#include <string.h>
#include <math.h>
#define mymemset(a) memset(a,'0',sizeof(a))
#define myopen if(1)
char chess[300][300];
int x_sourse = 0, y_sourse = 0;
void recursion(int x, int y, int sx, int sy, int size)
{
	// x,y定位坐标，sx，sy特殊点坐标，size尺寸
	// if (size == 2)
	// 	return;
	// printf("%d\n", x);
	// return;
	int t = size / 2;
	// 左上角
	if (sx <= t && sy <= t)
	{
		chess[t][t + 1] = 'd';
		chess[t + 1][t] = 'd';
		chess[t + 1][t + 1] = 'd';
		// printf("%d\n", x_sourse);
		//右下角
		recursion(x + t / 2, y + t / 2, t / 2 + 1, t / 2 + 1, t);
		//左下角
		recursion(x + t / 2, y, t / 2 + 1, t / 2, t);
		// 右上角
		recursion(x, y + t / 2, t / 2, t / 2 + 1, t);
		// 左上角
		recursion(x, y, sx, sy, t / 2);
	}
	// 左下角
	if (sx > t && sy <= t)
	{
		x -= t;
		sx -= t;
		// printf("%d\n", x);
		chess[x_sourse + t][y_sourse + t] = 'b'; //t?????????????????????
		chess[x_sourse + t][y_sourse + t + 1] = 'b';
		// chess[sx][sy] = '*';
		chess[x_sourse + t + 1][y_sourse + t + 1] = 'b';
		x_sourse += t;
		// // printf("%d\n", x_sourse);
		// //右下角
		// recursion(x + t / 2, y + t / 2, t / 2 + 1, t / 2 + 1, t);
		// //左下角
		// recursion(x + t / 2, y, sx, sy, t);
		// // 右上角
		// recursion(x, y + t / 2, t / 2, t / 2 + 1, t);
		// // 左上角
		// recursion(x, y, t / 2, t / 2, t / 2);
		// // printf("左下角");
	}
	// 右上角
	if (sx <= t && sy > t)
	{
		chess[t][t] = 'c';
		// chess[sx][sy] = '*';
		chess[t + 1][t] = 'c';
		chess[t + 1][t + 1] = 'c';
		// recursion(x, y, t, t, t);
		// recursion(x, y + t, sx, sy, t);
		// recursion(x + t, y, t + 1, t, t);
		// recursion(x + t, y + t, t + 1, t + 1, t);
	}
	// 右下角
	if (sx > t && sy > t)
	{
		chess[t][t] = 'a';
		chess[t][t + 1] = 'a';
		chess[t + 1][t] = 'a';
		// chess[sx][sy] = '*';
		// recursion(x, y, t, t, t);
		// recursion(x, y + t, t , t + 1, t);
		// recursion(x + t, y, t + 1, t, t);
		// recursion(x + t, y + t, sx, sy, t);
	}
	// printf("chess[%d][%d]:%c\n", sx, sy, chess[sx][sy] );
	// printf("chess[%d][%d]:%c\n", t, t, chess[t][t] );
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
		scanf("%d%d%d", &size, &sx, &sy);
		// chess[sx][sy] = '*';
		// printf("坐标：%d %d\n", sx, sy);
		chess[sx][sy] = '*';
		printf("%c\n", chess[sx][sy]);
		x_sourse = 0;
		y_sourse = 0;
		recursion(1, 1, sx, sy, pow(2, size));
		for (int i = 1; i <= 2 * size; ++i)
		{
			for (int j = 1; j <= 2 * size; ++j)
			{
				printf("%c", chess[i][j] );
			}
			printf("\n");
		}
	}
	return 0;
}
