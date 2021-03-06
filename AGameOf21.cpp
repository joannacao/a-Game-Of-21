// AGameOf21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Die.h"
#include <iostream>

using namespace std; 


int main()
{
	Die die1; //creates the first dice 
	Die die2; //creates the second dice 

	int userHand = 0; //creates and initializes the value of the user's hand 
	int compHand = 0; //creates and initializes the value of the computer's hand

	int userInput; //var for user input

	cout << "Starting Blackjack" << endl; 
	do { //occurs at least once before breaking
		if (userHand > 21) { //double checks if the user's hand is greater than 21
			break; //if it is, break out of the loop
		}
		cout << "Would you like to roll dice to accumulate points? Enter 0 for no and any other number for yes." << endl; //prompt
		cin >> userInput; //stores answer into user input var
		if (userInput == 0) { //if the user doesnt want to play, break out of the loop
			break; 
		}
		die1.roll(); //rolls the first die
		die2.roll(); //rolls the second die
		compHand += die1.getValue() + die2.getValue(); //stores the rolled values into the compHand var
		die1.roll(); //rolls die for user
		die2.roll(); 
		cout << "The computer has rolled. Your first roll is " << die1.getValue(); //indicates that the computer already got their hand 
		cout << endl << "Your second roll is " << die2.getValue() << endl; //your hand is displayed
		userHand += die1.getValue() + die2.getValue();
		cout << "Your hand is " << userHand << endl;
	} while ((userHand <= 21) && (userInput != 0)); //will loop if user wants to keep rolling or until their hand goes beyond 21

	cout << "The computer's total is " << compHand << endl; //once out of the loop, the computer's total is displayed
	cout << "Your hand is " << userHand << endl; //your hand is displayed
	if (userHand > 21) { //depending on the comparisons, prints out who won
		cout << "The computer wins!" << endl; 
	}
	else if (compHand > 21) {
		cout << "You win!" << endl; 
	}
	else if (userHand > compHand) {
		cout << "You win!" << endl; 
	}
	else if (userHand < compHand) {
		cout << "The computer wins!" << endl; 
	}
	else if (userHand == compHand) {
		cout << "You tied!" << endl; 
	}
	
	cout << "Thank you for playing!" << endl;
 
    return 0;
}

