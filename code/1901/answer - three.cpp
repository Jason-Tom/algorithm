#include<stdio.h>
#include<string.h>

int main(void)
{
	freopen("test.txt", "r", stdin);
	char a[100], b[100];
	int c[100][100];
	int cx = 0, cy = 0, t = 0;
	scanf("%d", &t);
	while (t--)
	{
		int i = 0, j = 0;
		scanf("%s", a);
		scanf("%s", b);
		cx = strlen(a);
		cy = strlen(b);
		for (i = 0; i <= cx; ++i)
		{
			c[i][0] = 0;
		}
		for (j = 0; j <= cy; ++j)
		{
			c[0][j] = 0;
		}

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


