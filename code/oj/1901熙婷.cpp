#include<stdio.h>
#include<string.h>
char x[1005],y[1005];//�����õ���x y�ַ���
int c[1005][1005];
int main()
{
    freopen("input.txt","r",stdin);
    int T;
    int lenx,leny;
    scanf("%d",&T);
    for(int k=1;k<=T;k++)//1�����������������
    {
        scanf("%s\n%s",x,y);//2������ÿ�������������  ��������Ҫ��Ӧ��
        lenx=strlen(x);//��ȡ���鳤��
        leny=strlen(y);
       // printf("%d  %d\n",lenx,leny);
        for(int i=0; i<=lenx; i++)//3�������ַ�������ѭ�� ��0��n���
        {
            for(int j=0; j<=leny; j++)
            {
                if(i==0||j==0)//4���ַ�����һ��λ��������� ���г�ʼ��  ��0��ʼ��ʼ��

                {
                    c[i][j]=0;
                }
                else if(x[i-1]==y[j-1])//5����ʼ�ȽϽ��еݹ飬��������������
                {
                    c[i][j]=c[i-1][j-1]+1;//����1
                }
                else
                {
                    if(c[i][j-1]>c[i-1][j])//6�����һ���������������������
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
        printf("%d\n",c[lenx][leny]);//������õ�λ��
    }
}
