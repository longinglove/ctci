/*************************************************************************
	> File Name: Stack.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年02月01日 星期一 21时51分52秒
 ************************************************************************/

#include "Stack.h"
#include<stdio.h>
#include<stdlib.h>

int IsEmpty(Stack S)
{
	return S->Next == NULL;
}

Stack MakeEmpty()
{
	Stack S;
	S = malloc(sizeof(struct Node));
	if (S == NULL)
		printf("out of space");
	S->Next = NULL;
	return S;
}

void Push(Stack S, ElementType X)
{
	Position P;
	P = malloc(sizeof(struct Node));
	if (P == NULL)
		printf("out of space");
	P->Next = S->Next;
	P->Value = X;
	if (P->Next == NULL)
		P->Min = P->Value;
	else
	{
		if (S->Next->Min > P->Value)
			P->Min = P->Value;
		else
			P->Min = S->Next->Min;
	}
	S->Next = P;
}

void Pop(Stack S)
{
	Position P = NULL;
	if (IsEmpty(S))
	{
		printf("S is empty(Pop)");
		return;
	}
	P = S->Next;
	S->Next = P->Next;
	free(P);
}

ElementType Top(Stack S)
{
	if (IsEmpty(S))
	{
		printf("S is empty(Top)");
		return 0;
	}
	return S->Next->Value;
}

void DisposeStack(Stack S)
{
	while (!IsEmpty(S))
		Pop(S);
	free(S);
}

ElementType Min(Stack S)
{
	if (!IsEmpty(S))
		return S->Next->Min;
	else
		return 0;
}
