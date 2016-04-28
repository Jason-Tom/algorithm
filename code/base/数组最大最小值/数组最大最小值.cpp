#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
#define open if(0)
int x = 0, T = 0;
int main(void) {
    open
    freopen("test.txt", "r", stdin);
    int a[4] = {2, 4, 1, 3}, mymax = 0, mymin = 0;
    mymin = a[1];
    mymax = a[1];
    for (int i = 0; i < 4; ++i)
    {
        if (mymax < a[i])
        {
            mymax = a[i];
        }

        if (mymin > a[i])
        {
            mymin = a[i];
        }
    }
    printf("最大值：%d 最小值：%d\n", mymax, mymin );
    return 0;
}
