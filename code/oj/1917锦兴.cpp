#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int w[1005];
int main()
{
    freopen("input.txt","r",stdin);
	int T,n,C,D,V=0 ;

	scanf("%d",&T);      //1������ѭ��T��
	for(int i=1; i<=T;i++)
	{
		D=0;//ÿ��ѭ����ʼ������ͳ������
		V=0;
		scanf(" %d %d",&n,&C);
		for(int j=0; j<n;j++)////////2������n������
		{
			scanf(" %d",&w[j]);
		}

	    sort(w,w+n);//3����С��������
		V=0;
		for(int k=0; k<n;k++)//ѭ�������ж�
		{
			if(V+w[k]<=C)//4���жϲ�����ͳ�� ��ʼ������������ÿ�����������ܳ������������  ���Ե���Ҳ���ǲ�����
			{
				D++;
				V+=w[k];
			}
		}
		printf("Case %d: %d %d\n",i,D,V);//5����Ӧ��ʽ���
	}
	return 0;
}
