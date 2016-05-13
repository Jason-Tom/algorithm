#include <stdio.h>
#include <string.h>
#define _open if(1)
#define NUM 1024
#define mem(a) memset(a,0,sizeof(a))
struct _matrix {
	int row, column;
} matrix[NUM];
int from[NUM][NUM];
int main()
{
	_open
	freopen("test.txt", "r", stdin);
	int t = 0, n = 0;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		mem(matrix);
		mem(from);
		for (int i = 1; i <= n; ++i)
		{
			scanf("%d%d", &matrix[i].row, &matrix[i].column);
			// printf("%d %d\n", matrix[i].row,matrix[i].column);
		}
		for (int i = 2; i <= n; ++i)
		{
			// sourse_end对应的是对应长度起点的终点
			int sourse_end = n - i + 1;
			for (int j = 1; j <= sourse_end; ++j)
			{
				// to切割点 ，_end是最后一个对应的切割点，切到该点，该店和前面合并
				int sourse_start = j, to = j, _end = j + i - 1;
				// from[sourse_start][_end] = from[sourse_start][to] + from[to + 1][_end] + matrix[sourse_start].row * matrix[to].row * matrix[_end].column;
				for (int k = to; k <= _end; ++k)
				{
					if (from[sourse_start][_end]==0||from[sourse_start][_end] > from[sourse_start][to] + from[to + 1][_end] + matrix[sourse_start].row * matrix[to].column * matrix[_end].column)
					{
						from[sourse_start][_end] = from[sourse_start][to] + from[to + 1][_end] + matrix[sourse_start].row * matrix[to].column * matrix[_end].column;
					}

					// printf("%d\n",from[sourse_start][_end] );
				}
				// printf("from[%d][%d]:%d from[%d][%d]:%d\n", sourse_start, to, from[sourse_start][to], to + 1, _end, from[to + 1][_end]);
				// printf("from[%d][%d]%d\n", sourse_start, _end, from[sourse_start][_end]);
				// printf("matrix[%d].column:%d\n", _end, matrix[_end].column);
				// printf("matrix[%d].row:%d\n", to, matrix[to].row);
				// printf("matrix[%d].row:%d\n", sourse_start, matrix[sourse_start].row);
				// printf("sourse_start:%d _end:%d  from[sourse_start][_end]:%d", sourse_start, _end, from[sourse_start][_end]);
				printf("\n");
			}
			// printf("\n");

		}
		printf("%d\n",from[1][n] );
	}
}