#include <stdio.h>
#include <string.h>
#define open if(1)
int main()
{
	// printf("asfdasdfa\n");
	int t = 0;
	scanf("%d",&t);
	while(t--)
	{
		int n=0,star[1024],end[1024];
		scanf("%d",&n);
		memset(star,0,sizeof(star));
		memset(end,0,sizeof(end));
		for (int i = 1; i <= n; ++i)
		{
			printf("%d %d\n",star[i],end[i] );
		}
		// printf("%d\n",t);
	}
}
