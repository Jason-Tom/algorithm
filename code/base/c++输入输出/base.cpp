#include<stdio.h>
#include <iostream>
using namespace std;
// c++的基本使用，要调用，基本的库函数iostream，额还是用命名空间
int main( )
{
    char str[] = "Hello C++";

    cout << "Value of str is : " << str << "Value of str is : " << endl;
    cout << "Value of str is : " << str << "Value of str is : " << endl;
    cout << "Value of str is : " << str << endl<< "Value of str is : " ;
    //<<指向cout表示要输出的数据，输出内容用两个尖括号括起表示要输出的内容组合，endl表示换行
}
