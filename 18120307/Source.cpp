#include "Header.h"


void Dijktra(Cnode* u,string LABEL,list<Cnode*>ListDistance) {
	
	u->DISTANCE = 0;
	Cnode* nodemin=NULL;
	while (true)
	{
		int minDistance=-1;
		for (list<Cnode*>::iterator it = ListDistance.begin();it != ListDistance.end();it++)
		{
			if ((!(*it)->CHECKED))
			{
				if ((minDistance == -1)||((*it)->DISTANCE<minDistance))
				{
					
					minDistance = (*it)->DISTANCE;
					nodemin = *it;
				}
			}
		}
		if ((nodemin->LABEL==LABEL)||(minDistance==-1))
		{
			break;
		}
		nodemin->CHECKED = true;
		;
		list<int>::iterator itdis = nodemin->LISTweight.begin();
		for (list<Cnode*>::iterator it = nodemin->LISTn.begin();
			 it!= nodemin->LISTn.end(), itdis!=nodemin->LISTweight.end(); it++,itdis++)
		{
			//if (!(*it)->CHECKED)
			{
				//(*it)->CHECKED = true;
				if ((nodemin->DISTANCE+*itdis<(*it)->DISTANCE))
				{
					(*it)->DISTANCE = nodemin->DISTANCE + *itdis;
					(*it)->TRACE = nodemin;
				}

			}
		}
	}
}
