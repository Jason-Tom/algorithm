#include<stdio.h>
#include<string.h>
#define V 110
#define max(A,B) A>=B?A:B
int value[V];
int main()
{
    freopen("input.txt","r",stdin);
    int n,c,w,v;
    int i,j;
    memset(value,0,sizeof(value));//1、初始化不知道数组长度的数组，要调用方法
    scanf("%d%d",&c,&n);//2、输入测试用例个数和限定容量
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&v,&w);//3、输入每个具体测试样例
        for(j=0;j<=c;j++)
        {
            if(j>=w)//4、进行比较递归
            value[j]=max(value[j],value[j-w]+v);
        }
    }
    printf("%d",value[c]);//5、输出最后容量的价值
    return 0;
}
