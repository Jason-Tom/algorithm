#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#define mems(a) memset(a,0,sizeof(a))
#define myopen if(1)
#define NUM 1024
using namespace std;
int mynum[NUM][NUM];
int temp[NUM][NUM];
int main() {
    int a[10];
    mems(temp);
    // mems(a);
    // for (int i = 1; i <= 10; ++i)
    // {
    //     a[i] = 10 - i;
    // }
    // sort(a+2, a + 10);
    // for (int i = 1; i <= 10; ++i)
    // {
    //     printf("%d ", a[i] );
    // }
    for (int i = 1; i <= 5; ++i)
    {
        temp[5][i] = 5 - i;
    }
    sort(temp[5]+1,temp[5]+6);
    for (int i = 1; i <= 5; ++i)
    {
        printf("%d\n", temp[5][i]);
    }
}