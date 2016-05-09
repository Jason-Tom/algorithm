#include <iostream>
#include <stdio.h>
using namespace std;

void swap();
int d[1] = {2};
int main ()
{

    swap();
    printf("d:%d\n", d[0] );

    return 0;
}
void swap()
{
    d[1] = {1};
    return;
}