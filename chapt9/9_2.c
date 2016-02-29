/*************************************************************************
	> File Name: 9_2.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年02月06日 星期六 14时18分16秒
 ************************************************************************/

#include<stdio.h>

int a[10][10];

int GetPath(int x, int y);
int IsFree(int a);

int main()
{
	int i, j;
	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
			a[i][j] = 0;
	return 0;
}

int IsFree(int a)
{
	return a==0 ? 1 : 0;
}

int GetPath(int x, int y)
{
	int success = 0;
	if (x == 0 && y == 0)
		return 1;
	if (x >= 1 && IsFree(a[x-1][y]))
		GetPath(x-1, y);
	if (!success && y >= 1 && IsFree(a[x][y-1]))
		GetPath(x, y-1);
	return success
}
