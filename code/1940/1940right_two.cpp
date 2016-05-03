#include <stdio.h>
#include <iostream>
#include <string.h>
#include <algorithm>
#define mymemset(a) memset(a,0,sizeof(a))
#define mynum 1024
using namespace std;
int node[mynum][mynum],repeat[mynum], pre[mynum], post[mynum], data = 0, len[mynum];
void recursion(int d)
{
	int j = 0;
	pre[d] = ++data;
	// 每次进来都要标记说明该节点已经走过
	repeat[d] = 1;
	for (j = 0; j < len[d]; j++) {
		int to = node[d][j];
		if (repeat[to] == 0)
			recursion(to);
	}
	post[d] = ++data;
}
int main()
{
	int n = 0, e = 0, a = 0, b = 0;
	scanf("%d%d", &n, &e);
	mymemset(node);
	mymemset(repeat);
	mymemset(pre);
	mymemset(post);
	mymemset(len);
	while (e--) {
		scanf("%d%d", &a, &b);
		node[a][len[a]] = b;
		len[a]++;
	}
	for (int i = 1; i <= n; ++i)
		sort(node[i], node[i] + len[i]);
	recursion(1);
	for (int i = 1; i <= n; ++i)
		printf("%d ", pre[i]);
	printf("\n");
	for (int i = 1; i <= n; ++i)
		printf("%d ", post[i]);
	return 0;
}
