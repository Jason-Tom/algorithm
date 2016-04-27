#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
#define open if(1)
int main()
{
	int a[3][2]={{2,3},{1,2},{3,4}};
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
