#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main(void)
{
	freopen("test.txt", "r", stdin);
	char a[1024], b[1024];
	int c = 0, d = 0;
	int t = 0;
	printf("请输入测试组数\n");
	scanf("%d", &t);
	while (t--) {
		int k = 0;
		printf("请输入数组a：\n");
		scanf("%s", a);
		printf("请输入数组b：\n");
		scanf("%s", b);
		c = strlen(a);
		d = strlen(b);
		int i = 0,j = 0;
		out:for (; i < c && j < d; )
		{
			for (int l = j; l < d; ++l)
			{
				if (a[i] == b[l])
				{
					++j;
					++i;
					++k;
					goto out;
				}
			}
			++i;
		}
		cout << "公共子序列为：" << k << endl;
	}
	return 0;
}
