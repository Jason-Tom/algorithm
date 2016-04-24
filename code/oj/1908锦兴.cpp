#include<stdio.h>
int shuangdigui(int n,int m)//3、定义双递归函数         双递归函数，按条件写   变量尽量写的和题目相同
{                           //变量按照x、y写
	if(n==1&&m==0)return 2;//利用好退格键快速调整位置
	if(n==0&&m>=0)return 1;//具体条件，看好整行
	if(n>=2&&m==0)return n+2;
	if(n>=1&&m>=1)//最后一个尽量加上条件，排除特殊情况
	{
		shuangdigui(shuangdigui(n-1,m),m-1);//注意自身嵌套
	}

}

int main()
{
    freopen("input.txt","r",stdin);

	int n,m;//1、定义两个变量进行输入
	while(scanf(" %d %d",&n,&m)!=EOF)
	{
    printf("%d\n",shuangdigui(n,m));//2、调用函数进行输出   利用好编译器读取变量和方法，减少错误
	}
	return 0;

}
