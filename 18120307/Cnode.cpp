#include "Cnode.h"

Cnode::Cnode(string Label)
{
	this->LABEL = Label;
	this->CHECKED = false;
	this->TRACE = NULL;
	this->DISTANCE = 1000000;
}
