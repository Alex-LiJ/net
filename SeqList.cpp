#include"SeqList.h"
#include<iostream>
using namespace std;

void SeqList::ListInitiate(SeqList* L) { //顺序表的初始化
	L->size = 0;
}

int SeqList::ListLength(SeqList L) { //求出当前顶点的个数
	return L.size;
}

int SeqList::ListInsert(SeqList* L, int i, sever x) { //在顺序表L的第i个位置插入x
	int j;
	if (L->size >= 30) {
		cout << "顺序表已满无法插入" << endl;
		return 0;
	}
	else if (i<0 || i>L->size) {
		cout << "输入错误位置" << endl;
		return 0;
	}
	else {									 //插入成功返回1，否则返回0
		for (j = L->size; j > i; j--)
			L->list[j] = L->list[j - 1];
		L->list[i] = x;
		L->size++;
		return 1;
	}
}

int SeqList::ListDelete(SeqList* L, int i, sever* x) { //删除顺序表L中位置为i的数据元素并存到x中
	int j;
	if (L->size <= 0) {
		cout << "顺序表为空" << endl;
		return 0;
	}
	else if (i<0 || i>L->size - 1) {
		cout << "输入错误位置" << endl;
		return 0;
	}
	else {
		*x = L->list[i];
		for (j = i + 1; j <= L->size - 1; j++)
			L->list[j - 1] = L->list[j];
		L->size--;
		return 1;
	}

}

int SeqList::ListGet(SeqList L, int i, sever* x) { //取出顺序表中的第i个元素
	if (i<0 || i>L.size - 1) {
		cout << "输入错误位置" << endl;
		return 0;
	}
	else {
		*x = L.list[i];
		return 1;
	}
}
