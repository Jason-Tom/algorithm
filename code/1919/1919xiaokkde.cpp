#include <stdio.h>
#include <string.h>
#include <algorithm>
#define MAXN 1010
#define open if(1)
using namespace std;
int n,m,val[MAXN],ti[MAXN];
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    open
    freopen("test.txt", "r", stdin);
    int w,cas=1;
    scanf("%d",&w);
    while(w--)
    {
        memset(ti,0,sizeof(ti));
        scanf("%d%d",&n,&m);
        for(int i=1;i<=n;i++)
            scanf("%d",&val[i]);
        sort(val+1,val+1+n,cmp);
        int ans =0 ;
        if(n<=m)ans=val[1];
        else
        	for(int i=1;i<=n;i++)
	        {
	            int tmp = 1;
	            for(int j=2;j<=m;j++)
	                if(ti[j]<ti[tmp])tmp = j;
	            ti[tmp]+=val[i];
	            if(ti[tmp]>ans)ans=ti[tmp];
	        }
        printf("Case %d: %d\n",cas++,ans);
    }
    return 0;
}
