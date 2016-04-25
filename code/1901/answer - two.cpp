#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main(void)
{
	freopen("mytest.txt", "r", stdin);
	char a[1024], b[1024], c[1024][1024];
	int cx = 0, cy = 0;
	cin >> a;
	cin >> b;
	cx = strlen(a);
	cy = strlen(b);
	for (int i = 0; i < cy; ++i)
	{
		for (int i = 0; i < cx; ++i)
		{
			cout << "x ";
		}
		cout << "x" << endl;
	}


	return 0;
}
