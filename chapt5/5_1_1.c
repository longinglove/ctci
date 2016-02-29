/*************************************************************************
	> File Name: 5_1_1.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年02月04日 星期四 18时47分12秒
 ************************************************************************/

#include<stdio.h>

int Handle(int N, int M, int i, int j);

int main()
{
	int N, M, i, j, result;
	scanf("%d %d %d %d", &N, &M, &i, &j);
	result = Handle(N, M, i, j);
	printf("%d\n", result);
	return 0;
}


int Handle(int N, int M, int i, int j)
{
	int mask, temp;
	mask = (((1<<(j+1))-1) & (~((1<<i)-1)));
	temp = (~mask) & N;
	M <<= i;
	return temp|M;
}
