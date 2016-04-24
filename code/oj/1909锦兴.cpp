#include<stdio.h>

int huafen(int n,int m)
{int x,y;
	if(m==1&&n>=1)
		return 1;
	if(m>n)
		return huafen(n,n);
	if(m==n)
		return 1+huafen(n,n-1);
	if(m>1&&n>m){
		x=huafen(n,m-1);
		y=huafen(n-m,m);
		return x+y;
	}
	return 0;
}

int main()
{
    freopen("input.txt","r",stdin);
	int i,n;
	while(scanf(" %d",&n)!=EOF)
	{
    printf("%d\n",huafen(n,n));//输入测试样例，两个一样的进行比较，调用函数直接输出结果
	}
	return 0;
}
