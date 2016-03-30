/*************************************************************************
	> File Name: 17_4.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年03月30日 星期三 11时28分46秒
 ************************************************************************/

#include<stdio.h>

int comp(int, int);
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d\n", comp(a, b));
	return 0;
}

int comp(int a, int b)
{
	return ((a+b)+abs(a-b))/2;
}
