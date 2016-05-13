#include<iostream>
using namespace std;
int zuhe(int m, int n, int r)
{
	int p = m, q = n, t = 1, s = 1;
	for (int i = 0; i < p; i++)
	{
		t *= n;
		n--;
		s *= m;
		m--;
	}
	if (q = p * 2 && r == 1) return (t / s) / 2;
	return t / s;
}

int jihe(int m, int n)
{
	int count = 0;
	if (m == n || m == 0) return 1;
	if (n == 1) return 1;
	for (int i = (m - n + 1); i >= (m - i + (n - 2) / (n - 1)); i--)
	{
		count += zuhe(i, m, n - 1) * jihe(m - i, n - 1);
	}
	return count;
}
int main()
{
	int m, n;
	cout << "请输入元素的个数和集合的个数:";
	cin >> m >> n;
	cout << jihe(m, n) << endl;
	return 0;
}