#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main(void)
{
	freopen("test.txt", "r", stdin);
	char a[100], b[100];
	int c[100][100];
	// 二维数组不能定义太大，会越界
	int cx = 0, cy = 0, t = 0;
	cin >> t;
	while (t--)
	{
		int i = 0, j = 0;
		cin >> a;
		cin >> b;
		cx = strlen(a);
		cy = strlen(b);
		for (i = 0; i <= cx; ++i)
		{
			for (j = 0; j <= cy; ++j)
				// <=不能分开写
			{
				c[i][j] = 0;
				// 初始化数据注意数据类型对应，要标准对应
			}
		}
		for (i = 1; i <= cy; ++i)
		{
			for (j = 1; j <= cx; ++j)
			{
				if (a[i - 1] == b[j - 1])
				{
					c[i][j] = c[i - 1][j - 1] + 1;
					if (c[i][j] > c[i - 1][j])
					{
						;
					}
					else
					{
						c[i][j] = c[i - 1][j];
					}

					if (c[i][j] > c[i][j - 1])
					{
						;
					}
					else
					{
						c[i][j] = c[i][j - 1];
					}
				}
				else if (c[i][j] > c[i][j - 1])
				{
					;
				}
				else
				{
					c[i][j] = c[i][j - 1];
				}
				if (c[i][j] > c[i - 1][j])
				{
					;
				}
				else
				{
					c[i][j] = c[i - 1][j];
				}
			}
		}
		cout << c[i][j] << endl;
	}
	return 0;
}


