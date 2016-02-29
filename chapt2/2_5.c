/*************************************************************************
	> File Name: 2_5.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年01月31日 星期日 11时24分09秒
 ************************************************************************/

#include "List.h"
#include<stdio.h>
#include<stdlib.h>

void PrintList(List L);
List Sum(List L1, List L2);

int main()
{
	int i;
	Position P = NULL, P1 = NULL, P2 = NULL;
	List num1, num2, sum;
	num1 = MakeEmpty();
	num2 = MakeEmpty();
	P1 = Header(num1);
	P2 = Header(num2);
	for (i = 1; i < 5; i++)
		Insert(num1, i, P1);
	for (i = 5; i < 10; i++)
		Insert(num2, i, P2);
	PrintList(num1);
	PrintList(num2);
	sum = Sum(num1, num2);
	P = First(sum);
	while (!IsLast(sum, P))
	{
		if (P->Value >= 10)
		{
			P->Value -= 10;
			++P->Next->Value;
		}
		P = P->Next;
	}
	if (P->Value >= 10)
		Insert(sum, 1, P);
	PrintList(sum);
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

List Sum(List L1, List L2)
{
	Position P, Psum1, Psum2;
	List L;
	P = Psum1 = Psum2 = NULL;
	L = MakeEmpty();
	P = Header(L);
	Psum1 = First(L1);
	Psum2 = First(L2);
	while (Psum1 != NULL && Psum2 != NULL)
	{
		Insert(L, Psum1->Value + Psum2->Value, P);
		Psum1 = Psum1->Next;
		Psum2 = Psum2->Next;
		P = P->Next;
	}
	if (Psum1 == NULL && Psum2 != NULL)
	{
		while (Psum2 != NULL)
		{
			Insert(L, Psum2->Value, P);
			Psum2 = Psum2->Next;
			P = P->Next;
		}
	}
	else if (Psum1 != NULL && Psum2 == NULL)
	{
		while (Psum1 != NULL)
		{
			Insert(L, Psum1->Value, P);
			Psum1 = Psum1->Next;
			P = P->Next;
		}
	}
	return L;
}
