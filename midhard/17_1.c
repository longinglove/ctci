/*************************************************************************
	> File Name: 17_1.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年03月30日 星期三 11时18分18秒
 ************************************************************************/

#include<stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("%d %d\n", a, b);
	return 0;
}
