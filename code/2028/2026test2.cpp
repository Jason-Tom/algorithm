#include <stdio.h>
#include <string.h>
#define NUM 256
int you[NUM][NUM], n = 0;
int main()
{
	memset(you,0,sizeof(you));
	scanf("%d", &n);
	for (int i = 1; i < n; ++i)
		for (int j = i + 1; j <= n; ++j) 
			scanf("%d", &you[i][j]);
	for (int i = 2; i <= n; ++i)
		for (int _start = 1; _start <= n - i + 1; ++_start)
		{
			int _end = _start + i - 1;
			if(!you[_start][_end])you[_start][_end] = 0x3f3f3f3f;
			for (int k = _start; k < _end; ++k)
			{
				int temp = 0,to = k;
				temp = you[_start][to] + you[to][_end];
				if (you[_start][_end] > temp)
					you[_start][_end] = temp;
			}
		}
	printf("%d\n", you[1][n]);
}