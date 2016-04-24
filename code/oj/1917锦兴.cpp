#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int w[1005];
int main()
{
    freopen("input.txt","r",stdin);
	int T,n,C,D,V=0 ;

	scanf("%d",&T);      //1、读入循环T次
	for(int i=1; i<=T;i++)
	{
		D=0;//每次循环初始化两个统计数据
		V=0;
		scanf(" %d %d",&n,&C);
		for(int j=0; j<n;j++)////////2、读入n个货物
		{
			scanf(" %d",&w[j]);
		}

	    sort(w,w+n);//3、由小到大排序
		V=0;
		for(int k=0; k<n;k++)//循环进行判定
		{
			if(V+w[k]<=C)//4、判断并进行统计 初始化载重量加上每个载重量不能超过最大载重量  可以等于也就是不大于
			{
				D++;
				V+=w[k];
			}
		}
		printf("Case %d: %d %d\n",i,D,V);//5、对应格式输出
	}
	return 0;
}
