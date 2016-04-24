#include<stdio.h>
#define max(a,b) a>=b?a:b//定义比较选取较大值
	int value[1005][1005];//价值最后结果判定数组放在主函数前
int main()
{
    freopen("input.txt","r",stdin);
	int T,N,C;
	int w[1005],v[1005];
	scanf(" %d",&T);
    for(int i=1;i<=T;i++)//1、输入测试用例在具体输入测试用例， 从1开始输入对应好个数
	{
		scanf(" %d %d",&N,&C);
		for(int j=1;j<=N;j++)
		{
			scanf(" %d %d",&w[j],&v[j]);
		}

	for(int k=0;k<=N;k++)
	{
		value[k][0]=0;
	}

    for(int l=0;l<=C;l++)
    {
		value[0][l]=0;
    }

	for(int i=1;i<=N;i++)
	{
		for(int j=0;j<=C;j++)
		{
			if(j<w[i])
			{
				value[i][j]=value[i-1][j];
			}
			else
			{
				value[i][j]=max(value[i-1][j],value[i-1][j-w[i]]+v[i]);
			}
		}
	}
		printf("%d\n",value[N][C]);

	}
	return 0;
}
