/*************************************************************************
	> File Name: Stack.h
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年02月01日 星期一 21时45分45秒
 ************************************************************************/
#ifndef _STACK_H_
#define _STACK_H_

typedef int ElementType;
typedef struct Node* Position;
typedef Position Stack;
struct Node
{
	ElementType Value;
	Position Next;
	ElementType Min;
};

int IsEmpty(Stack S);
Stack MakeEmpty();
void Push(Stack S, ElementType X);
void Pop(Stack S);
ElementType Top(Stack S);
void DisposeStack(Stack S);
ElementType Min(Stack S);

#endif

