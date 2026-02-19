// Problem #50.cpp : This file contains the 'main' function. Program execution begins and ends there.
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


float MySqrt(float Number)
{
	return pow(Number, 0.5);
}
int main()
{


	float Number = Readanumber();

	cout << "My Round Result : " << MySqrt(Number) << endl;

	cout << "C++ Round Result: " << sqrt(Number) << endl;

	return 0;

}
