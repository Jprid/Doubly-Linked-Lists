#include "Condiments.h"
#include "HotDog.h"
#include <typeinfo>
#include <stdio.h>


/* Hotdog class */
// default constructor 
HotDog::HotDog() {
	// sets to plain
	this->next = nullptr;
	this->prev = nullptr;
	this->condiment = static_cast<unsigned char>(Condiments::Plain);
}

// copy constructor
HotDog::HotDog(const HotDog &in)
{
	this->next = in.next;
	this->prev = in.prev;
	this->condiment = in.condiment;
}

// = operator overload
HotDog & HotDog::operator = (const HotDog &in)
{
	this->next = in.next;
	this->prev = in.prev;
	this->condiment = in.condiment;
	return *this;
}

// destructor
HotDog::~HotDog()
{}


/*--OVERLOADED OPERATORS-------------------------------------------------------------------------*/
bool HotDog::operator== (const HotDog & in)
{
	if ((typeid(in) == typeid(this) && (this->next == in.next) && (this->prev == in.prev)))
		return true;
	else
		return false;
}
bool HotDog::operator!= (const HotDog & in)
{
	if ((typeid(in) != typeid(this) || (this->next != in.next) || (this->prev != in.prev)))
		return true;
	else
		return false;
}

/*-----------------------------------------------------------------------------------------------*/
// setters and getters
void HotDog::setNext(HotDog* in)
{
	this->next = in;
}

void HotDog::setPrev(HotDog* in)
{
	this->prev = in;
}

// getters
HotDog * HotDog::getNext()
{
	return next;
}

HotDog * HotDog::getPrev()
{
	return prev;
}


/*------------------------*/
unsigned char HotDog::getCondiment()
{
	return this->condiment;
}


//add condiments to end of list
void HotDog::Add(Condiments _c) 
{
	// cNode n = cNode(_c
	this->condiment |= static_cast<unsigned char>(_c);
}

//remove condiments
void HotDog::Minus(Condiments _c)
{
	this->condiment = static_cast<unsigned int>(this->condiment ^ static_cast<unsigned char>(_c));
}
