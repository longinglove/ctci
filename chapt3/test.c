/*************************************************************************
	> File Name: test.c
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年02月01日 星期一 22时33分05秒
 ************************************************************************/

#include "Stack.h"
#include<stdio.h>
#include<stdlib.h>

int main()
{
	Stack S;
	S = MakeEmpty();
	Push(S, 2);
	Push(S, 1);
	Push(S, 3);
	while (!IsEmpty(S))
	{
		printf("%d ", Top(S));
		printf("%d", Min(S));
		printf("\n");
		Pop(S);
	}

	return 0;
}
