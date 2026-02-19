// Problem #49.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

int Myceil(float Number)
{
	if (GetFractionPart(Number) > 0)
		return int(Number) + 1;
	else
		return int(Number);
}

int main()
{


	float Number = Readanumber();  

	cout << "My Round Result : " << Myceil(Number) << endl;

	cout << "C++ Round Result: " << ceil(Number) << endl;

	return 0;  

}
