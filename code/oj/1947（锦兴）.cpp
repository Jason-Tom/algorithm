#include<stdio.h>
#define max(a,b) a>=b?a:b
int a[1005];//定义两个整型数组一个用于存原始数据，另一个用于，选取最大值
int b[1005];
int main()//循环都是从1开始对应数据
{
    freopen("input.txt","r",stdin);
    int n;
    while(scanf(" %d",&n)!=EOF)//1、输入测试用例第一个数
    {
        for(int i=1;i<=n;i++)//2、循环测试用例次数
        {
            scanf(" %d",&a[i]);
        }
		if(n==1){//3、特殊情况分离开   长度等于1
			printf("%d\n",a[1]);//打印出a[1]闪人
			continue;
		}

        for(int j=1;j<=n;j++)
        {
            b[j]=max(a[j],b[j-1]+a[j]);//4、选取每个字段最大的
        }

		int themax=b[1];//5、有第一个开始 选取最大的字段
		for(int k=1;k<=n;k++)//别打少了k
		{
			themax=max(themax,b[k]);
		}
        printf("%d\n",themax);//6、循环结束前输出结果
    }

   return 0;

}
