/*************************************************************************
	> File Name: 9_1.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年02月06日 星期六 13时25分06秒
 ************************************************************************/

#include<stdio.h>

int a[37];
//int Handle(int num);
int Step(int num);

int main()
{
	int input, i;
	for (i = 0; i < 37; i++)
		a[i] = 0;
	scanf("%d", &input);
	printf("%d\n", Step(input));
	return 0;
}

/*
int Handle(int num)
{
	if (num == 0)
		return 1;
	else if (num < 0)
		return 0;
	else
		return Handle(num-1)+Handle(num-2)+Handle(num-3);
}
*/
int Step(int num)
{
	if (num < 0)
		return 0;
	else if (num == 0)
		return 1;
	else if (a[num] > 0)
		return a[num];
	else
		a[num] = Step(num-1)+Step(num-2)+Step(num-3);
	return a[num];
}
