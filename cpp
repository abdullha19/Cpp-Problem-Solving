// الكورس الخامس الدرس 19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;
// Random 3 numbers from 1 to 10

int RandomNumber()
{
	return rand() % 10 + 1;
}


int main()
{
	srand(time(0)); // Seed the random number generator with the current time
	cout << "Random Number 1: " << RandomNumber() << endl;
	cout << "Random Number 2: " << RandomNumber() << endl;
	cout << "Random Number 3: " << RandomNumber() << endl;
	return 0;
}

