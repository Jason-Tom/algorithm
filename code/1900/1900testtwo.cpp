#include <stdio.h>
#include <string.h>
#define NUM 1024
#define mem(a) memset(a,0,sizeof(a))
struct _matrix {
	int row, column;
} matrix[NUM];
int f[NUM][NUM];
int main()
{
	int t = 0, n = 0;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		mem(matrix);
		mem(f);
		for (int i = 1; i <= n; ++i)
			scanf("%d%d", &matrix[i].row, &matrix[i].column);
		for (int i = 2; i <= n; ++i)
		{
			int sourse_end = n - i + 1;
			for (int j = 1; j <= sourse_end; ++j)
			{
				int sta = j , _end = j + i - 1;
				for (int k = sta; k < _end; ++k)
				{
					int tmp = f[sta][k] + f[k + 1][_end] + matrix[sta].row * matrix[k].column * matrix[_end].column;
					if (!f[sta][_end]  || f[sta][_end] > tmp)
						f[sta][_end] = tmp;
				}
			}
		}
		printf("%d\n", f[1][n] );
	}
}
