#include<stdio.h>
#include<string.h>
char x[1005],y[1005];//数组用的是x y字符串
int c[1005][1005];
int main()
{
    freopen("input.txt","r",stdin);
    int T;
    int lenx,leny;
    scanf("%d",&T);
    for(int k=1;k<=T;k++)//1、输入测试样例个数
    {
        scanf("%s\n%s",x,y);//2、输入每个具体测试样例  输入类型要对应好
        lenx=strlen(x);//获取数组长度
        leny=strlen(y);
       // printf("%d  %d\n",lenx,leny);
        for(int i=0; i<=lenx; i++)//3、两个字符串进行循环 由0到n相等
        {
            for(int j=0; j<=leny; j++)
            {
                if(i==0||j==0)//4、字符串第一个位置特殊情况 进行初始化  从0开始初始化

                {
                    c[i][j]=0;
                }
                else if(x[i-1]==y[j-1])//5、开始比较进行递归，并进行数量计算
                {
                    c[i][j]=c[i-1][j-1]+1;//都减1
                }
                else
                {
                    if(c[i][j-1]>c[i-1][j])//6、最后一种情况，并进行数量计算
                    {
                        c[i][j]=c[i][j-1];
                    }
                    else
                    {
                        c[i][j]=c[i-1][j];
                    }
                }
            }
        }
        printf("%d\n",c[lenx][leny]);//看清放置的位置
    }
}
