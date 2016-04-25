#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
// 标准c++函数库导入，并且最好统一使用c++的，因为c有时候不能调用c++的方法函数
int main(void)
{
   string a;
   // string是c++类库里面的方法，要到导入c++相应类库
   cout << "cin输入c++数组"<<endl;
   cin >> a;
   cout << "c++语句输出c++数组a为：" << a << endl;
   printf("c语言输出c++数组a为：\n\n");

   string b;
   // string是c++类库里面的方法，要到导入c++相应类库
   cout << "scanf为c++字符串输入数组"<<endl;
   // scanf("%s",&b);
   // c++字符串不要用
   cin >> b;
   cout << "c++语句输出c++数组b为：" << b << endl;
   printf("c语言输出c++数组b为：\n\n");

   char c[30];
   printf("c语言输入c字符数组:\n", c);
   scanf("%s", c);
   cout << "cout输出c字符串数组"<<c<<endl;
   printf("printf输出数组c:%s\n\n", c);

   char d[30];
   printf("c++输入d字符数组:%s\n", d);
   cin>>d;
   cout << "cout输出d字符串数组"<<d<<endl;
   printf("printf输出数组d:%s\n\n", d);
   return 0;
}
