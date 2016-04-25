#include<stdio.h>
#include<iostream>
#include<string.h>
int main(void)
{
	char a[1024],b[1024];
	int c=0,d=0;
	printf("请输入数组a：\n");
	scanf("%s",a);
	printf("请输入数组b：\n");
	scanf("%s",b);
	c=strlen(a);
	d=strlen(b);
	for (int i = 0,j=0; i < c; )
	{
		if (a[i]==b[j])
		{
			++i;
			++j;
		}
		else
		{
			++j;
		}
	}
	return 0;
}
