#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
// ��׼c++�����⵼�룬�������ͳһʹ��c++�ģ���Ϊc��ʱ���ܵ���c++�ķ�������
int main(void)
{
   string a;
   // string��c++�������ķ�����Ҫ������c++��Ӧ���
   cout << "cin����c++����"<<endl;
   cin >> a;
   cout << "c++������c++����aΪ��" << a << endl;
   printf("c�������c++����aΪ��\n\n");

   string b;
   // string��c++�������ķ�����Ҫ������c++��Ӧ���
   cout << "scanfΪc++�ַ�����������"<<endl;
   // scanf("%s",&b);
   // c++�ַ�����Ҫ��
   cin >> b;
   cout << "c++������c++����bΪ��" << b << endl;
   printf("c�������c++����bΪ��\n\n");

   char c[30];
   printf("c��������c�ַ�����:\n", c);
   scanf("%s", c);
   cout << "cout���c�ַ�������"<<c<<endl;
   printf("printf�������c:%s\n\n", c);

   char d[30];
   printf("c++����d�ַ�����:%s\n", d);
   cin>>d;
   cout << "cout���d�ַ�������"<<d<<endl;
   printf("printf�������d:%s\n\n", d);
   return 0;
}
