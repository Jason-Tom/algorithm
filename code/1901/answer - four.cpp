#include<stdio.h>
#include<string.h>
#define maxn 1010
// 方便统一修改
// 宏只是一个替换工具，可以替换函数、变量、片段，通过这里定义效率高，（定义短的）
char a[maxn], b[maxn];
int c[maxn][maxn];
int main()
{
	freopen("test.txt", "r", stdin);
	int t = 0;
	scanf("%d", &t);
	while (t--)
	{
		int i = 0, j = 0;
		// scanf("%s", a);
		// scanf("%s", b);
		scanf("%s%s",a,b);
		// cx = strlen(a);
		// cy = strlen(b);
		// 不能放在循环里面，他每次都要运算容易在嵌套循环里面超时
		int cx = strlen(a), cy = strlen(b);
		// 定义变量的时候直接赋值上去，节省代码代码量
		memset(c, 0, sizeof(c));
		// 数组初始化，这种方法快速，只能赋值0或者1
		for (i = 1; i <= cx; ++i)
		{
			for (j = 1; j <= cy; ++j)
			{
				if (a[i - 1] == b[j - 1])
				{
					c[i][j] = c[i - 1][j - 1] + 1;
					if (c[i][j] <= c[i - 1][j])
						c[i][j] = c[i - 1][j];
					if (c[i][j] <= c[i][j - 1])
						c[i][j] = c[i][j - 1];
				}
				else
				{
					if (c[i - 1][j] > c[i][j - 1])
					{
						c[i][j] = c[i - 1][j];
					}
					else
					{
						c[i][j] = c[i][j - 1];
					}
				}
			}
		}
		printf("%d\n", c[cx][cy]);
	}
	return 0;
}