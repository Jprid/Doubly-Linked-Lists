#ifndef Stand_H
#define Stand_H

#include "Order.h"
#include "Trace.h"
#include "Names.h"

class Stand {
public:
	Stand();
	Stand(const Stand &);
	Stand & operator= (const Stand &);
	~Stand();
	void Add(Order *);
	void Remove(Name);
	void Print();
private:
	Order *head;
	Order *tail;
	int curr;
	int peak;
	
};

#endif
