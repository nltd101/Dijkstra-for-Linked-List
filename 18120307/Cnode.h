#pragma once
#include <iostream>
#include <list>
using namespace std;
class Cnode
{
public:
	string LABEL;
	list<Cnode*> LISTn;
	list<int> LISTweight;
	int DISTANCE;
	bool CHECKED;
	Cnode* TRACE;
	Cnode(string);
};

