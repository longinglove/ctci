/*************************************************************************
	> File Name: 2_3.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年01月30日 星期六 21时52分59秒
 ************************************************************************/

#include "List.h"
#include<stdio.h>
#include<stdlib.h>

void PrintList(List L);
void DeleteNode(List L, Position P);

int main()
{
	int i;
	List L;
	Position P;
	L = MakeEmpty();
	P = Header(L);
	for (i = 0; i < 20; i++)
		Insert(L, i, P);
	PrintList(L);
	P = P->Next->Next;
	DeleteNode(L, P);
	PrintList(L);
	return 0;
}

void PrintList(List L)
{
	Position P;
	if (IsEmpty(L))
		return;
	P = First(L);
	while (P != NULL)
	{
		printf("%d ", P->Value);
		P = P->Next;
	}
	printf("\n");
}

void DeleteNode(List L, Position P)
{
	Position temp;
	if (P == NULL || IsLast(L, P))
		return;
	temp = P->Next;
	P->Value = temp->Value;
	P->Next = temp->Next;
}
