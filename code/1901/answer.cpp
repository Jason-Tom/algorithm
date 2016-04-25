#include<stdio.h>
#include<iostream>
#include<string.h>
int main(void)
{
	char a[1024];
	// 字符串数据类型要对应好字符串
	int c=0,d=0;
	string b = "Hello";
	printf("请输入数组a：\n");
	scanf("%s",a);
	printf("请输入数组b：\n");
	scanf("%s",b);
	c=strlen(a);
	d=strlen(d);
	printf("数组a：%s\n",a);
	printf("数组b：%s\n",b);
	printf("数组a长度：%d\n",c);
	printf("数组b长度：%d\n",d);
	return 0;
}
