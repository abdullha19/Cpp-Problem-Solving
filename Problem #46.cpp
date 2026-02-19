// Problem #46.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
float Readenumber()
{
	float number;
	cout << "Enter a number: ";
	cin >> number;
	return number;
}

float Myabs(int number)
{
	if (number < 0)
		return -number;
	else
		return number;
}
float Myabscpp(int number)
{
	return (number < 0) ? -number : number;
}


int main()
{
	float number = Readenumber();
	cout << "The absolute value of " << number << " is: " << Myabs(number) << endl;
	cout << "The absolute value of " << number << " is: " << Myabscpp(number) << endl;
}

