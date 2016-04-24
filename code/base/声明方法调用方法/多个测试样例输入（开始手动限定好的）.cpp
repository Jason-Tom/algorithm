#include<stdio.h>
#include<string.h>
int x = 0, T = 0;
int max(int num1, int num2);
// 方法定义的位置要放在主函数之前，和变量一样，要先定义后使用，函数总体来讲
// 声明方法，返回数值类型+函数名+输入数据类型河边变量+分号
int main(void) {
	int a = 100;
	int b = 200;
	int ret;
	ret = max(a, b);
	// 函数调用，直接调用，如果有熟知的当作变量输入然后操作
	printf("%d\n", ret);
	return 0;
}

int max(int num1, int num2)
{
	// 局部变量声明
	int result;

	if (num1 > num2)
		result = num1;
	else
		result = num2;

	return result;
	// 返回类型和函数类型对应，可以返回局部变量
}