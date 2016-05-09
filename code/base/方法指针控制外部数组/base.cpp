#include <iostream>
#include <stdio.h>
using namespace std;

void swap(int *y);
int d[1] = {2};
int main ()
{
	int c[1] = {3};

	int a = 100;
	int b = 200;
	swap(&c[0]);
	printf("c:%d\n", c[0] );
	printf("d:%d\n", d[0] );

	return 0;
}
void swap(int *y)
{
	d[0] = 9;
	*y = 9;
	return;
}