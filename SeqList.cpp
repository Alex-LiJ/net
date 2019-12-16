#include"SeqList.h"
#include<iostream>
using namespace std;

void SeqList::ListInitiate(SeqList* L) { //˳���ĳ�ʼ��
	L->size = 0;
}

int SeqList::ListLength(SeqList L) { //�����ǰ����ĸ���
	return L.size;
}

int SeqList::ListInsert(SeqList* L, int i, sever x) { //��˳���L�ĵ�i��λ�ò���x
	int j;
	if (L->size >= 30) {
		cout << "˳��������޷�����" << endl;
		return 0;
	}
	else if (i<0 || i>L->size) {
		cout << "�������λ��" << endl;
		return 0;
	}
	else {									 //����ɹ�����1�����򷵻�0
		for (j = L->size; j > i; j--)
			L->list[j] = L->list[j - 1];
		L->list[i] = x;
		L->size++;
		return 1;
	}
}

int SeqList::ListDelete(SeqList* L, int i, sever* x) { //ɾ��˳���L��λ��Ϊi������Ԫ�ز��浽x��
	int j;
	if (L->size <= 0) {
		cout << "˳���Ϊ��" << endl;
		return 0;
	}
	else if (i<0 || i>L->size - 1) {
		cout << "�������λ��" << endl;
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

int SeqList::ListGet(SeqList L, int i, sever* x) { //ȡ��˳����еĵ�i��Ԫ��
	if (i<0 || i>L.size - 1) {
		cout << "�������λ��" << endl;
		return 0;
	}
	else {
		*x = L.list[i];
		return 1;
	}
}
