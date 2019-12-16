#pragma once
#include<iostream>
#include"SeqList.h"
using namespace std;

#define INFiNITY 1000000

struct Edge {
	int dest; //边的另一顶点位置
	int cost; //边的权值
	Edge* next; //下一条边的指针
};

struct sever {
	int number; //服务器号
	char name[20]; //服务器名
	char ip[30]; //服务器ip
};


class Graph {
public:
	Graph(); //构造函数
	~Graph(); //析构函数
	void dijkstra();
	void addSever();
	void addEdge();
	void deleteSever();
	void deletEedg();
	void serch();
	void show();
protected:
	SeqList vertices; //存放顶点顺序表
	int m[30][30]; //邻接矩阵
	int numEdges; //边的数目
};
