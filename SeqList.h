#pragma once
#include"Graph.h"
#include<iostream>

class SeqList {
protected:
	sever list[30];
	int size;
public:
	void ListInitiate(SeqList* L);
	int ListLength(SeqList L);
	int ListInsert(SeqList* L, int i, sever x);
	int ListDelete(SeqList* L, int i, sever* x);
	int ListGet(SeqList L, int i, sever* x);
};
