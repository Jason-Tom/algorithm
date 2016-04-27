#include <stdio.h>
#include <string.h>
#define mymax(a,b) (a>=b?a:b)
#define swith if(1)
int main() {
	swith
	freopen("test.txt", "r", stdin);
	int max[100], value[1024], weight[1024], v = 0, n = 0;
	scanf("%d%d", &v, &n);
	memset(max, 0, sizeof(max));
	memset(weight, 0, sizeof(weight));
	memset(value, 0, sizeof(value));
	// printf("%d%d\n",v,n);
	while (n--)
	{
		printf("%d\n", mymax(9, 7) );
		// scanf("%d%d",&value[n],&weight[n]);
		// printf("%d%d\n",value[n],weight[n]);
	}
	return 0;
}