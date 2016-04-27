#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
#define open if(1)
int main()
{
	int a[10] = {34, 56, 4, 10, 77, 51, 93, 30, 5, 52};
	int temp = 0;
	for (int i = 0; i < 10; ++i)
	{
		for (int j = i + 1; j < 10; ++j)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n", a[i] );
	}
}
