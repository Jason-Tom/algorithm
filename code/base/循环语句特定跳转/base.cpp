#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int x = 0, T = 0;
int main(void) {

outside: for (int i = 0; i < 3; ++i)
    {
        cout << i << endl;
        for (int j = 0; j < 3; ++j)
        {
            cout << j << endl;
                goto outside;
        }
        cout << endl;
    }
    return 0;
}
