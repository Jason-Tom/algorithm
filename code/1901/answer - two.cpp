#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main(void)
{
	freopen("mytest.txt", "r", stdin);
	char a[1024], b[1024], c[1024][1024];
	int cx = 0, cy = 0, res = 0;
	cin >> a;
	cin >> b;
	cx = strlen(a);
	cy = strlen(b);
	for (int i = 0; i <= cx; ++i)
	{
		for (int j = 0; j <= cy; ++j)
			// <=不能分开写
		{
			c[i][j] = '0';
			// 初始化数据注意数据类型对应，要标准对应
		}
	}
	for (int i = 1; i <= cy; ++i)
	{
		for (int j = 1; j <= cx; ++j)
		{
			if (a[j] == b[i])
				// 注意弄反了
			{
				int temp = 0;
				c[j][i] = c[j - 1][i - 1] + 1;
				temp = c[j][i];
				if (temp > c[i - 1][j])
				{
					;
				}
				else
				{
					temp = c[i - 1][j];
				}
				if (temp > c[i][j - 1])
				{
					;
				}
				else
				{
					temp = c[i][j - 1];
				}
				// cout<<temp<<endl;
			}
			else
			{
				if (c[j][i] > c[j - 1][i])
				{
					;
				}
				else
				{
					c[j][i] = c[j - 1][i];
				}
				if (c[j][i] > c[j][i - 1])
				{
					;
				}
				else
				{
					c[j][i] = c[j][i - 1];
				}
			}
			res = c[j][i];
		}
		// cout << "x" << endl;
	}
	cout << res << endl;
	return 0;
}
