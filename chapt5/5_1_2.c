/*************************************************************************
	> File Name: 5_1_2.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年02月04日 星期四 21时22分52秒
 ************************************************************************/

#include<stdio.h>

int Handle(int n, int m, int i, int j);

int main()
{
	int n, m, i, j;
	scanf("%d %d %d %d", &n, &m, &i, &j);
	printf("%d\n", Handle(n, m, i, j));
	return 0;
}

int Handle(int n, int m, int i, int j)
{
	int allOnes, left, right, mask, n_clear, m_shifted;
	allOnes = ~0;
	left = allOnes<<(j+1);
	right = ((1<<i)-1);
	mask = left | right;
	n_clear = n & mask;
	m_shifted = m << i;
	return n_clear|m_shifted;
}
