/*************************************************************************
	> File Name: 2_7.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年02月01日 星期一 00时05分37秒
 ************************************************************************/

#include "List.h"
#include<stdio.h>

void PrintList(List L);
List Reverse(List L);
List NewReverse(List L);
int IsHw(List L1, List L2);

int main()
{
	int i;
	Position P = NULL, Pn = NULL;
	List L, NewList;
	L = MakeEmpty();
	NewList = MakeEmpty();
	P = Header(L);
	Pn = Header(NewList);
	for (i = 1; i < 5; i++)
		Insert(L, i, P);
	for (i = 1; i < 5; i++)
		Insert(NewList, i, NewList);
	PrintList(L);
	NewReverse(NewList);
	PrintList(NewList);
	if (IsHw(L, NewList))
		printf("Yes\n");
	else
		printf("No\n");
	PrintList(NewList);
	return 0;
}

void PrintList(List L)
{
	Position P;
	if (L == NULL)
		return;
	P = First(L);
	while (P != NULL)
	{
		printf("%d ", P->Value);
		P = P->Next;
	}
	printf("\n");
}

List Reverse(List L)
{
	Position Pl = NULL, Pn = NULL;
	List NList;
	if (L == NULL)
		return NULL;
	NList = MakeEmpty();
	Pl = First(L);
	Pn = Header(NList);
	while (Pl != NULL)
	{
		Insert(NList, Pl->Value, Pn);
		Pl = Pl->Next;
	}
	return NList;
}


int IsHw(List L1, List L2)
{
	Position P1 = NULL, P2 = NULL;
	P1 = First(L1);
	P2 = First(L2);
	while (P1 != NULL && P2 != NULL && P1->Value == P2->Value)
	{
		P1 = P1->Next;
		P2 = P2->Next;
	}
	if (P1 == NULL && P2 == NULL)
		return 1;
	return 0;
}


List NewReverse(List L)
{
	Position P, temp;
	if (L == NULL)
		return NULL;
	temp = First(L);
	while (!IsLast(L, temp))
	{
		P = temp->Next;
		temp->Next = P->Next;
		P->Next = L->Next;
		L->Next = P;
	}
	return L;
}
