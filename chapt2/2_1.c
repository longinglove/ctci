/*************************************************************************
	> File Name: test.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年01月30日 星期六 18时27分20秒
 ************************************************************************/

#include<stdlib.h>
#include<stdio.h>
#include "List.h"

void PrintList(List L);
void DeleteDup(List L);
void NewDeleteDup(List L);

int main()
{
	int i;
	List L;
	Position P, temp;
	L = MakeEmpty();
	P = L;
	Insert(L, 3, P);
	Insert(L, 2, P);
	Insert(L, 7, P);
	Insert(L, 3, P);
	Insert(L, 8, P);
	Insert(L, 9, P);
	Insert(L, 7, P);
	Insert(L, 1, P);
	PrintList(L);
	NewDeleteDup(L);
	PrintList(L);
	return 0;
}

void PrintList(List L)
{
	Position P;
	P = L->Next;
	while (P != NULL)
	{
		printf("%d ", P->Value);
		P = P->Next;
	}
	printf("\n");
}

void DeleteDup(List L)
{
	int a[10000] = {0};
	Position P;
	P = L->Next;
	while (P != NULL)
	{
		++a[P->Value];
		if (a[P->Value] > 1)
			Delete(L, P->Value);
		P = P->Next;
	}
}

void NewDeleteDup(List L)
{
	Position P, temp;
	for (P = L->Next; !IsLast(L, P); P = P->Next)
	{
		for (temp = P->Next; temp != NULL; temp = temp->Next)
		{
			if (P->Value == temp->Value)
				Delete(L, temp->Value);
		}
	}
}
