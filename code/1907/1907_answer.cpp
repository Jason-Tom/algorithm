#include<stdio.h>
#include<string.h>
int main() {
	int max[100], v = 0, n_kind = 0;
	memset(max, 0, sizeof(max));
	scanf("%d%d", &v, &n_kind);
	int weight[1024],value[1024];
	memset(weight,0,sizeof(weight));
	memset(value,0,sizeof(value));
    printf("%d%d\n",v,n_kind);
    for (int i = 0; i < 1024; ++i)
    {
    	printf("%d %d\n",weight[i],value[i] );
    }
	return 0;
}