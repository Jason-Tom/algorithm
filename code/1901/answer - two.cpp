#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main(void)
{
	freopen("mytest.txt", "r", stdin);
	char a[1024],b[1024],x[1024],y[1024];
	int cx=0,cy=0;
	cin>>a;
	cin>>b;
	cin>>x;
	cin>>y;
	cx=strlen(a);
	cy=strlen(b);
	// cout<<a<<endl;
	// cout<<b<<endl;
	// cout<<x<<endl;
	// cout<<y<<endl;
	cout<<cx<<endl;
	cout<<cy<<endl;
	

	return 0;
}
