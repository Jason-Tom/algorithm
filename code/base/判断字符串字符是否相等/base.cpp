#include<stdio.h>
#include<iostream>
#include<string.h>
int main(void)
{
    char a[1024], b[1024];
    int c = 0, d = 0;
    printf("请输入数组a：\n");
    scanf("%s", a);
    printf("请输入数组b：\n");
    scanf("%s", b);
    if (strcmp(a, b) == 0)
        // 动用函数，调用相关库函数string.h,strcmp(a, b) == 0
    {
        printf("字符串a和b相等\n");
    }
    else
    {
        printf("字符串a和b不相等\n");
    }
    return 0;
}
