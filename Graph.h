#pragma once
#include<iostream>
#include"SeqList.h"
using namespace std;

#define INFiNITY 1000000

struct Edge {
	int dest; //�ߵ���һ����λ��
	int cost; //�ߵ�Ȩֵ
	Edge* next; //��һ���ߵ�ָ��
};

struct sever {
	int number; //��������
	char name[20]; //��������
	char ip[30]; //������ip
};


class Graph {
public:
	Graph(); //���캯��
	~Graph(); //��������
	void dijkstra();
	void addSever();
	void addEdge();
	void deleteSever();
	void deletEedg();
	void serch();
	void show();
protected:
	SeqList vertices; //��Ŷ���˳���
	int m[30][30]; //�ڽӾ���
	int numEdges; //�ߵ���Ŀ
};
