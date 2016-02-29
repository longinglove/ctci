/*************************************************************************
	> File Name: List.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年01月30日 星期六 14时11分01秒
 ************************************************************************/

#include "List.h"
#include<stdio.h>
#include<stdlib.h>

List MakeEmpty()
{
	List L;
	L = malloc(sizeof(struct Node));
	if (L == NULL)
		printf("Out of space");
	L->Value = 0;
	L->Next = NULL;
	return L;
}

int IsEmpty(List L)
{
	return L->Next == NULL;
}

int IsLast(List L, Position P)
{
	return P->Next == NULL;
}

Position Find(List L, ElementType X)
{
	Position P;
	P = L->Next;
	while (P->Value != X && P != NULL)
		P = P->Next;
	return P;
}

void Delete(List L, ElementType X)
{
	Position P, temp;
	P = FindPrevious(L, X);
	if (!IsLast(L, P))
	{
		temp = P->Next;
		P->Next = temp->Next;
		free(temp);
	}
}

Position FindPrevious(List L, ElementType X)
{
	Position P;
	P = L;
	while (P->Next != NULL && P->Next->Value != X)
		P = P->Next;
	return P;
}

void Insert(List L, ElementType X, Position P)
{
	Position temp;
	temp = malloc(sizeof(struct Node));
	if (temp == NULL)
		printf("Out of space");
	temp->Value = X;
	temp->Next = P->Next;
	P->Next = temp;
}

void DeleteList(List L)
{
	Position P, temp;
	P = L->Next;
	L->Next = NULL;
	while (P != NULL)
	{
		temp = P->Next;
		free(P);
		P = temp;
	}
}

Position Header(List L)
{
	return L;
}

Position First(List L)
{
	return L->Next;
}

Position Advance(Position P)
{
	return P->Next;
}

ElementType Retrieve(Position P)
{
	return P->Value;
}
