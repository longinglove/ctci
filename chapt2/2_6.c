/*************************************************************************
	> File Name: 2_6.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年01月31日 星期日 22时01分54秒
 ************************************************************************/

#include "List.h"
#include<stdio.h>

void PrintList(List L);
Position Loop(List L);

int main()
{
	int i;
	Position P = NULL, End = NULL, LoopP;
	List L;
	L = MakeEmpty();
	P = Header(L);
	Insert(L, 3, P);
	Insert(L, 5, P);
	Insert(L, 4, P);
	Insert(L, 3, P);
	Insert(L, 2, P);
	Insert(L, 1, P);
	PrintList(L);
	End = Header(L);
	while (!IsLast(L, End))
		End = End->Next;
	End->Next = Find(L, 3);
	LoopP = Loop(L);
	printf("%d\n", LoopP->Value);
	return 0;
}

void PrintList(List L)
{
	Position P = NULL;
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

Position Loop(List L)
{
	Position P1 = NULL, P2 = NULL;
	if (L == NULL)
		return 0;
	P1 = Header(L);
	P2 = Header(L);
	while (P1 != NULL && P1->Next != NULL)
	{
		P1 = P1->Next->Next;
		P2 = P2->Next;
		if (P1 == P2)
			break;
	}
	if (P1 == NULL || P1->Next == NULL)
		return NULL;
	P1 = Header(L);
	while (P1 != P2)
	{
		P1 = P1->Next;
		P2 = P2->Next;
	}
	return P1;
}
