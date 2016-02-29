/*************************************************************************
	> File Name: 5_3_1.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年02月04日 星期四 16时32分28秒
 ************************************************************************/

#include<stdio.h>

int BitCount(int num);

int main()
{
	int input, count, next, pre;
	scanf("%d", &input);
	count = BitCount(input);
	for (next = input+1; ; next++)
		if (count == BitCount(next))
			break;
	for (pre = input-1; pre > 0; pre--)
		if (count == BitCount(pre))
			break;
	printf("%d %d\n", next, pre);
	return 0;
}

int BitCount(int num)
{
	int count = 0;
	while (num)
	{
		count += num & 1;
		num >>= 1;
	}
	return count;
}
