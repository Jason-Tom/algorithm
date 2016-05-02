#include <stdio.h>
#include <iostream>
#include <string.h>
#define mymemset(a) memset(a,0,sizeof(a))
#define myopen if(1)
#define mynum 100024
int positive_data[mynum], negative_num[mynum];
int main()
{
	myopen
	freopen("test.txt", "r", stdin);
	int t = 0;
	scanf("%d", &t);
	while (t--)
	{
		mymemset(positive_data);
		mymemset(negative_num);
		int n = 0, datanum = 0, i = 0;
		scanf("%d", &n);
		for (i = 0; i < n; ++i)
		{
			scanf("%d", &datanum);
			if (datanum > 0)
			{
				++positive_data[datanum];
				if (positive_data[datanum] > n / 2) {
					break;
				}
			}
			else
			{
				++negative_num[-datanum];
				if (negative_num[-datanum] > n / 2) {
					break;
				}
			}

		}
		while (i + 1 < n)
		{
			i++;
			int excess = 0;
			scanf("%d", &excess);
			// printf("%d\n", excess );
		}
		if (i != n)
			printf("%d\n", datanum);
		else
			printf("no\n");
	}
}