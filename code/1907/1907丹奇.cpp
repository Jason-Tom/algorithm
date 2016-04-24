#include<stdio.h>
int w[1005],v[1005];
int f[1005][1005];
void package(int w[],int v[],int n,int c);
int max(int x,int y);
int main(void){
    freopen("test.txt","r",stdin);
    int T;
    scanf("%d",&T);
    while(T!=0){
        T--;
        int n,c;
        scanf("%d%d",&n,&c);
        int i;
        for(i=1;i<=n;i++){
            scanf("%d%d",&w[i],&v[i]);
        }
        package(w,v,n,c);
        printf("%d\n",f[n][c]);
    }
    return 0;
}
void package(int w[],int v[],int n,int c){
    int i,j;
     int x,y,z;
    for(i=0;i<=n;i++){
        for(j=1;j<=c;j++){
            if(i==0)
                f[i][j]=0;
            else if(i>0&&j<w[i])
                f[i][j]=f[i-1][j];
            else if(i>0&&j>=w[i]){
                   x=f[i-1][j];
                   y=f[i-1][j-w[i]]+v[i];
                   z=max(x,y);
                 f[i][j]=z;
            }
        }
    }
}
int max(int x,int y){
    int max;
    if(x>y){
        max=x;
    }
    else{
        max=y;
    }
    return max;
}
