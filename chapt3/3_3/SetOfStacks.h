/*************************************************************************
	> File Name: SetOfStacks.h
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年02月01日 星期一 22时56分18秒
 ************************************************************************/

#ifndef _SETOFSTACKS_H_
#define _SETOFSTACKS_H_

typedef int ElementType;
typedef struct Node* Position;
typedef Position Stack;

struct Node
{
	ElementType Value;
	Position Next;
	int Index;
};

int IsEmpty(Stack S);
Stack MakeEmpty(int index);
void Push(Stack S, ElementType X);
void Pop(Stack S);
ElementType Top(Stack S);
void DisposeStack(Stack S);

#endif
