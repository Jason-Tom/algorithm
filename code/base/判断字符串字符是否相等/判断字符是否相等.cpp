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
    if (a[0]==b[0])
        // �ж�������ֵΪ0��ʱ��Ϊ�٣�����ֵ��ʱ��Ϊ��
        // �ж��ַ��Ƿ���ȣ�ֱ��ʹ��==�ж�
    {
        printf("�ַ�a��b���%d %d\n",a[0]==b[0],a[0]==b[0]);
        // ������,�������������,�ö��Ÿ���
    }
    else
    {
        printf("�ַ�a��b�����\n");
    }
    return 0;
}
