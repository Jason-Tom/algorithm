#include<stdio.h>
#include<iostream>
#include<string.h>
int main(void)
{
    char a[1024], b[1024];
    int c = 0, d = 0;
    printf("����������a��\n");
    scanf("%s", a);
    printf("����������b��\n");
    scanf("%s", b);
    if (strcmp(a, b) == 0)
        // ���ú�����������ؿ⺯��string.h,strcmp(a, b) == 0
    {
        printf("�ַ���a��b���\n");
    }
    else
    {
        printf("�ַ���a��b�����\n");
    }
    return 0;
}
