#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main() {
    int balance[12];
    // 定义数组，数组类型（通常是字符串），要给定数组长度
    // scanf("%s",balance);
    // double balance[] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    // int a = 0, b = 0;

    // a = strlen(balance);
    // cout << a << endl;
    for (int a = 0; a < 12; a++)
    {
        balance[a] = 0;
    }
    // 初始化数组，要注意数据类型，数组越界问题，常用字符串长度初始化数组
    for (int a = 0; a < 12; a++)
    {
        cout << balance[a] << endl;
    }
    return 0;
}
