#include <stdio.h>
#include <string.h>
#include <algorithm>
#define _open if(1)
#define mem(a) memset(a,0,sizeof(a))
#define N 1024
using namespace std;
bool _max(int a, int b) {
	return a > b;
}
int wor [N], mac[N];
int main() {
	_open
	freopen("test.txt", "r", stdin);
	int t = 0, n = 0, m = 0, cas = 1;
	scanf("%d", &t);
	while (t--) {
		mem(wor); mem(mac);
		scanf("%d%d", &n, &m);
		for (int i = 1; i <= n; ++i)
			scanf("%d", &wor[i]);
		sort(wor + 1, wor + 1 + n, _max);
		for (int i = 1; i <= n; ++i) {
			int temp = mac[1], ind = 1;
			for (int j = 1; j <= m; ++j)
				if (temp > mac[j])
				{
					temp = mac[j];
					ind = j;
				}
			mac[ind] += wor[i];
		}
		for (int i = 1; i <= n; ++i)
			if (mac[m] < mac[i])
				mac[m] = mac[i];
		printf("Case %d: %d\n", cas++, mac[m] );
	}
}