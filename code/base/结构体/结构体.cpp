#include <stdio.h>
#include <string.h>
#define max(A,B) (A>=B?A:B)
#define MAXN 100

struct GOOD {
    int weight, value;
} good[MAXN];

int main()
{
    memset(good, 0, sizeof(good));
    for (int i = 0; i < 100; ++i)
    {
        printf("weight:%d value:%d\n", good[i].weight, good[i].value );
    }
}
