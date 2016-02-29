/*************************************************************************
	> File Name: test.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年01月31日 星期日 09时40分24秒
 ************************************************************************/

#include "List.h"
#include<stdio.h>

void PrintList(List L);

int main()
{
	int i;
	Position P;
	List L;
	L = MakeEmpty();
	P = Header(L);
	for (i = 0; i < 20; i++)
		Insert(L, i, P);
	PrintList(L);
	Delete(L, 0);
	PrintList(L);
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
