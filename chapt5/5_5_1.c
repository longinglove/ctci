/*************************************************************************
	> File Name: 5_5_1.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年02月04日 星期四 18时12分13秒
 ************************************************************************/

#include<stdio.h>

int Handle(int A, int B);

int main()
{
	int A, B;
	scanf("%d %d", &A, &B);
	printf("%d\n", Handle(A, B));
	return 0;
}

int Handle(int A, int B)
{
	int count = 0;
	while (A != 0 || B != 0)
	{
		if ((A&1) != (B&1))
			count++;
		A >>= 1;
		B >>= 1;
	}
	return count;
}
