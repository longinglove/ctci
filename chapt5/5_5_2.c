/*************************************************************************
	> File Name: 5_5_2.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年02月04日 星期四 18时18分35秒
 ************************************************************************/

#include<stdio.h>

int Handle(int A, int B);
int Handle2(int A, int B);

int main()
{
	int A, B;
	scanf("%d %d", &A, &B);
	printf("%d\n", Handle2(A, B));
	return 0;
}

int Handle(int A, int B)
{
	int temp, count = 0;
	temp = A^B;
	while (temp != 0)
	{
		count += temp & 1;
		temp >>= 1;
	}
	return count;
}


int Handle2(int A, int B)
{
	int temp, count = 0;
	for (temp = A^B; temp != 0; temp &= temp-1)
		count++;
	return count;
}
