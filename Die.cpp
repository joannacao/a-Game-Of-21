#include "stdafx.h"
#include <cstdlib>
#include <ctime>
#include "Die.h"

using namespace std; 

Die::Die(int numSides) {
	unsigned seed = time(0); 

	srand(seed); //sets up to use random

	sides = numSides; //stores sides value

	roll(); //does a preliminary roll
}

void Die::roll() {
	const int MIN_VALUE = 1; //sets minimum value as 1

	value = (rand() % (sides - MIN_VALUE + 1)) + MIN_VALUE; //stores random value ranging from the number of sides to 1 
}

int Die::getSides() {
	return sides; 
}

int Die::getValue() {
	return value; 
}
