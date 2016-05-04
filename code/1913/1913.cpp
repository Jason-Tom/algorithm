#include <stdio.h>
#include <math.h>

int tile = 1; //记录骨牌的型号
int board[20][20] = {0}; //存储棋盘被覆盖的情况

void ChessBoard(int tr, int tc, int dr, int dc, int size)
{	//tr和tc是棋盘左上角的下标,dr和dc是特殊方格的下标,size是棋盘的大小
	int t = 0;
	int s;

	if (size == 1)return;

	t = tile++;
	s = size / 2; //划分棋盘

	//覆盖左上角棋盘
	if (dr < tr + s && dc < tc + s) //特殊方格在棋盘的左上角
		ChessBoard(tr, tc, dr, dc, s);
	else
	{
		board[tr + s - 1][tc + s - 1] = t;
		ChessBoard(tr, tc, tr + s - 1, tc + s - 1, s);
	}
	//覆盖右上角棋盘
	if (dr < tr + s && dc >= tc + s) //特殊方格在棋盘的右上角
		ChessBoard(tr, tc + s, dr, dc, s);
	else
	{
		board[tr + s - 1][tc + s] = t;
		ChessBoard(tr, tc + s, tr + s - 1, tc + s, s);
	}
	//覆盖左下角棋盘
	if (dr >= tr + s && dc < tc + s)	//特殊方格在棋盘的左下角
		ChessBoard(tr + s, tc, dr, dc, s);
	else
	{
		board[tr + s][tc + s - 1] = t;
		ChessBoard(tr + s, tc, tr + s, tc + s - 1, s);
	}
	//覆盖右下角棋盘
	if (dr >= tr + s && dc >= tc + s) //特殊方格在棋盘的右下角
		ChessBoard(tr + s, tc + s, dr, dc, s);
	else
	{
		board[tr + s][tc + s] = t;
		ChessBoard(tr + s, tc + s, tr + s, tc + s, s);
	}
}
int main()
{
	int k, x, y;
	printf("请输入棋盘的规模K：");
	scanf("%d", &k);
	printf("请输入特殊方格的下标x,y：");
	scanf("%d %d", &x, &y);
	ChessBoard(0, 0, x, y, pow(2, k));
	for (int i = 0; i < pow(2, k); i++)
	{
		for (int j = 0; j < pow(2, k); j++)
		{
			printf("%-4d", board[i][j]);
		}
		printf("\n");
	}
	return 0;
}