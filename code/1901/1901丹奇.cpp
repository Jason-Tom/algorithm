#include<stdio.h>
#include<string.h>
int dealdata(char x[],char y[],int lengthx,int lengthy);

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
        int lengthx=strlen(x);
        int lengthy=strlen(y);
        int s;
        s=dealdata(x,y,lengthx,lengthy);
        printf("%d\n",s);
        T--;
    }
    return 0;
}
int dealdata(char x[],char y[],int lengthx,int lengthy){
    int i,j;
    for(i=0;i<=lengthx;i++){
         c[i][0]=0;
    }
    for(i=0;i<=lengthy;i++){
        c[0][i]=0;
    }
    for(i=1;i<=lengthx;i++){
        for(j=1;j<=lengthy;j++){
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
    return c[lengthx][lengthy];
}
