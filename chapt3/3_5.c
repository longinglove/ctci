/*************************************************************************
	> File Name: 3_5.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年02月02日 星期二 13时58分10秒
 ************************************************************************/

#include "Stack.h"
#include "MyQueue.h"
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	Stack sour, des;
	sour = MakeEmpty();
	des = MakeEmpty();
	for (i = 1; i < 10; i++)
		Add(sour, des, i);
	printf("%d\n", Peek(sour, des));
	return 0;
}
