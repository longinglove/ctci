/*************************************************************************
	> File Name: test.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年02月04日 星期四 20时28分56秒
 ************************************************************************/

#include<stdio.h>

int Handle(int num);

int main()
{
	int num, result;
	scanf("%d", &num);
	result = Handle(num);
	printf("%d\n", result);
	return 0;
}

int Handle(int num)
{
	int count = 0;
	while (num != 0)
	{
		num &= num-1;
		count++;
	}
	return count;
}
