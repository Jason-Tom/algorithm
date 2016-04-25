#include<stdio.h>
#include<string.h>
int dealdata(char x[],char y[],int cx,int cy);

char x[1005];
char y[1005];
int c[1005][1005];
int main(void){
    freopen("test.txt","r",stdin);
    int T;
    scanf("%d",&T);
    while(T!=0){
        scanf("%s",x);
        scanf("%s",y);
        int cx=strlen(x);
        int cy=strlen(y);
        int s;
        s=dealdata(x,y,cx,cy);
        printf("%d\n",s);
        T--;
    }
    return 0;
}
int dealdata(char x[],char y[],int cx,int cy){
    int i,j;
    for(i=0;i<=cx;i++){
         c[i][0]=0;
    }
    for(i=0;i<=cy;i++){
        c[0][i]=0;
    }
    for(i=1;i<=cx;i++){
        for(j=1;j<=cy;j++){
            if(x[i-1]==y[j-1])
                c[i][j]=c[i-1][j-1]+1;
            else{
                if(c[i][j-1]>=c[i-1][j]){
                    c[i][j]=c[i][j-1];
                }else{
                    c[i][j]=c[i-1][j];
                }
            }
        }
    }
    return c[cx][cy];
}
