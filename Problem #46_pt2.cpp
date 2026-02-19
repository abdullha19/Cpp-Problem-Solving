// Problem #46_pt2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber()
{
    float Number;  

    
    cout << "Please enter a number? ";
    cin >> Number;  

    return Number; 
}
float MyABS(float Number)
{
    if (Number > 0)
        return Number;
    else
        return Number * -1;
}

int main()
{

	float Number = ReadNumber();
	cout << "The absolute value of " << Number << " is: " << MyABS(Number) << endl;
	cout << "The absolute value of " << Number << " is: " << abs(Number) << endl;
}

