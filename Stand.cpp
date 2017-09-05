#include "Stand.h"
#include "Trace.h"
#include "Order.h"

/* CONSTRUCTORS */
Stand::Stand()
{
	this->head = new Order();
	this->tail = new Order();
	this->head->setNext(this->tail);
	this->tail->setPrev(this->head);
	this->curr = 0;
	this->peak = 0;
	// Trace::out("---------------------------------------------------------\n");
	// Trace::out("    New Stand: currNumOrders:%d  peakNumOrders:%d\n", this->curr, this->peak);
	// Trace::out("---------------------------------------------------------\n\n");
}

Stand::Stand(const Stand &in) {
	this->head = in.head;
	this->tail = in.tail;
	this->curr = in.curr;
	this->peak = in.peak;
}

Stand & Stand::operator= (const Stand &in) {
	delete this->head;
	delete this->tail;
	this->head = in.head;
	this->tail = in.tail;
	this->curr = in.curr;
	this->peak = in.peak;
	return *this;
}

Stand::~Stand() {
	Order* p = this->head->getNext();
	while (p != this->tail) {
		Order* s = p;
		p = p->getNext();
		// Trace::out("    ---> Cancel order:%s \n", s->orderToString(s->getName()));
		delete s;
	}
	delete head;
	//delete p;
	delete this->tail;
}

/* ADD/REMOVE */

void Stand::Add(Order* in) {
	Order* nOrder = in;
	if (head->getNext() == tail) {
		this->head->setNext(nOrder);
		this->tail->setPrev(nOrder);
		nOrder->setNext(this->tail);
		nOrder->setPrev(this->head);
		this->curr++;
	}
	else {
		nOrder->setPrev(this->tail->getPrev());
		this->tail->getPrev()->setNext(nOrder);
		nOrder->setNext(this->tail);
		this->tail->setPrev(nOrder);
		this->curr++;
	}
	if (this->curr > this->peak)
		this->peak = this->curr;
	// Trace::out("Add->Order(%s)\n", nOrder->orderToString(nOrder->getName()));
	//delete o;
}

void Stand::Remove(Name in) {
	Order* pIdx = this->head;
	while (pIdx != nullptr) {
		pIdx = pIdx->getNext();
		if (pIdx->getName() == in)
			break;
		//Trace::out("%s\n", pIdx->orderToString(pIdx->getName()));
	}
	// Trace::out("-------------------------------------------------\n");
	// Trace::out("\n");
	// Trace::out("Remove->Order(%s)\n", pIdx->orderToString(pIdx->getName()));
	// Trace::out("\n");
	// Trace::out("-------------------------------------------------\n");
	// //Order* nNext = pIdx->getNext()->getNext();
	//pIdx->getPrev()->setNext(nNext);
	//this->curr--;
	Order* nNext = pIdx->getNext();
	pIdx->getPrev()->setNext(nNext);
	nNext->setPrev(pIdx->getPrev());
	this->curr--;
	//delete nNext;
	//this->Print();
	delete pIdx;
	
}

/* PRINT */
void Stand::Print() {
	//char* l = "-----------------------------------------------------------";
	//if ((this->curr == 0) && (this->peak == 0)) {
	//} else
	// Trace::out("\n-------------------------------------------------\n");
	// Trace::out("\nStand: currNumOrders:%d  peakNumOrders:%d\n\n", this->curr, this->peak);
	Order* idx = this->head;
	while (idx->getNext() != this->tail) {
		idx = idx->getNext();
		idx->printOrder();
		
	}
	//delete idx;
}

// void Stand::printStandstats() {
// }
