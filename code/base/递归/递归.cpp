#include <stdio.h>

void prn(int num) {
    printf("%d\n", num);
    if (num > 0) prn(--num);
}

int main(void)
{
    prn(3);
    getchar();
    return 0;
}