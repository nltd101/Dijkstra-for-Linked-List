#include "Cnode.h"
#include "Header.h"

void printNeareast();


void main() {

   
	cout << endl << "Duong di ngan nhat tu a toi d: "<<endl;
	
	printNeareast();
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
	a->LISTweight.push_back(5);
	a->LISTn.push_back(d);
	a->LISTweight.push_back(10);
	a->LISTn.push_back(b);
	a->LISTweight.push_back(2);


	b->LISTn.push_back(c);
	b->LISTweight.push_back(1);


	c->LISTn.push_back(d);
	c->LISTweight.push_back(1);

	d->LISTn.push_back(b);
	d->LISTweight.push_back(1);

	e->LISTn.push_back(d);
	e->LISTweight.push_back(3);
	e->LISTn.push_back(f);
	e->LISTweight.push_back(7);

	f->LISTn.push_back(d);
	f->LISTweight.push_back(2);

	list<Cnode*> list;
	list.push_back(a);
	list.push_back(b);
	list.push_back(c);
	list.push_back(d);
	list.push_back(e);
	list.push_back(f);
	Dijktra(a, "d",list);
	printWay(d);
	cout << "Chi phi: " << d->DISTANCE;
}
