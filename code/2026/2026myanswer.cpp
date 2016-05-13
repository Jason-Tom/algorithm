#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#define mems(a) memset(a,0,sizeof(a))
#define myopen if(0)
#define NUM 1024
using namespace std;
int mynum[NUM][NUM];
int temp[NUM][NUM];
int main() {
	myopen
	freopen("test.txt", "r", stdin);
	int row = 0;
	scanf("%d", &row);
	mems(mynum);
	mems(temp);
	for (int i = 1; i <= row; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			scanf("%d", & mynum[i][j]);
			int x = 0, y = 0, z = 0;
			x = temp[i - 1][j - 1] + mynum[i][j];
			y = temp[i - 1][j] + mynum[i][j];
			myopen
			printf("x:%d y:%d \n", x , y);
			if (x < y)
			{
				x = y;
			}
			temp[i][j] = x;
			myopen
			printf("i:%d j:%d ", i, j );
			myopen
			printf("%d\n", temp[i][j]);
		}
	}
	sort(temp[row] + 1, temp[row] + 1 + row);
	printf("%d\n",temp[row][row] );
	// 检测输入
	// for (int j = 1; j <= 5; ++j)
	// {
	// 	printf("%d ", temp[5][j] );
	// }
	// printf("\n");
}