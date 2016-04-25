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
    if (a[0]==b[0])
        // 判断条件的值为0的时候为假，其他值的时候为真
        // 判断字符是否相等，直接使用==判断
    {
        printf("字符a和b相等%d %d\n",a[0]==b[0],a[0]==b[0]);
        // 输出语句,后面多个输出变量,用逗号隔开
    }
    else
    {
        printf("字符a和b不相等\n");
    }
    return 0;
}
