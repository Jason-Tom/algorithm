#include <stdio.h>

int functions(int a,int b)
{
   if(b==1 || a==1)
        return 1;
    if(a<b)
        return functions(a,a);
    if(a==b)
        return functions(a,b-1)+1;
    if(b>1&&a>b)
	return functions(a-b,b)+functions(a,b-1);
}

int main()
{
    int c;
    while(scanf("%d",&c)!=EOF)
    {
    printf("%d\n",functions(c,c));
    }
   return 0;
}
