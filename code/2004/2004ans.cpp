#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
#define myopen if(1)
using namespace std;
int main()
{
	myopen
	freopen("test.txt", "r", stdin);
	int n = 0;
	double ans = 0;
	double temp[201024];
	memset(temp, 0, sizeof(temp));
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
		scanf("%lf", &temp[i]);
	sort(temp + 1, temp + 1 + n);
	ans = temp[2] - temp[1];
	for (int i = 1; i < n; ++i)
	{
		double x = 0;
		x = temp[i + 1] - temp[i];
		if (ans < x)
			ans = x;
	}
	printf("%0.1lf\n", ans );
}