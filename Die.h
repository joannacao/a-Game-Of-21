#pragma once

class Die {
private:
	int sides;
	int value; 

public:
	Die(int = 6); //default sides value is 6
	void roll(); //method for rolling
	int getSides(); //accessors
	int getValue(); 
};
