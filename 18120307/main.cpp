#include "Cnode.h"
#include "Header.h"
void runbfs();
void rundfs();
void printNeareast();


void main() {
	cout << "Thu tu duyen dfs: "; 
	rundfs();
	cout << endl <<"Thu tu duyen bfs: ";
	runbfs();
	cout << endl << "Duong di ngan nhat tu a toi d: ";
	printNeareast();
}
void runbfs() {
	Cnode* a = new Cnode("a");
	Cnode* b = new Cnode("b");
	Cnode* c = new Cnode("c");
	Cnode* d = new Cnode("d");
	Cnode* e = new Cnode("e");
	Cnode* f = new Cnode("f");
	a->LISTn.push_back(f);
	a->LISTn.push_back(d);
	a->LISTn.push_back(b);

	b->LISTn.push_back(c);

	c->LISTn.push_back(d);
	
	d->LISTn.push_back(b);

	e->LISTn.push_back(d);
	e->LISTn.push_back(f);

	f->LISTn.push_back(d);
	

	list<Cnode*> list;
	a->CHECKED = true;
	list.push_back(a);
	BFS(list);
}
void rundfs() {
	Cnode* a = new Cnode("a");
	Cnode* b = new Cnode("b");
	Cnode* c = new Cnode("c");
	Cnode* d = new Cnode("d");
	Cnode* e = new Cnode("e");
	Cnode* f = new Cnode("f");
	a->LISTn.push_back(f);
	a->LISTn.push_back(d);
	a->LISTn.push_back(b);

	b->LISTn.push_back(a);
	b->LISTn.push_back(d);
	b->LISTn.push_back(c);


	c->LISTn.push_back(b);
	c->LISTn.push_back(d);

	d->LISTn.push_back(c);
	d->LISTn.push_back(b);
	d->LISTn.push_back(a);
	d->LISTn.push_back(f);
	d->LISTn.push_back(e);

	e->LISTn.push_back(d);
	e->LISTn.push_back(f);

	f->LISTn.push_back(e);
	f->LISTn.push_back(d);
	f->LISTn.push_back(a);
	DFS(a);
}
bool printWay(Cnode* node) {
	if (node->LABEL == "a")
	{
		cout << node->LABEL << " ";
		return true;
	}
	if (node->TRACE == NULL)
	{
		return false;
	}
	bool temp = false;
	temp = printWay(node->TRACE);
	if (temp)
	{
		cout << node->LABEL << " ";
	}
	return temp;
}
void printNeareast() {
	Cnode* a = new Cnode("a");
	Cnode* b = new Cnode("b");
	Cnode* c = new Cnode("c");
	Cnode* d = new Cnode("d");
	Cnode* e = new Cnode("e");
	Cnode* f = new Cnode("f");
	a->LISTn.push_back(f);
	a->LISTn.push_back(d);
	a->LISTn.push_back(b);

	b->LISTn.push_back(c);

	c->LISTn.push_back(d);

	d->LISTn.push_back(b);

	e->LISTn.push_back(d);
	e->LISTn.push_back(f);

	f->LISTn.push_back(d);


	list<Cnode*> list;
	a->CHECKED = true;
	list.push_back(a);
	FindNearest(list);
	printWay(d);
}
