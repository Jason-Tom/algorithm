#include<stdio.h>
#include<iostream>
#include<string.h>
int main(void)
{
	char a[1024],b[1024];
	// 字符串数据类型要对应好字符串
	int c=0,d=0;
	printf("请输入数组a：\n");
	scanf("%s",a);
	printf("请输入数组b：\n");
	scanf("%s",b);
	c=strlen(a);
	d=strlen(b);
	for (int i = 0; i < c; ++i)
	{
		printf("第%d个字符是：%c\n",i+1,a[i]);
		// 数据类型对应好，后面的变量可以使用运算表达式 
		for (int j = 0; j < d; ++i)
		{
			/* code */
		}
	}
	// printf("数组a：%s\n",a);
	// printf("数组b：%s\n",b);
	// printf("数组a长度：%d\n",c);
	// printf("数组b长度：%d\n",d);
	return 0;
}
