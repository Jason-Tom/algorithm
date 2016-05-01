#include <stdio.h>
int recursion(int a);
int main()
{
	printf("%d\n",recursion(5));
	return 0;
}
int recursion(int a){
	return a;
}
