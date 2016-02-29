/*************************************************************************
	> File Name: List.h
	> Author: longing
	> Mail: du_303412@163.com 
	> Created Time: 2016年01月30日 星期六 14时02分52秒
 ************************************************************************/
#ifndef _LIST_H_
#define _LIST_H_

typedef int ElementType;
typedef struct Node* Position;
typedef Position List;

struct Node
{
	ElementType Value;
	Position Next;
};

List MakeEmpty();
int IsEmpty(List L);
int IsLast(List L, Position P);
Position Find(List L, ElementType X);
void Delete(List L, ElementType X);
Position FindPrevious(List L, ElementType X);
void Insert(List L, ElementType X, Position P);
void DeleteList(List L);
Position Header(List L);
Position First(List L);
Position Advance(Position P);
ElementType Retrieve(Position P);

#endif

