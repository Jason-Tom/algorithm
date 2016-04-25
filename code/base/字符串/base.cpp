#include<stdio.h>
#include<iostream>
#include<string.h>
int main(void)
{
    char a[1024];
    // 字符串数据类型要对应好字符串
    int c=0,d=0;
    printf("请输入数组a：\n");
    scanf("%s",a);
    c=strlen(a);
    printf("数组a：%s\n",a);
    printf("数组a长度：%d\n",c);
    return 0;
}
