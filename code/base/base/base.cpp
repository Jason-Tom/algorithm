#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int x=0,T=0;
int main(void){
    freopen("test.txt","r",stdin);
//     printf("the num is %d \n", x);
//   �����䣬���ָ��������ͣ����Լ����������֣�Ҫ��Ӧ�ø�ʽ���ұ߶�Ӧ������������ü���&��
    int T;
    printf("������Ҫ��������ָ�����\n");
    scanf("%d",&T);
    while(T!=0){
        printf("���������֣�\n");
        scanf("%d",&x);
//       ����������������&
        printf("%d\n",x);
        T--;
    }
    return 0;
}
