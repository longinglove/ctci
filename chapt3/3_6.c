/*************************************************************************
	> File Name: 3_6.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年02月02日 星期二 15时13分50秒
 ************************************************************************/

#include "Stack.h"
#include<stdio.h>

void PrintStack(Stack S);
void SortStack(Stack S, Stack temp);

int main()
{
	Stack S, temp;
	S = MakeEmpty();
	temp = MakeEmpty();
	Push(S, 1);
	Push(S, 3);
	Push(S, 5);
	Push(S, 2);
	SortStack(S, temp);
	PrintStack(temp);
	return 0;
}

void PrintStack(Stack S)
{
	if (S == NULL)
		return;
	while (!IsEmpty(S))
	{
		printf("%d ", Top(S));
		Pop(S);
	}
	printf("\n");
}


void SortStack(Stack S, Stack temp)
{
	int Mid;
	if (IsEmpty(S))
		return;
	while (!IsEmpty(S))
	{
		Mid = Top(S);
		Pop(S);
		while (!IsEmpty(temp) && Top(temp) > Mid)
		{
			Push(S, Top(temp));
			Pop(temp);
		}
		Push(temp, Mid);
	}
}
