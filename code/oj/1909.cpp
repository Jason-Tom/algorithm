#include<stdio.h>

int huafen(int n,int m)//2��
{
   if(n<1 || m<1) return 0;//����С��0������0��  ע�������ǻ�
   if(m==1 || n==1)//��������1����1��
        return 1;
    if(n<m)//���ߴ���ǰ�ߣ�����ǰ��  //��������Ϊһ������
        return huafen(n,n);
    else if(n==m)//������ȣ���1�����߼�1
        return huafen(n,m-1)+1;
    else
        return huafen(n-m,m)+huafen(n,m-1);//��ȵ�ǰ�߷���ֵ(������1)����huafen(n-m,m)
}

int main()
{
    freopen("input.txt","r",stdin);
    int n;
    while(scanf("%d",&n)!=EOF)
    {
    printf("%d\n",huafen(n,n));//1����������������÷��������������    //���ע�⻻�� �ո��

    }
   return 0;
}
