#include "stdio.h"
int max(int a, int b, int c);
int main()
{
    int a, b, c;
    printf("��������������\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", max(a,b,c));
}
int max(int a, int b, int c) {
    if (a > b)
    {
        ;
    }
    else
    {
        a = b;
    }
    if (a > c)
    {
        ;
    }
    else
    {
        a = c;
    }
    return c;
}