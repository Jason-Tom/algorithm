#include <stdio.h>
#define myopen if(0)
int main() {
	// 任何一个方法名后面要有括号，包括主方法
	myopen
	freopen("test.txt", "r", stdin);	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		int input = 0, min_temp = 0, normal = 0, mymax = 0, result = 0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &input);
			normal += input;
			if (min_temp > normal)
				min_temp = normal;
			if (normal - min_temp > result)
				result = normal - min_temp;
		}
		printf("%d\n", result );
	}
}
