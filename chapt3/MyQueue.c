/*************************************************************************
	> File Name: MyQueue.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年02月02日 星期二 14时17分04秒
 ************************************************************************/

#include "Stack.h"
#include "MyQueue.h"
#include<stdio.h>
#include<stdlib.h>

void Add(Stack sour, Stack des, ElementType X)
{
	Push(sour, X);
}

void ShiftStacks(Stack sour, Stack des)
{
	if (sour == NULL)
		return;
	while (!IsEmpty(sour))
	{
		Push(des, Top(sour));
		Pop(sour);
	}
}

ElementType Peek(Stack sour, Stack des)
{
	ShiftStacks(sour, des);
	return Top(des);
}

void Qpop(Stack sour, Stack des)
{
	ShiftStacks(sour, des);
	Pop(des);
}
