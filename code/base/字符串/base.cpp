#include<stdio.h>
#include<iostream>
#include<string.h>
int main(void)
{
    char a[1024];
    // �ַ�����������Ҫ��Ӧ���ַ���
    int c=0,d=0;
    printf("����������a��\n");
    scanf("%s",a);
    c=strlen(a);
    printf("����a��%s\n",a);
    printf("����a���ȣ�%d\n",c);
    return 0;
}
