#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
#define open if(1)
int main()
{
	int a[10]={34,56,4,10,77,51,93,30,5,52};
	int b[10];
	memcpy(b, a, sizeof(b));
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n",b[i] );
	}
}
