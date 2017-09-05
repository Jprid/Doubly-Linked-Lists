#include "Order.h"
#include "Names.h"
#include <typeinfo>
/*------------------------------------------------------------------------------------
 * constructor
 */
Order::Order() {
	this->head = new HotDog();
	this->tail = new HotDog();
	this->name;
	this->head->setNext(tail);
	this->tail->setPrev(head);
}

Order::Order(Name in)
{
	this->name = in;
	this->head = new HotDog();
	this->tail = new HotDog();
	this->head->setNext(tail);
	this->tail->setPrev(head);
}

Order::Order(const Order & in)
{
	this->name = in.name;
	this->next = in.next;
	this->prev = in.prev;
	this->head = in.head;
	this->tail = in.tail;
}

Order::Order(const Order * in)
{
	this->name = in->name;
	this->next = in->next;
	this->prev = in->prev;
	this->head = in->head;
	this->tail = in->tail;
}

Order & Order::operator=(const Order & in)
{
	delete this->head;
	delete this->tail;
	this->name = in.name;
	this->next = in.next;
	this->prev = in.prev;
	this->head = in.head;
	this->tail = in.tail;
	return *this;
}

Order::~Order()
{
	// KEENAN NOTES: deleting all the hotdogs
	//				 walk the list in order and delete the hotdogs
	HotDog* idx = this->head;
	//delete this->head;
	this->tail->getPrev()->setNext(nullptr);

	while (idx->getNext() != nullptr) {
		HotDog* tmp = idx->getNext();
		delete idx;
		idx = tmp;
	}
	delete idx;
	delete tail;
	
}

/* FXN:			Add(const HotDog &in) 
 * RETURN TYPE: void
 * DESC:		make sure to make a copy of the hotdog and then add it to the linked list
 */
void Order::Add(const HotDog &in)
{
	HotDog* newDog = new HotDog(in);
	if (this->head->getNext() == this->tail) {
		this->head->setNext(newDog);
		this->tail->setPrev(newDog);
		newDog->setNext(this->tail);
		newDog->setPrev(this->head);
		return;
	}
	newDog->setPrev(this->tail->getPrev());
	this->tail->getPrev()->setNext(newDog);
	newDog->setNext(this->tail);
	this->tail->setPrev(newDog);
}

/*  FXN:						Remove(const HotDog &in)
 *  RETURN:						void
 * 								remove hotdog from order
 */
void Order::Remove(const HotDog &in) {
	HotDog* idx = this->head;
	while (idx->getNext() != nullptr) {
		idx = idx->getNext();
		if (*idx == in)
			break;
	}
	HotDog* nNext = idx->getNext();
	idx->getPrev()->setNext(nNext);
	nNext->setPrev(idx->getPrev());
	delete idx;
	//delete nNext;
}

// PRINT ORDER
void Order::printOrder() {
	// walk list, calling printMe() each hotdog
	HotDog* pIdx = this->head;
	int i = 1;
	// Trace::out("Order: %s \n", orderToString(this->name));
	while (pIdx->getNext() != this->tail) {
		//Trace::out("\tHotDog:%d \n", i);
		pIdx = pIdx->getNext();
		printCondiments(pIdx->getCondiment());
		i++;
	}
	//Trace::out("\n");
}

/*--OVERLOADED OPERATORS-------------------------------------------------------------------------*/
bool Order::operator== (const Order & in)
{
	if ((typeid(in) == typeid(this) && (this->next == in.next) && (this->prev == in.prev) && (this->name == in.name)))
		return true;
	else
		return false;
}

bool Order::operator!= (const Order & in)
{
	if ((typeid(in) != typeid(this) || (this->next != in.next) || (this->prev != in.prev) || (this->name != in.name)))
		return true;
	else
		return false;
}

/*-----------------------------------------------------------------------------------------------*/
// setters and getters
void Order::setNext(Order* in)
{
	this->next = in;
}

void Order::setPrev(Order* in)
{
	this->prev = in;
}

// getters
Order * Order::getNext()
{
	return this->next;
}

Order * Order::getPrev()
{
	return this->prev;
}

Name Order::getName() {
	return this->name;
}

char* Order::orderToString(Name _n) {
	switch (_n) {
		case Name::Arya:    return "Arya";
		case Name::Cersei:  return "Cersei";
		case Name::Jaime:   return "Jaime";
		case Name::Jon:     return "Jon";
		case Name::Samwell: return "Samwell";
		case Name::Sansa:   return "Sansa";
		case Name::Tyrion:  return "Tyrion";
		default: 			return "";
	}
}

void Order::printCondiments(unsigned char i) {	
	if (i == 0)
		printf("stuff\n");
	else
		printf("other stuff\n");
	// 	Trace::out("\t\tPlain \n");
	// if ((i & 0x01) > 0)
	// 	Trace::out("\t\tKetchup \n");
	// if ((i & 0x02) > 0)
	// 	Trace::out("\t\tYellow_Mustard \n");
	// if ((i & 0x04) > 0)
	// 	Trace::out("\t\tGreen_Relish \n");
	// if ((i & 0x08) > 0)
	// 	Trace::out("\t\tChopped_Onions \n");
	// if ((i & 0x10) > 0)
	// 	Trace::out("\t\tTomato_Wedge \n");
	// if ((i & 0x20) > 0)
	// 	Trace::out("\t\tPickle_Spear \n");
	// if ((i & 0x40) > 0)
	// 	Trace::out("\t\tSport_Peppers \n");
	// if ((i & 0x80) > 0)
	// 	Trace::out("\t\tCelery_Salt \n");
}