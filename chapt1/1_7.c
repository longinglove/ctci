/*************************************************************************
	> File Name: 1_7.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年01月30日 星期六 10时20分26秒
 ************************************************************************/

#include<stdio.h>

int A[10][10];

int main()
{
	int line, col, i, j, row[10] = {0}, column[10] = {0};
	scanf("%d %d", &line, &col);
	for (i = 0; i < line; i++)
		for (j = 0; j < col; j++)
			scanf("%d", &A[i][j]);
	for (i = 0; i < line; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (A[i][j] == 0)
			{
				row[i] = 1;
				column[j] = 1;
			}
		}
	}
		
	for (i = 0; i < line; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (row[i] || column[j])
				A[i][j] = 0;
		}
	}
	for (i = 0; i < line; i++)
	{
		for (j = 0; j < col; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}
	return 0;
}
