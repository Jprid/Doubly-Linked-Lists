#include <stdio.h>
#include <assert.h>
#include "HotDog.h"
#include "Order.h"
#include "Stand.h"
#include "Trace.h"



// I will be testing this code
// Add files to the project to make these functions work
// Do not add source code to main.cpp
// ONLY add header files
// Make sure the output looks the same

int main()
{

	
	// useful samples

// Remove for grading

	// Jaime order:
	HotDog  hotdog_A;
		hotdog_A.Add(Condiments::Everything);
		
	HotDog  hotdog_B;
		hotdog_B.Add(Condiments::Yellow_Mustard);
		hotdog_B.Add(Condiments::Sport_Peppers);

	// HotDog  hotdog_C;
	// 	hotdog_C.Add(Condiments::Celery_Salt);
	// 	hotdog_C.Add(Condiments::Tomato_Wedge);
	// 	hotdog_C.Add(Condiments::Green_Relish);

	// Order *pOrder_Jamie = new Order(Name::Jaime);
	// 	pOrder_Jamie->Add(hotdog_A);
	// 	pOrder_Jamie->Add(hotdog_B);
	// 	pOrder_Jamie->Add(hotdog_C);


	// // Cersei order:
	// HotDog hotdog_D;
	// 	hotdog_D.Add(Condiments::Plain);

	// Order *pOrder_Cersei = new Order(Name::Cersei);
	// 	pOrder_Cersei->Add(hotdog_D);
	// 	pOrder_Cersei->Add(hotdog_D);
	// 	pOrder_Cersei->Add(hotdog_D);

	// // Arya order:
	// HotDog hotdog_E;
	// 	hotdog_E.Add(Condiments::Everything);
	// 	hotdog_E.Minus(Condiments::Sport_Peppers);

	// Order *pOrder_Arya = new Order(Name::Arya);
	// 	pOrder_Arya->Add(hotdog_E);

	// // Sansa order:
	// HotDog hotdog_F;
	// 	hotdog_F.Add(Condiments::Chopped_Onions);
	// 	hotdog_F.Add(Condiments::Yellow_Mustard);
	// 	hotdog_F.Add(Condiments::Green_Relish);

	// HotDog hotdog_G;
	// 	hotdog_G.Add(Condiments::Everything);

	// Order *pOrder_Sansa = new Order(Name::Sansa);
	// 	pOrder_Sansa->Add(hotdog_F);
	// 	pOrder_Sansa->Add(hotdog_G);

	// // Create Hot Dog stand
	// Stand *pStand = new Stand();
	// 	pStand->Add(pOrder_Jamie);
	// 	pStand->Add(pOrder_Cersei);
	// 	pStand->Add(pOrder_Arya);
	// 	pStand->Add(pOrder_Sansa);
	// 	pStand->Print();

	// // Remove
	// 	pStand->Remove(Name::Cersei);
	// 	pStand->Print();

		

	// // Remove
	// 	pStand->Remove(Name::Sansa);
	// 	pStand->Print();

	// // Remove
	// 	pStand->Remove(Name::Jaime);
	// 	pStand->Print();

	// // Remove
	// 	pStand->Remove(Name::Arya);
	// 	pStand->Print();

	// // Great Chicago Fire
	// 	// Trace::out("\n");
	// 	// Trace::out("------------------------------------------------\n");
	// 	// Trace::out("   FIRE: Original HotDog stand is gone!\n");
	// 	// Trace::out("------------------------------------------------\n");
	// 	// Trace::out("\n");
	// 	// delete pStand;

	// // Samwell order:
	// 	HotDog hotdog_H;
	// 	hotdog_H.Add(Condiments::Chopped_Onions);
	// 	hotdog_H.Add(Condiments::Yellow_Mustard);
	// 	hotdog_H.Add(Condiments::Celery_Salt);
	// 	hotdog_H.Add(Condiments::Ketchup);

	// 	HotDog hotdog_I;
	// 	hotdog_I.Add(Condiments::Yellow_Mustard);

	// 	Order *pOrder_Samwell = new Order(Name::Samwell);
	// 	pOrder_Samwell->Add(hotdog_H);
	// 	pOrder_Samwell->Add(hotdog_H);
	// 	pOrder_Samwell->Add(hotdog_I);
	// 	pOrder_Samwell->Add(hotdog_I);

	// // Tyrion order:
	// 	HotDog hotdog_J;
	// 	hotdog_J.Add(Condiments::Green_Relish);
	// 	hotdog_J.Add(Condiments::Yellow_Mustard);
	// 	hotdog_J.Add(Condiments::Sport_Peppers);

	// 	Order *pOrder_Tyrion = new Order(Name::Tyrion);
	// 	pOrder_Tyrion->Add(hotdog_J);
	// 	pOrder_Tyrion->Add(hotdog_J);

	// // Jon Order:
	// 	HotDog hotdog_K;
	// 	hotdog_K.Add(Condiments::Everything);

	// 	Order *pOrder_Jon = new Order(Name::Jon);
	// 	pOrder_Jon->Add(hotdog_K);
	// 	pOrder_Jon->Add(hotdog_K);

	// 	// Create Hot Dog stand (Take 2)
	// 	Stand *pNewStand = new Stand();
	// 	pNewStand->Add(pOrder_Samwell);
	// 	pNewStand->Add(pOrder_Tyrion);
	// 	pNewStand->Add(pOrder_Jon);
	// 	pNewStand->Print();

		// Board of Health inspections
		//Trace::out("\n");
		//Trace::out("------------------------------------------------\n");
		//Trace::out("   Board of Health: IMMEDIATELY Closed!\n");
		//Trace::out("------------------------------------------------\n");
		//Trace::out("\n");
		// delete pNewStand;

}