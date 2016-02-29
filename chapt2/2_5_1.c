/*************************************************************************
	> File Name: 2_5_1.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年01月31日 星期日 20时30分53秒
 ************************************************************************/

#include "List.h"
#include<stdlib.h>
#include<stdio.h>

void PrintList(List L);
List Sum(List L1, List L2);
List AddList(List L1, List L2);
int Length(List L);
List PadList(List L, int padding);

int main()
{
	int i;
	Position Pnum1 = NULL, Pnum2 = NULL;
	List L, num1, num2;
	L = MakeEmpty();
	num1 = MakeEmpty();
	num2 = MakeEmpty();
	Pnum1 = Header(num1);
	Pnum2 = Header(num2);
	for (i = 1; i < 8; i++)
		Insert(num1, i, Pnum1);
	for (i = 5; i < 8; i++)
		Insert(num2, i, Pnum2);
	PrintList(num1);
	PrintList(num2);
	L = Sum(num1, num2);
	PrintList(L);
	return 0;
}

void PrintList(List L)
{
	Position P = NULL;
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
	int length1, length2;
	Position P1 = NULL, P2 = NULL, P = NULL;
	List L;
	if (L1 == NULL && L2 == NULL)
		return NULL;
	length1 = Length(L1);
	length2 = Length(L2);
	if (length1 > length2)
		L2 = PadList(L2, length1-length2);
	else
		L1 = PadList(L1, length2-length1);
	L = AddList(L1, L2);
	return L;
}

int Length(List L)
{
	int length = 0;
	Position P = NULL;
	P = Header(L);
	while (P != NULL)
	{
		++length;
		P = P->Next;
	}
	return length;
}


List PadList(List L, int padding)
{
	int i;
	Position P = Header(L);
	for (i = 0; i > padding; i++)
		Insert(L, 0, P);
	return L;
}

List AddList(List L1, List L2)
{
	int flag = 0;
	List L;
	Position P = NULL, P1 = NULL, P2 = NULL;
	L = MakeEmpty();
	P = Header(L);
	P1 = First(L1);
	P2 = First(L2);
	while (P1 != NULL)
	{
		Insert(L, P1->Value+P2->Value, P);
		P = P->Next;
	}
	P = First(L);
	if (P->Value >= 10 || (P->Value == 9 && P->Next->Value >= 10))
	{
		if (P->Next->Value >= 10)
		{
			flag = 1;

		}
		Insert(L, 1, L);
		P->Value -= 10;
	}
	while (P != NULL)
	{
		if ()
	}
}
