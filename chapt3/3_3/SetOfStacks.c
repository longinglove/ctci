/*************************************************************************
	> File Name: SetOfStacks.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年02月01日 星期一 23时22分32秒
 ************************************************************************/

#include"SetOfStacks.h"
#include<stdio.h>
#include<stdlib.h>

int IsEmpty(Stack S)
{
	return S->Next == NULL;
}

Stack MakeEmpty(int index)
{
	Stack S;
	S = malloc(sizeof(struct Node));
	if (S == NULL)
	{
		printf("out of space");
		return NULL;
	}
	S->Next = NULL;
	S->Index = index;
	return S;
}

void Push(Stack S)
