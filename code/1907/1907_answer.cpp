#include<stdio.h>
#include<string.h>
int main(){
	int max[100];
	memset(max, 0, sizeof(max));
	for (int i = 0; i < 100; ++i)
	{
		printf("%d\n",max[i] );
	}
	return 0;
}