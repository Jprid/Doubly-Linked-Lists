#ifndef HotDog_H
#define HotDog_H
#include "Condiments.h"
#include "Trace.h"
class HotDog 
{
public:

/*--CONSTRUCTORS--------------------------------------------------------------------------------*/

	HotDog();							  // default constructor
	HotDog(Condiments);					  // constructor that takes in condiments
	HotDog(const HotDog &);				  // copy constructor
	HotDog& 		operator = (const HotDog &); // = operator overload
	~HotDog();							  // destructor

/*--OVERLOADED OPERATORS-------------------------------------------------------------------------*/

	bool 			operator== (const HotDog & in);
	bool 			operator!= (const HotDog & in);

/*--NEXT/PREV-----------------------------------------------------------------------------------*/
	
	HotDog* 		getNext();
	HotDog* 		getPrev();
	void			setNext(HotDog*);
	void			setPrev(HotDog*);

/*--CONDIMENTS-------------------------------------------------------------------------------*/

	void			Add(Condiments _c);
	void			Minus(Condiments _c);
	unsigned char	getCondiment();

/*--PRINT-----------------------------------------------------------------------------------*/

	void printMe();

private:
	HotDog* next;
	HotDog* prev;
	unsigned char condiment;
	unsigned char pad0;
	unsigned char pad1;
	unsigned char pad2;
};

#endif
