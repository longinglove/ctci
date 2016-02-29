/*************************************************************************
	> File Name: 5_3_2.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年02月04日 星期四 16时54分46秒
 ************************************************************************/

#include<stdio.h>

int GetNext(int num);
int GetPre(int num);

int main()
{
	int num, next, pre;
	scanf("%d", &num);
	next = GetNext(num);
	pre = GetPre(num);
	printf("%d %d\n", next, pre);
	return 0;
}

int GetNext(int num)
{
	int c = num;
	int c0 = 0;
	int c1 = 0;
	int p;
	while ((c & 1) == 0 && c != 0)
	{
		c0++;
		c >>= 1;
	}
	while ((c & 1) == 1)
	{
		c1++;
		c >>= 1;
	}
	if (c0 + c1 == 31 || c0 + c1 == 0)
		return -1;
	p = c0+c1;
	num |= (1<<p);
	num &= ~((1<<p)-1);
	num |= (1<<(c1-1))-1;
	return num;
}

int GetPre(int num)
{
	int c = num;
	int c0 = 0, c1 = 0, p, mask;
	while ((c & 1) == 1)
	{
		c1++;
		c >>= 1;
	}
	if (c == 0)
		return -1;
	while ((c & 1) == 0 && c != 0)
	{
		c0++;
		c >>= 1;
	}
	p = c0+c1;
	num &= ~((1<<(p+1))-1);
	mask = (1<<(c1+1))-1;
	num |= mask<<(c0-1);
	return num;
}
