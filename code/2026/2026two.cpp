#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#define mems(a) memset(a,0,sizeof(a))
#define NUM 1024
using namespace std;
int mynum[NUM][NUM];
int temp[NUM][NUM];
int mymax = 0;
int main() {
	int row = 0;
	scanf("%d", &row);
	mems(mynum);
	mems(temp);
	for (int i = 1; i <= row; ++i)
		for (int j = 1; j <= i; ++j)
		{
			scanf("%d", & mynum[i][j]);
			int x = 0, y = 0;
			x = temp[i - 1][j - 1] + mynum[i][j];
			y = temp[i - 1][j] + mynum[i][j];
			if (x < y)
				x = y;
			temp[i][j] = x;
			if (mymax < x)
				mymax = x;
		}
	printf("%d\n", mymax );
}