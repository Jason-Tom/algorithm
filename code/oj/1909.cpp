#include<stdio.h>

int huafen(int n,int m)//2、
{
   if(n<1 || m<1) return 0;//两个小于0，返回0，  注意条件是或
   if(m==1 || n==1)//两个等于1返回1，
        return 1;
    if(n<m)//后者大于前者，返回前者  //后面三个为一个整体
        return huafen(n,n);
    else if(n==m)//两个相等，加1，后者减1
        return huafen(n,m-1)+1;
    else
        return huafen(n-m,m)+huafen(n,m-1);//相等的前者返回值(不含加1)加上huafen(n-m,m)
}

int main()
{
    freopen("input.txt","r",stdin);
    int n;
    while(scanf("%d",&n)!=EOF)
    {
    printf("%d\n",huafen(n,n));//1、输入参数，吊牌用方法，进行输出，    //输出注意换行 空格等

    }
   return 0;
}
