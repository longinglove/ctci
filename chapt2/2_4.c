/*************************************************************************
	> File Name: 2_4.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年01月30日 星期六 22时46分45秒
 ************************************************************************/

#include "List.h"
#include<stdio.h>
#include<stdlib.h>

void PrintList(List L);
void Split(List L, int num);
List NewSplit(List L, int num);

int main()
{
	int i;
	Position P;
	List L, result;
	L = MakeEmpty();
	P = Header(L);
	for (i = 0; i < 20; i++)
		Insert(L, i, P);
	Insert(L, 3, P);
	PrintList(L);
	result = NewSplit(L, 10);
	PrintList(result);
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

void Split(List L, int num)
{
	Position FirstP, FollowP;
	int temp;
	for (FollowP = First(L); !IsLast(L, FollowP); FollowP = FollowP->Next)
	{
		if (FollowP->Value <= num)
			continue;
		for (FirstP = FollowP->Next; FirstP != NULL; FirstP = FirstP->Next)
		{
			if (FirstP->Value > num)
				continue;
			temp = FirstP->Value;
			FirstP->Value = FollowP->Value;
			FollowP->Value = temp;
		}
	}
}

List NewSplit(List L, int num)
{
	Position Plstart, Plend, Phstart, Phend, P;
	List low, high;
	low = MakeEmpty();
	high = MakeEmpty();
	P = First(L);
	Plstart = Plend = Phstart = Phend = NULL;
	while (P != NULL)
	{
		if (P->Value > num)
		{
			if (Phstart == NULL)
			{
				Insert(high, P->Value, high);
				Phstart = First(high);
				Phend = First(high);
			}
			else
			{
				Insert(high, P->Value, Phend);
				Phend = Phend->Next;
			}
		}
		else
		{
			if (Plstart == NULL)
			{
				Insert(low, P->Value, low);
				Plstart = First(low);
				Plend = First(low);
			}
			else
			{
				Insert(low, P->Value, Plend);
				Plend = Plend->Next;
			}
		}
		P = P->Next;
	}
	Plend->Next = Phstart;
	return low;
}
