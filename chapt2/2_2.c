/*************************************************************************
	> File Name: 2_2.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年01月30日 星期六 21时32分21秒
 ************************************************************************/

#include "List.h"
#include<stdio.h>
#include<stdlib.h>

void PrintList(List L);
Position FindK(List L, int k);

int main()
{
	int i;
	List L;
	Position P;
	L = MakeEmpty();
	for (i = 0; i < 20; i++)
		Insert(L, i, L);
	P = FindK(L, 5);
	PrintList(L);
	printf("%d\n", P->Value);
	return 0;
}

void PrintList(List L)
{
	Position P;
	P = First(L);
	while (P != NULL)
	{
		printf("%d ", P->Value);
		P = P->Next;
	}
	printf("\n");
}

Position FindK(List L, int k)
{
	Position First, Second;
	First = Header(L);
	Second = Header(L);
	while (k--)
	{
		if (First == NULL)
			return NULL;
		First = First->Next;
	}
	if (First == NULL)
		return NULL;
	while (First)
	{
		First = First->Next;
		Second = Second->Next;
	}
	return Second;
}
