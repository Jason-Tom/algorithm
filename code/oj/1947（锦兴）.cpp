#include<stdio.h>
#define max(a,b) a>=b?a:b
int a[1005];//����������������һ�����ڴ�ԭʼ���ݣ���һ�����ڣ�ѡȡ���ֵ
int b[1005];
int main()//ѭ�����Ǵ�1��ʼ��Ӧ����
{
    freopen("input.txt","r",stdin);
    int n;
    while(scanf(" %d",&n)!=EOF)//1���������������һ����
    {
        for(int i=1;i<=n;i++)//2��ѭ��������������
        {
            scanf(" %d",&a[i]);
        }
		if(n==1){//3������������뿪   ���ȵ���1
			printf("%d\n",a[1]);//��ӡ��a[1]����
			continue;
		}

        for(int j=1;j<=n;j++)
        {
            b[j]=max(a[j],b[j-1]+a[j]);//4��ѡȡÿ���ֶ�����
        }

		int themax=b[1];//5���е�һ����ʼ ѡȡ�����ֶ�
		for(int k=1;k<=n;k++)//�������k
		{
			themax=max(themax,b[k]);
		}
        printf("%d\n",themax);//6��ѭ������ǰ������
    }

   return 0;

}
