// Problem #47.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
float Readanumber()
{
	float Number;
	cout << "Enter a number: ";
	cin >> Number;
	return Number;
}
float GetFractionPart(float Number)
{
	return Number - int(Number);
}

int MyRound(float Number)
{
    int IntPart;  
    IntPart = int(Number);  

    float FractionsPart = GetFractionPart(Number);

    if (abs(FractionsPart) >= 0.5)
    {
        if (Number > 0)
            return ++IntPart;
        else
            return --IntPart;
    }
    else
    {
        return IntPart;
    }
}

int main()
{
	
	
		float Number = Readanumber();  // Read a number from the user.

		// Print the rounded value using the custom MyRound function.
		cout << "My Round Result : " << MyRound(Number) << endl;

		// Print the rounded value using the built-in round function for comparison.
		cout << "C++ Round Result: " << round(Number) << endl;

		return 0;  // Return 0 to indicate successful program execution.
	
}
