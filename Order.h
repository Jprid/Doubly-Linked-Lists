#ifndef Order_H
#define Order_H

#include "Condiments.h"
#include "HotDog.h"
#include "Names.h"
#include <typeinfo>
#include <stdio.h>

class Order {
	
public:
	/* Constructors */
	Order();
	Order(Name);
	Order(const Order &);
	Order(const Order *);
	Order & operator= (const Order &);
	~Order();
	
	/*---------------------------*/
	
	/*--OVERLOADED OPERATORS-----*/
	bool	operator== (const Order &);
	bool	operator!= (const Order &);
	/*---------------------------*/

	/*--GET/SET----*/
	Order*	getPrev();
	Order*	getNext();
	void 	setPrev(Order*);
	void	setNext(Order*);
	Name 	getName();

	/*--ADD/REMOVE-*/
	void 	Add(const HotDog &);
	void 	Remove(const HotDog &);
	
	/*--Print_helpers---*/
	void	printOrder();
	char*	orderToString(Name);
	void	printCondiments(unsigned char);
	
private:
	Order*	next;
	Order*	prev;
	HotDog*	head;
	HotDog*	tail;
	Name 	name;
};

#endif