#include<stdio.h>
#include<string.h>
int x = 0, T = 0;
int max(int num1, int num2);
// ���������λ��Ҫ����������֮ǰ���ͱ���һ����Ҫ�ȶ����ʹ�ã�������������
// ����������������ֵ����+������+�����������ͺӱ߱���+�ֺ�
int main(void) {
	int a = 100;
	int b = 200;
	int ret;
	ret = max(a, b);
	// �������ã�ֱ�ӵ��ã��������֪�ĵ�����������Ȼ�����
	printf("%d\n", ret);
	return 0;
}

int max(int num1, int num2)
{
	// �ֲ���������
	int result;

	if (num1 > num2)
		result = num1;
	else
		result = num2;

	return result;
	// �������ͺͺ������Ͷ�Ӧ�����Է��ؾֲ�����
}