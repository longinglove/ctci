/*************************************************************************
	> File Name: 17_3.c
	> Author: duqinglong
	> Mail: du_303412@163.com 
	> Created Time: 2016年03月30日 星期三 11时22分36秒
 ************************************************************************/

#include<stdio.h>

int countZero(int);

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", countZero(n));
	return 0;
}

int countZero(int n)
{
	int num = 0, i;
	if (n < 0)
		return -1;
	for (i = 5; n / i > 0; i *= 5)
		num += n/i;
	return num;
}
