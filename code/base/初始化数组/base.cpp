#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main() {
    int balance[12];
    // �������飬�������ͣ�ͨ�����ַ�������Ҫ�������鳤��
    // scanf("%s",balance);
    // double balance[] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    // int a = 0, b = 0;

    // a = strlen(balance);
    // cout << a << endl;
    for (int a = 0; a < 12; a++)
    {
        balance[a] = 0;
    }
    // ��ʼ�����飬Ҫע���������ͣ�����Խ�����⣬�����ַ������ȳ�ʼ������
    for (int a = 0; a < 12; a++)
    {
        cout << balance[a] << endl;
    }
    return 0;
}
