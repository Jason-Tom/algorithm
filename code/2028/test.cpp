#include <stdio.h>
#include <string.h>
int main ()
{
	char d[100][100];
	int n = 0;
	int b[100][100];
	int nb[100];
	memset(nb,0,sizeof(nb));
	scanf("%d", &n);
	getchar();
	int a = 0;
	for (int i = 1; i <= n; ++i) {
		gets(d[i]);
		a = strlen(d[i]);
		int t = 0;
		for (int j = 0; j < a; ++j)
		{
			if(d[i][j]>='0'&&d[i][j]<='9'){
				b[i][t]*=10;
				b[i][t]+=d[i][j]-'0';
			}
			else {
				t++;
			}
		}
		if(d[i][a-1]!=' ')t++;
		nb[i]=t;
	}

	for (int i = 1; i <= n; ++i)
	{
		printf("[%d]%s\n", i, d[i]);
	}

	for(int i= 1;i<=n;i++)
	{
		for(int j =0;j<nb[i];j++)
			printf(":%d:",b[i][j]);
		printf("\n");
	}
}